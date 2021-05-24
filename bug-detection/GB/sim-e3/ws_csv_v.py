import random
f = open('tv_v.csv', 'w')
d_in = [i for i in range(488*2000)]
d_ptr = 0

for j in range(300):
  for i in range(3921):
    data = random.randint(0, 255)
    f.write("0, 1, " + str(data) + "\n")
    d_ptr += 1
  for i in range(473):
    data = random.randint(0, 255)
    f.write("1, 0, 0 \n")
    f.write("0, 1, " + str(data) + "\n")
    d_ptr += 1

  # for i in range(15):
  #   data = random.randint(0, 127)
  #   f.write("0, 1, " + str(data) + "\n")
  #   d_ptr += 1



# for i in range(480):
#         f.write("1, 0, 0 \n")
#         f.write("0, 1, " + str(d_in[d_ptr] % 127) + "\n")
#         d_ptr += 1

# for j in range(100):
#     for i in range(8):
#         f.write("0, 1, " + str(d_in[d_ptr] % 127) + "\n")
#         d_ptr += 1

#     for i in range(480):
#         f.write("1, 0, 0 \n")
#         f.write("0, 1, " + str(d_in[d_ptr] % 127) + "\n")
#         d_ptr += 1