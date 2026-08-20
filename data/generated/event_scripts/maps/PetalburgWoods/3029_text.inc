	@ data/maps/PetalburgWoods/scripts.inc:441 PetalburgWoods_Text_MiracleSeedExplanation
	.globl gText_Rom_214A58
gText_Rom_214A58: @ 0x08214A58
	.string "きせきのタネを\nポケモンに もたせてあげると くさタイプの\lわざの いりょくが あがるのよ\pきせきのタネの ほかにも\nポケモンに もたせると べんりな\lどうぐが あるらしいわね{EOS}"
	.if (. - gText_Rom_214A58) > 0x59
	.error "gText_Rom_214A58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_214A58) < 0x59
	.space 0x59 - (. - gText_Rom_214A58)
	.endif
