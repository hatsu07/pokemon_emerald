	@ data/text/apprentice.inc:205 gText_ApprenticePleaseTeach13
	.globl gText_Rom_26E598
gText_Rom_26E598: @ 0x0826E598
	.string "あ…… きみきみ!\nちょっとさ かた もんでくれる?\p……ああ そうそう そこそこ\nはー きもちいい!\pおれ {STR_VAR_1} って いうんだ\nカラテ やってるんだけど\lいまいち からだが よわくてさ……\pポケモンしょうぶも やって\nきたえようと おもって いるんだよね\pきみ ポケモンリーグで かった\n{PLAYER}{KUN} だろう?\lどうかな たまに おれの\lそうだんに のって もらえない かい?"
	.byte EOS
	.if (. - gText_Rom_26E598) > 0xbd
	.error "gText_Rom_26E598 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E598) < 0xbd
	.space 0xbd - (. - gText_Rom_26E598)
	.endif
