	@ data/maps/VerdanturfTown/scripts.inc:70 VerdanturfTown_Text_AirCleanHere
	.globl gText_Rom_1E619C
gText_Rom_1E619C: @ 0x081E619C
	.string "かざむきの かんけいで このまち には\nかざんばいが とんでくることは ない!\pくうきの おいしい このまちで くらせば\nからだが じょうぶでない ひとでも\lきっと げんきに なれる はずさ!{EOS}"
	.if (. - gText_Rom_1E619C) > 0x61
	.error "gText_Rom_1E619C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E619C) < 0x61
	.space 0x61 - (. - gText_Rom_1E619C)
	.endif
