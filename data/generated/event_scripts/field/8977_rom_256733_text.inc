	@ field-script:0x2566A2 FieldScriptText_256710
	.globl gText_Rom_256710
gText_Rom_256710: @ 0x08256710
	.string "ポケモンの　わざで　こわせそうだ！\n……いわくだきを　つかいますか？"
	.byte EOS
	.if (. - gText_Rom_256710) > 0x23
	.error "gText_Rom_256710 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_256710) < 0x23
	.space 0x23 - (. - gText_Rom_256710)
	.endif
	@ field-script:0x256705 FieldScriptText_256733
	.globl gText_Rom_256733
gText_Rom_256733: @ 0x08256733
	.string "かたそうな　いわ　だけど……\nポケモンの　わざで　こわせるかも？"
	.byte EOS
	.if (. - gText_Rom_256733) > 0x21
	.error "gText_Rom_256733 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_256733) < 0x21
	.space 0x21 - (. - gText_Rom_256733)
	.endif
	@ analyzed canonical ROM range 0x08256754-0x08256796
	@ semantic recovery: script_data; byte-verified against linked ROM
.globl EventScript_StrengthBoulder
EventScript_StrengthBoulder: @ 0x08256754
lockall
	checkflag 0x086A
	goto_if 0x00, EventScript_JP_082567AF
	checkflag 0x0889
	goto_if 0x01, EventScript_JP_082567B9
	checkpartymove 0x0046
	compare_var_to_value 0x800D, 0x0006
	goto_if 0x01, EventScript_JP_082567AF
	setfieldeffectargument 0x00, 0x800D
	loadword 0x00, gText_Rom_2567C6
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082567C3
	closemessage
	dofieldeffect 0x0028
	waitstate
	goto EventScript_JP_082567A2
	.byte 0x02
