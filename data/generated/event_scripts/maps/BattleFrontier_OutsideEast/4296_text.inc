	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:276 BattleFrontier_OutsideEast_Text_BelieveInYouBuddy
	.globl gText_Rom_222E60
gText_Rom_222E60: @ 0x08222E60
	.string "ジグちゃん! しんじてるからね!\pかったら ジグちゃんの すきな おやつ\nなーんでも つくって あげるからね!{EOS}"
	.if (. - gText_Rom_222E60) > 0x38
	.error "gText_Rom_222E60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222E60) < 0x38
	.space 0x38 - (. - gText_Rom_222E60)
	.endif
