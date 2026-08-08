	@ data/maps/RustboroCity_House3/scripts.inc:26 RustboroCity_House3_Text_NamingPikachuPekachu
	.globl gText_Rom_20416F
gText_Rom_20416F: @ 0x0820416F
	.string "だからって ピカチュウに\n「ペカチュウ」って つけても\lほとんど かわって ないでしょうに……\pまあ わかりやすいのも\nニックネームには だいじ ですけどねぇ$"
	.if (. - gText_Rom_20416F) > 0x50
	.error "gText_Rom_20416F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20416F) < 0x50
	.space 0x50 - (. - gText_Rom_20416F)
	.endif
