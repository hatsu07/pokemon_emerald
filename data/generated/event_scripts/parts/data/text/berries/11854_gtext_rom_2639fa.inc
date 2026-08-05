	@ data/text/berries.inc:61 Route120_Text_MakeYourOwnImpressions
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2639FA
gText_Rom_2639FA: @ 0x082639FA
	.string "そっか……\nでも ちがうと かんじることも たいせつだね\pこれ あげる$"
	.if (. - gText_Rom_2639FA) != 0x24
	.error "gText_Rom_2639FA must retain its original byte length"
	.endif
