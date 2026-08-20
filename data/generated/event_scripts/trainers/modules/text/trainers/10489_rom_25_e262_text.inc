	@ data/text/trainers.inc:1829 Route117_Text_MelinaPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25E262
gText_Rom_25E262: @ 0x0825E262
	.string "おはなを みながら はしると\nきもちいいわよ!{EOS}"
	.if (. - gText_Rom_25E262) != 0x18
	.error "gText_Rom_25E262 must retain its original byte length"
	.endif
