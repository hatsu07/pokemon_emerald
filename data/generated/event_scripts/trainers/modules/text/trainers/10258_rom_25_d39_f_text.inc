	@ data/text/trainers.inc:1496 Route115_Text_CyndyRematchIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25D39F
gText_Rom_25D39F: @ 0x0825D39F
	.string "さあ ポケモンしょうぶ いくわよ!{EOS}"
	.if (. - gText_Rom_25D39F) != 0x12
	.error "gText_Rom_25D39F must retain its original byte length"
	.endif
