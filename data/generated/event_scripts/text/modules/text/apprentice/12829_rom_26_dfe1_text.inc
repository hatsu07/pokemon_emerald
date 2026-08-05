	@ data/text/apprentice.inc:163 gText_ApprenticeWhichLevelMode9
	.globl gText_Rom_26DFE1
gText_Rom_26DFE1: @ 0x0826DFE1
	.string "おぅー! グッと くるね!\nエクセレント!\pでは ファースト アドバイス たのむね!\nバトルタワー なんだけどさ\lおじさんが やるなら レベルは\l50と オープン どっちが ベターかな?"
	.byte EOS
	.if (. - gText_Rom_26DFE1) > 0x5e
	.error "gText_Rom_26DFE1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26DFE1) < 0x5e
	.space 0x5e - (. - gText_Rom_26DFE1)
	.endif
