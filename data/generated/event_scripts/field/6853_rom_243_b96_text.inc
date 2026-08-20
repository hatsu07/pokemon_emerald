	@ field-script:0x1DC504 FieldScriptText_243B96
	.globl gText_Rom_243B96
gText_Rom_243B96: @ 0x08243B96
	.string "「ひみつのちから」って\nわざマシン　しってる？\pおれら　わざマシン　「ひみつのちから」が\nだいすき　なんだ\pおれらの　メンバーが　どこかで　くれるから\nそれを　もらったら　また　おいで！\pきみも　メンバーとして\nひみつで　いいものを　うってあげるよ{EOS}"
	.if (. - gText_Rom_243B96) > 0x7d
	.error "gText_Rom_243B96 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243B96) < 0x7d
	.space 0x7d - (. - gText_Rom_243B96)
	.endif
