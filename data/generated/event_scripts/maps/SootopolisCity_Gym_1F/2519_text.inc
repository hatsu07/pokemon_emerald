	@ data/maps/SootopolisCity_Gym_1F/scripts.inc:218 SootopolisCity_Gym_1F_Text_JuanPreRematch (+1 aliases)
	.globl gText_Rom_20E912
gText_Rom_20E912: @ 0x0820E912
	.string "アダン『いつもの サイレンス……\nしずけさを とりもどした このジムに\pまたもや わかき タイフーンが\nうでだめしに あらわれましたね!\pいいですとも!\pなんどでも ユーの あいてを\nして さしあげましょう!$"
	.if (. - gText_Rom_20E912) > 0x69
	.error "gText_Rom_20E912 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20E912) < 0x69
	.space 0x69 - (. - gText_Rom_20E912)
	.endif
