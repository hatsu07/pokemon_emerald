	@ data/maps/FortreeCity/scripts.inc:99 FortreeCity_Text_SomethingBlockingGym
	.globl gText_Rom_1DFF3B
gText_Rom_1DFF3B: @ 0x081DFF3B
	.string "ポケモンジムに いきたいのに\nなにかが みちを ふさいでいるのよ!\pせっかく 120ばん どうろで\nポケモン そだてて きたのに!$"
	.if (. - gText_Rom_1DFF3B) > 0x42
	.error "gText_Rom_1DFF3B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DFF3B) < 0x42
	.space 0x42 - (. - gText_Rom_1DFF3B)
	.endif
