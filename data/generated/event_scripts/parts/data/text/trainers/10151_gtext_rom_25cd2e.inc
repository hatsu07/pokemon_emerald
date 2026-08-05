	@ data/text/trainers.inc:1343 Route114_Text_BernieIntro (+1 aliases)
	.globl gText_Rom_25CD2E
gText_Rom_25CD2E: @ 0x0825CD2E
	.string "キャンプファイヤー するとき\nはなびを するとき\lみずを ようい しておけよ!$"
	.if (. - gText_Rom_25CD2E) > 0x28
	.error "gText_Rom_25CD2E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CD2E) < 0x28
	.space 0x28 - (. - gText_Rom_25CD2E)
	.endif
