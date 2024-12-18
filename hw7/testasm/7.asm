	      INT   0, 10032
	      SUP   0, main
	      RET   0, 0
prime:
	      INT   0, 24
	      LDA   1, 16
	     LITI   0, 0
	      STX   0, 1
	      POP   0, 1
L2:
	      LOD   1, 16
	      LOD   1, 12
	     LITI   0, 1
	     ADDI   0, 0
	     LSSI   0, 0
	      JPC   0, L3
	      LDA   0, 12
	      LOD   1, 16
	   OFFSET   0, 0
	     LITI   0, 1
	     STXB   0, 0
	      POP   0, 1
L1:
	      LOD   1, 16
	      LDA   1, 16
	      LDX   0, 1
	     INCI   0, 0
	      STO   0, 1
	      POP   0, 1
	      JMP   0, L2
L3:
	      LDA   0, 12
	     LITI   0, 0
	   OFFSET   0, 0
	     LITI   0, 0
	     STXB   0, 0
	      POP   0, 1
	      LDA   0, 12
	     LITI   0, 1
	   OFFSET   0, 0
	     LITI   0, 0
	     STXB   0, 0
	      POP   0, 1
	      LDA   1, 16
	     LITI   0, 2
	      STX   0, 1
	      POP   0, 1
L5:
	      LOD   1, 16
	      LOD   1, 16
	     MULI   0, 0
	      LOD   1, 12
	     LEQI   0, 0
	      JPC   0, L6
	      LDA   0, 12
	      LOD   1, 16
	   OFFSET   0, 0
	     LDIB   0, 0
	     LITI   0, 1
	     EQLI   0, 0
	      JPC   0, L7
	      LDA   1, 20
	      LOD   1, 16
	      LOD   1, 16
	     MULI   0, 0
	      STX   0, 1
	      POP   0, 1
L9:
	      LOD   1, 20
	      LOD   1, 12
	     LEQI   0, 0
	      JPC   0, L10
	      LDA   0, 12
	      LOD   1, 20
	   OFFSET   0, 0
	     LITI   0, 0
	     STXB   0, 0
	      POP   0, 1
L8:
	      LDA   1, 20
	      LOD   1, 20
	      LOD   1, 16
	     ADDI   0, 0
	      STX   0, 1
	      POP   0, 1
	      JMP   0, L9
L10:
L7:
L4:
	      LOD   1, 16
	      LDA   1, 16
	      LDX   0, 1
	     INCI   0, 0
	      STO   0, 1
	      POP   0, 1
	      JMP   0, L5
L6:
	      LDA   1, 16
	     LITI   0, 2
	      STX   0, 1
	      POP   0, 1
L12:
	      LOD   1, 16
	      LOD   1, 12
	     LEQI   0, 0
	      JPC   0, L13
	      LDA   0, 12
	      LOD   1, 16
	   OFFSET   0, 0
	     LDIB   0, 0
	     LITI   0, 1
	     EQLI   0, 0
	      JPC   0, L14
	      INT   0, 12
	      LDA   0, 10016
	      LOD   1, 16
	      POP   0, 5
	     ADDR   0, printf
	      CAL   0, 0
L14:
L11:
	      LOD   1, 16
	      LDA   1, 16
	      LDX   0, 1
	     INCI   0, 0
	      STO   0, 1
	      POP   0, 1
	      JMP   0, L12
L13:
	      INT   0, 12
	      LDA   0, 10024
	      POP   0, 4
	     ADDR   0, printf
	      CAL   0, 0
	      RET   0, 0
main:
	      INT   0, 12
	      INT   0, 12
	     LITI   0, 95
	      POP   0, 4
	     ADDR   0, prime
	      CAL   0, 0
	      INT   0, 12
	     LITI   0, 123
	      POP   0, 4
	     ADDR   0, prime
	      CAL   0, 0
	      RET   0, 0
.literal 10016  "%d "
.literal 10024  "\n"
