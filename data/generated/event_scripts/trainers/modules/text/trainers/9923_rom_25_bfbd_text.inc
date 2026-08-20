	@ data/text/trainers.inc:1013 Route111_Text_BrookePostBattle
	.globl gText_Rom_25BFBD
gText_Rom_25BFBD: @ 0x0825BFBD
	.string "あたしも がんばって\nポケモン そだてた つもりだけど\lまだ やること いっぱい あるわね!{EOS}"
	.if (. - gText_Rom_25BFBD) > 0x2f
	.error "gText_Rom_25BFBD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BFBD) < 0x2f
	.space 0x2f - (. - gText_Rom_25BFBD)
	.endif
