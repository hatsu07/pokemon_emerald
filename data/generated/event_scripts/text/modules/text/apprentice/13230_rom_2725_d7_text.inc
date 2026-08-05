	@ data/text/apprentice.inc:763 gText_ApprenticeWhichMove15
	.globl gText_Rom_2725D7
gText_Rom_2725D7: @ 0x082725D7
	.string "ん?\n{PLAYER}{KUN}の ように みえるが……\lほんものかな?\lさいきん はやりの モノマネ では?\pいやいや! ほんもの ならいいんだ!\nきを わるく しないでくれ!\lそして ついでに でしの わたしに\lじょげんを おねがい したい\lわたしの {STR_VAR_1}の ことだ!\p{STR_VAR_2} と {STR_VAR_3}\nどっちの わざが つかえたら いいかね?$"
	.if (. - gText_Rom_2725D7) > 0x9d
	.error "gText_Rom_2725D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2725D7) < 0x9d
	.space 0x9d - (. - gText_Rom_2725D7)
	.endif
