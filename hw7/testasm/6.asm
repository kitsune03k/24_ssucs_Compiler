	      INT   0, 60
	      SUP   0, main
	      RET   0, 0
gcd:
	      INT   0, 32
	      LDA   1, 20
	      LOD   1, 12
	      STX   0, 1
	      POP   0, 1
	      LDA   1, 24
	      LOD   1, 16
	      STX   0, 1
	      POP   0, 1
L2:
	      LOD   1, 24
	     LITI   0, 0
	     NEQI   0, 0
	      JPC   0, L3
	      LDA   1, 28
	      LOD   1, 20
	      LOD   1, 24
	      MOD   0, 0
	      STX   0, 1
	      POP   0, 1
	      LDA   1, 20
	      LOD   1, 24
	      STX   0, 1
	      POP   0, 1
	      LDA   1, 24
	      LOD   1, 28
	      STX   0, 1
	      POP   0, 1
L1:
	      JMP   0, L2
L3:
	      LDA   1, -4
	      LOD   1, 20
	      STO   0, 1
	      RET   0, 0
	      RET   0, 0
lcm:
	      INT   0, 24
	      LDA   1, 20
	      INT   0, 16
	      LOD   1, 12
	      LOD   1, 16
	      POP   0, 5
	     ADDR   0, gcd
	      CAL   0, 0
	      STX   0, 1
	      POP   0, 1
	      LDA   1, -4
	      LOD   1, 12
	      LOD   1, 16
	     MULI   0, 0
	      LOD   1, 20
	     DIVI   0, 0
	      STO   0, 1
	      RET   0, 0
	      RET   0, 0
main:
	      INT   0, 20
	      LDA   1, 12
	     LITI   0, 15
	      STX   0, 1
	      POP   0, 1
	      LDA   1, 16
	     LITI   0, 50
	      STX   0, 1
	      POP   0, 1
	      INT   0, 12
	      LDA   0, 12
	      LOD   1, 12
	      LOD   1, 16
	      INT   0, 16
	      LOD   1, 12
	      LOD   1, 16
	      POP   0, 5
	     ADDR   0, gcd
	      CAL   0, 0
	      POP   0, 7
	     ADDR   0, printf
	      CAL   0, 0
	      INT   0, 12
	      LDA   0, 36
	      LOD   1, 12
	      LOD   1, 16
	      INT   0, 16
	      LOD   1, 12
	      LOD   1, 16
	      POP   0, 5
	     ADDR   0, lcm
	      CAL   0, 0
	      POP   0, 7
	     ADDR   0, printf
	      CAL   0, 0
	      RET   0, 0
.literal    12  "gcd(%d, %d) = %d\n"
.literal    36  "lcm(%d, %d) = %d\n"
