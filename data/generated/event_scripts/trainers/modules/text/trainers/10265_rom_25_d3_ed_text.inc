	@ data/text/trainers.inc:1505 Route115_Text_HectorIntro (+1 aliases)
	.globl gText_Rom_25D3ED
gText_Rom_25D3ED: @ 0x0825D3ED
	.string "ぼく めずらしい ポケモン もってるんだ!\nよかったら みせて あげようか{EOS}"
	.if (. - gText_Rom_25D3ED) > 0x26
	.error "gText_Rom_25D3ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D3ED) < 0x26
	.space 0x26 - (. - gText_Rom_25D3ED)
	.endif
