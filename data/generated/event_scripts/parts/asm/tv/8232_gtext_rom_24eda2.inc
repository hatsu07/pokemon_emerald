	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+5 aliases)
	.globl gText_Rom_24EDA2
gText_Rom_24EDA2: @ 0x0824EDA2
	.string "おにいさん『でも　その\n{0xFD}{0x03}に　「{0xFD}{0x04}」って\pニックネームを　つけるあたり\n{0xFD}{0x02}さんの　センスが　わかるね！\pおねえさん『そうだねー$"
	.if (. - gText_Rom_24EDA2) > 0x43
	.error "gText_Rom_24EDA2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24EDA2) < 0x43
	.space 0x43 - (. - gText_Rom_24EDA2)
	.endif
