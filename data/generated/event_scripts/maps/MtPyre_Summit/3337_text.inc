	@ data/maps/MtPyre_Summit/scripts.inc:480 MtPyre_Summit_Text_Grunt4PostBattle
	.globl gText_Rom_2171E5
gText_Rom_2171E5: @ 0x082171E5
	.string "リーダーと あたしたち だんいんとの\nみごとな コンビネーション ってわけさ!$"
	.if (. - gText_Rom_2171E5) > 0x28
	.error "gText_Rom_2171E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2171E5) < 0x28
	.space 0x28 - (. - gText_Rom_2171E5)
	.endif
