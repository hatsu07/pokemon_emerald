	@ data/text/tv.inc:1081 SlateportCity_OceanicMuseum_1F_Text_ThatsAllForInterview
	.globl gText_Rom_24D94E
gText_Rom_24D94E: @ 0x0824D94E
	.string "……おお\nなんて いいはなしだ!\pこのはなし テレビで\nつかわせて いただきます!\pいつか ほうそう するかも しれないので\nたのしみに まっていて くださいね$"
	.if (. - gText_Rom_24D94E) > 0x51
	.error "gText_Rom_24D94E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D94E) < 0x51
	.space 0x51 - (. - gText_Rom_24D94E)
	.endif
