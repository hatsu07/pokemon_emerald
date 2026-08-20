	@ data/maps/SootopolisCity_Gym_1F/scripts.inc:209 SootopolisCity_Gym_1F_Text_GoGetFortreeBadge
	.globl gText_Rom_20E892
gText_Rom_20E892: @ 0x0820E892
	.string "ホウエンで あつめられる\nジムバッジは あと ひとつ\pユーが ポケモンリーグに いどむ つもりなら\nヒワマキの ポケモンジムで\lのこりの バッジを てにいれるのです{EOS}"
	.if (. - gText_Rom_20E892) > 0x53
	.error "gText_Rom_20E892 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20E892) < 0x53
	.space 0x53 - (. - gText_Rom_20E892)
	.endif
