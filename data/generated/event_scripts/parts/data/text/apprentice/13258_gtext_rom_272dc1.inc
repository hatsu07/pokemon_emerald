	@ data/text/apprentice.inc:805 gText_ApprenticePickWinSpeech6
	.globl gText_Rom_272DC1
gText_Rom_272DC1: @ 0x08272DC1
	.string "やったねーっ\n{PLAYER}さんに あえちゃった!\lさっそく そうだんが あるのよ!\pジャーン\nでは さいごの そうだん でーす!\pわたしが しょうぶで かった とき\nかっこよく キメたいと したら\lさあ なんて いえばいい?$"
	.if (. - gText_Rom_272DC1) > 0x6d
	.error "gText_Rom_272DC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_272DC1) < 0x6d
	.space 0x6d - (. - gText_Rom_272DC1)
	.endif
