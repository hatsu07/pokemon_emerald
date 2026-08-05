	@ data/maps/DewfordTown/scripts.inc:639 DewfordTown_Text_HallSign
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1E516E
gText_Rom_1E516E: @ 0x081E516E
	.string "「ムロの しゅうかいじょ」\nみんなの じょうほう こうかんの ばしょ$"
	.if (. - gText_Rom_1E516E) != 0x23
	.error "gText_Rom_1E516E must retain its original byte length"
	.endif
