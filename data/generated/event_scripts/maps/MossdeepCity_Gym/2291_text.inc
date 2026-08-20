	@ data/maps/MossdeepCity_Gym/scripts.inc:522 MossdeepCity_Gym_Text_TateAndLizaPostRematch
	.globl gText_Rom_20C23E
gText_Rom_20C23E: @ 0x0820C23E
	.string "フウ『なんど たおされたって\nまた たちなおって みせるからね!\pラン『だって あたしたち ふたり\nちからを あわせて がんばれるもの!{EOS}"
	.if (. - gText_Rom_20C23E) > 0x45
	.error "gText_Rom_20C23E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20C23E) < 0x45
	.space 0x45 - (. - gText_Rom_20C23E)
	.endif
