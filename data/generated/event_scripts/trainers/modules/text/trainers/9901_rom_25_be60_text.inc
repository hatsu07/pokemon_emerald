	@ data/text/trainers.inc:983 Route111_Text_DaisukePostBattle
	.globl gText_Rom_25BE60
gText_Rom_25BE60: @ 0x0825BE60
	.string "おぬしの ように\nつよい トレーナーに かてるまで\lしゅぎょう あるのみッス!$"
	.if (. - gText_Rom_25BE60) > 0x28
	.error "gText_Rom_25BE60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BE60) < 0x28
	.space 0x28 - (. - gText_Rom_25BE60)
	.endif
