import Data.List
import qualified Data.ByteString.Char8 as BS

convertBase :: Integer -> [Integer]
convertBase 0 = []
convertBase n = (mod n 5) : convertBase(div n 5) 

readInt :: BS.ByteString -> Integer
readInt x = case BS.readInteger x of
              Just (i, _) -> i
	      Nothing -> error "upseperable ints"

solve :: Integer -> Integer 
solve 0 = 1
solve 1 = 1
solve n = mod (6 * fst a) 10 where 
  	a = foldl(\(acc, i) x -> (mod(acc * product [1..x] * 2 ^ (i * x)) 10, i + 1))(1, 0) $ convertBase n 


main = BS.interact $ BS.unlines . map(BS.pack . show . solve) . map readInt . BS.lines