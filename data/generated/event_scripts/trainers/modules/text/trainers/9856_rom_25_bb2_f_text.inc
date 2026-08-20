	@ data/text/trainers.inc:917 Route111_Text_HeidiPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25BB2F
gText_Rom_25BB2F: @ 0x0825BB2F
	.string "すなあらしの なかで たたかうなら\nポケモンの たいりょくに きを つけないと\lすぐに きぜつ しちゃうわよ!{EOS}"
	.if (. - gText_Rom_25BB2F) != 0x38
	.error "gText_Rom_25BB2F must retain its original byte length"
	.endif
