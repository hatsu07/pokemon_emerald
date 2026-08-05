	@ data/maps/RustboroCity_Flat1_2F/scripts.inc:78 RustboroCity_Flat1_2F_Text_ComingUpWithMealsIsHard
	.globl gText_Rom_203886
gText_Rom_203886: @ 0x08203886
	.string "もうね たいへん なのよ!\pなにが たいへんって\nそんなの きまってるでしょ!\pまいにちの おこんだて よッ!\pまいにち まいにち かんがえるのって\nほんとうに たいへん なんだからッ!$"
	.if (. - gText_Rom_203886) > 0x5e
	.error "gText_Rom_203886 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203886) < 0x5e
	.space 0x5e - (. - gText_Rom_203886)
	.endif
