from math import sqrt

for i in range(int(input())):
    U, W, v, V, w, u = map(int, input().split())
    volume = sqrt(4*u*u*v*v*w*w - u*u*(v*v+w*w-U*U)*(v*v+w*w-U*U) - \
                    v*v*(w*w+u*u-V*V)*(w*w+u*u-V*V) - \
                    w*w*(u*u+v*v-W*W)*(u*u+v*v-W*W)
                    + (v*v+w*w-U*U)*(w*w+u*u-V*V)*(u*u+v*v-W*W)) / 12;
    print("{:.4f}".format(volume))
