	@ data/text/trainers.inc:2018 Route119_Text_CatherinePostBattle
	.globl gText_Rom_25E9D3
gText_Rom_25E9D3: @ 0x0825E9D3
	.string "ずいぶん みがるな かっこう だけど\nひつような どうぐは もってるし\lきりょく たいりょく じゅうぶんね!{EOS}"
	.if (. - gText_Rom_25E9D3) > 0x37
	.error "gText_Rom_25E9D3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E9D3) < 0x37
	.space 0x37 - (. - gText_Rom_25E9D3)
	.endif
