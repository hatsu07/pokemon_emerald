	@ data/maps/BattleFrontier_Lounge8/scripts.inc:19 BattleFrontier_Lounge8_Text_KnowAboutFrontierBrains
	.globl gText_Rom_23B063
gText_Rom_23B063: @ 0x0823B063
	.string "フロンティアブレーンって しってる?\pバトルフロンティアに ある\n7つの しせつを かんりする\lとくべつな トレーナーたちの ことを\lエニシダは そうよんでる らしいわ"
	.byte EOS
	.if (. - gText_Rom_23B063) > 0x55
	.error "gText_Rom_23B063 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23B063) < 0x55
	.space 0x55 - (. - gText_Rom_23B063)
	.endif
