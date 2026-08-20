	@ data/text/trainers.inc:1319 Route114_Text_NancyPostBattle
	.globl gText_Rom_25CC1E
gText_Rom_25CC1E: @ 0x0825CC1E
	.string "おいしい ごはんも たべたし\nなんだか ねむくなって きたわ……{EOS}"
	.if (. - gText_Rom_25CC1E) > 0x21
	.error "gText_Rom_25CC1E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CC1E) < 0x21
	.space 0x21 - (. - gText_Rom_25CC1E)
	.endif
