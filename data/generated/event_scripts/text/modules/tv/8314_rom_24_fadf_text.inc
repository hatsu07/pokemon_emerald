	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+20 aliases)
	.globl gText_Rom_24FADF
gText_Rom_24FADF: @ 0x0824FADF
	.string "『ホウエン　おたから　たんていだん！』\pみんなー！\nかくしアイテム　みつけてるー！？\pきょうも　かくちで　もくげき　された\nひみつの　じょうほうを　しょうかい　するよ！\pきょうの　おてがみは\n「{0xFD}{0x02}　はっけん！」に\lついてだよー！！$"
	.if (. - gText_Rom_24FADF) > 0x75
	.error "gText_Rom_24FADF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24FADF) < 0x75
	.space 0x75 - (. - gText_Rom_24FADF)
	.endif
