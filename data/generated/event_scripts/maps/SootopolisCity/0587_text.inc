	@ data/maps/SootopolisCity/scripts.inc:1519 SootopolisCity_Text_ThankYouForHelpAcceptThis
	.globl gText_Rom_1E380B
gText_Rom_1E380B: @ 0x081E380B
	.string "ミクリ『{PLAYER}{KUN}……\nやはり わたしの めは ただしかった\pきみが ちからを かしてくれた おかげで\nルネシティは……\lいや ホウエンは すくわれたんだよ\pまちの みんなを だいひょうして\nおれいを いわせて もらうよ\l……ありがとう\pこれは わたしからの プレゼントだ\nうけとって くれたまえ!{EOS}"
	.if (. - gText_Rom_1E380B) > 0x95
	.error "gText_Rom_1E380B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E380B) < 0x95
	.space 0x95 - (. - gText_Rom_1E380B)
	.endif

	@ data/maps/SootopolisCity/scripts.inc:1522 SootopolisCity_Text_ExplainWaterfallGoToGym
	.globl gText_Rom_1E38A0
gText_Rom_1E38A0: @ 0x081E38A0
	.string "その ひでんマシンは たきのぼり!\pレインバッジを もっていれば\nそのわざを おぼえさせた ポケモンが\lたきを のぼれるように なるのさ!\pそして…… レインバッジは\nどこで もらえるのか というと……\pもう おわかりだね\nそう! ルネの ジムリーダーに かつこと\pさあ じゅんびが できたら\nなかに はいって くれたまえ!{EOS}"
	.if (. - gText_Rom_1E38A0) > 0xa3
	.error "gText_Rom_1E38A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E38A0) < 0xa3
	.space 0xa3 - (. - gText_Rom_1E38A0)
	.endif
