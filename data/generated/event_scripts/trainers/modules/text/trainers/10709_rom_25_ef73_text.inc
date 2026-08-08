	@ data/text/trainers.inc:2153 Route120_Text_JennaIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25EF73
gText_Rom_25EF73: @ 0x0825EF73
	.string "あなたの たいりょく どう?\nたいりょく ぶそくだと\lいざと いうとき こまるわよ!$"
	.if (. - gText_Rom_25EF73) != 0x2b
	.error "gText_Rom_25EF73 must retain its original byte length"
	.endif
