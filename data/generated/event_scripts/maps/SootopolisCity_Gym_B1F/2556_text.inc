	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:96 SootopolisCity_Gym_B1F_Text_BridgetPostBattle
	.globl gText_Rom_20ED9C
gText_Rom_20ED9C: @ 0x0820ED9C
	.string "レベルの たかい ジムに いることに\nまんぞく しないで\lほかにも しゅぎょうに いくほうが\lつよくなれそうだし なにより たのしそうね{EOS}"
	.if (. - gText_Rom_20ED9C) > 0x45
	.error "gText_Rom_20ED9C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20ED9C) < 0x45
	.space 0x45 - (. - gText_Rom_20ED9C)
	.endif
