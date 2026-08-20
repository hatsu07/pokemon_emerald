	@ data/maps/VictoryRoad_1F/scripts.inc:130 VictoryRoad_1F_Text_WallyIntro (+1 aliases)
	.globl gText_Rom_2196FD
gText_Rom_2196FD: @ 0x082196FD
	.string "ミツル『あっ! {PLAYER}さん!\pぼく あれから つよくなった はずだよ!\nそれを {PLAYER}さんに\lみてもらいたいんだ!\pそれでは…… いきますよ!{EOS}"
	.if (. - gText_Rom_2196FD) > 0x46
	.error "gText_Rom_2196FD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2196FD) < 0x46
	.space 0x46 - (. - gText_Rom_2196FD)
	.endif
