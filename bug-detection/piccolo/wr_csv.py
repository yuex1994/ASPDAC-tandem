import random

f = open('tv.txt', 'w')
sample_count = 100000

for i in range(sample_count):
  rs = random.randrange(16)
  rd = random.randrange(16)
  rt = random.randrange(16)
  imm1 = random.randrange(1 << 11)
  imm2 = random.randrange(16)
  imm3 = random.randrange(1 << 8)
  for i in range(1, 16):
    addi = f"{imm1:#0{5}x}" + hex(i)[-1] + "0113 \n"
    f.write(addi)
  imm1 = random.randrange(1 << 11)
  rs = random.randrange(16)
  andi = f"{imm1:#0{5}x}" + hex(rs)[-1] + "7113 \n"
  imm1 = random.randrange(1 << 11)
  rs = random.randrange(16)
  ori = f"{imm1:#0{5}x}" + hex(rs)[-1] + "6113 \n"
  imm1 = random.randrange(1 << 11)
  slti = f"{imm1:#0{5}x}" + hex(rs)[-1] + "2113 \n"  
  imm1 = random.randrange(1 << 11)
  rs = random.randrange(16)
  xori = f"{imm1:#0{5}x}" + hex(rs)[-1] + "4113 \n"
  imm2 = random.randrange(16)
  rs = random.randrange(16) 
  slli = "0x01" + hex(imm2)[-1] + hex(rs)[-1] + "1113 \n"
  imm2 = random.randrange(16)
  rs = random.randrange(16)
  srli = "0x01" + hex(imm2)[-1] + hex(rs)[-1] + "5113 \n"
  imm2 = random.randrange(16)
  rs = random.randrange(16)
  srai = "0x41" + hex(imm2)[-1] + hex(rs)[-1] + "0113 \n"
  f.write(andi + ori + xori + slli + srli + slti + srai)

  rs = random.randrange(16)
  rd = random.randrange(16)
  add = "0x00" + hex(rd)[-1] + hex(rs)[-1] + "0133 \n"
  rs = random.randrange(16)
  rd = random.randrange(16)  
  sub = "0x40" + hex(rd)[-1] + hex(rs)[-1] + "0133 \n"
  rs = random.randrange(16)
  rd = random.randrange(16)  
  sll = "0x00" + hex(rd)[-1] + hex(rs)[-1] + "1133 \n"
  rs = random.randrange(16)
  rd = random.randrange(16)  
  slt = "0x00" + hex(rd)[-1] + hex(rs)[-1] + "2133 \n"
  rs = random.randrange(16)
  rd = random.randrange(16)  
  sltu = "0x00" + hex(rd)[-1] + hex(rs)[-1] + "3133 \n"
  rs = random.randrange(16)
  rd = random.randrange(16)  
  xor = "0x00" + hex(rd)[-1] + hex(rs)[-1] + "4133 \n"
  rs = random.randrange(16)
  rd = random.randrange(16)  
  srl = "0x00" + hex(rd)[-1] + hex(rs)[-1] + "5133 \n"
  rs = random.randrange(16)
  rd = random.randrange(16)  
  sra = "0x40" + hex(rd)[-1] + hex(rs)[-1] + "5133 \n"
  rs = random.randrange(16)
  rd = random.randrange(16)  
  or_ = "0x00" + hex(rd)[-1] + hex(rs)[-1] + "6133 \n"
  rs = random.randrange(16)
  rd = random.randrange(16)  
  and_ = "0x00" + hex(rd)[-1] + hex(rs)[-1] + "7133 \n"
  f.write(add + sub + sll + slt + sltu + xor + srl + sra + or_ + and_)