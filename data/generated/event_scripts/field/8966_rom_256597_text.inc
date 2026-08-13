	@ field-script:0x254EAB FieldScriptText_256597
	.globl gText_Rom_256597
gText_Rom_256597: @ 0x08256597
	.string "きみ　{0xFD}{0x02}って\nことば　しってる？\pいみ？　それはね……\nおとうさんか　おかあさんに　きいてみて"
	.byte EOS
	.if (. - gText_Rom_256597) > 0x31
	.error "gText_Rom_256597 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_256597) < 0x31
	.space 0x31 - (. - gText_Rom_256597)
	.endif
	@ analyzed canonical ROM range 0x082565C8-0x08256611
	@ semantic recovery: script_data; byte-verified against linked ROM
.globl EventScript_CutTree
EventScript_CutTree: @ 0x082565C8
lockall
	checkflag 0x0867
	goto_if 0x00, EventScript_JP_0825662E
	checkpartymove 0x000F
	compare_var_to_value 0x800D, 0x0006
	goto_if 0x01, EventScript_JP_0825662E
	setfieldeffectargument 0x00, 0x800D
	bufferpartymonnick 0x00, 0x800D
	buffermovename 0x01, 0x000F
	loadword 0x00, gText_Rom_25663B
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08256638
	loadword 0x00, gText_Rom_25665C
	callstd 0x04
	closemessage
	dofieldeffect 0x0002
	waitstate
	goto EventScript_JP_0825661D
	.byte 0x02
