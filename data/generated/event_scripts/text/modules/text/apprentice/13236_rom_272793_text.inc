	@ data/text/apprentice.inc:772 gText_ApprenticeWinSpeechThanks0
	.globl gText_Rom_272793
gText_Rom_272793: @ 0x08272793
	.string "{STR_VAR_1}\p…… うぉぉーん!\nすごく かっこいいよう!\pあ ごめんなさい\nうれしすぎて なみだが……\p……グスン {PLAYER}さん!\nいつも いつも ありがとう ございました!\lぼく {PLAYER}さんの ためにも\lがんばって たたかい つづけます!\pでは {PLAYER}さん!\nこんどは…… どこかで たたかいましょう!$"
	.if (. - gText_Rom_272793) > 0x92
	.error "gText_Rom_272793 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_272793) < 0x92
	.space 0x92 - (. - gText_Rom_272793)
	.endif
