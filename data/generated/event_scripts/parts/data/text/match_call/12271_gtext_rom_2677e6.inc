	@ data/text/match_call.inc:307 MatchCall_PersonalizedText32
	.globl gText_Rom_2677E6
gText_Rom_2677E6: @ 0x082677E6
	.string "わーい! {STR_VAR_1}でーす!\nげんきー?\pボクが ポケモン かてる ときって\nきのせいかも しれないけど\lたんパンの ちょうしが いいんだ!\pえ どういうこと かって?\nうーん うまく せつめい できないけど\lなんていう のかな……\lはき ごこちが サラっと してるんだ!\pで {PLAYER}{KUN}と しょうぶの ときは\nだいたい ベタっと してるんだよね……\p…… …… ……\nボクの はなし しんじた?\lえへへへ じゃあね バイバーイ!$"
	.if (. - gText_Rom_2677E6) > 0xd4
	.error "gText_Rom_2677E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2677E6) < 0xd4
	.space 0xd4 - (. - gText_Rom_2677E6)
	.endif
