	@ data/text/match_call.inc:280 MatchCall_PersonalizedText23
	.globl gText_Rom_267256
gText_Rom_267256: @ 0x08267256
	.string "{STR_VAR_1}です\pつよい トレーナーが ちかくに いると\nなんとなく その そんざいを\lかんじる ことが あるの\pもしかしたら {PLAYER}{KUN}が\nわたしの そばを とおったの かもね?\pあいに きて くれるのを\nまっているわ! バーイ!$"
	.if (. - gText_Rom_267256) > 0x70
	.error "gText_Rom_267256 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_267256) < 0x70
	.space 0x70 - (. - gText_Rom_267256)
	.endif
