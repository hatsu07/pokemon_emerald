	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:223 RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw
	.globl gText_Rom_202FE5
gText_Rom_202FE5: @ 0x08202FE5
	.string "べんきょうを しない せいとは\nわたくしの ツメの あかを\lせんじて のませるのです!\pきみが べんきょう する しないは\nこの どうぐを つかいこなせるか どうかで\lわかること でしょう!$"
	.if (. - gText_Rom_202FE5) > 0x60
	.error "gText_Rom_202FE5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202FE5) < 0x60
	.space 0x60 - (. - gText_Rom_202FE5)
	.endif
