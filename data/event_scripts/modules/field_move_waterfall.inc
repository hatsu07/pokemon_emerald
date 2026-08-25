	@ field-script:0x25677B FieldScriptText_2567C6
	.globl FieldScriptText_2567C6
FieldScriptText_2567C6: @ 0x082567C6
	.string "おおきな　いわ　だけど……\nポケモンの　わざで　おせるかも？\pかいりきを　つかいますか？"
	.byte EOS
	.if (. - FieldScriptText_2567C6) > 0x2d
	.error "FieldScriptText_2567C6 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_2567C6) < 0x2d
	.space 0x2d - (. - FieldScriptText_2567C6)
	.endif
	@ field-script:0x2567A7 FieldScriptText_2567F3
	.globl FieldScriptText_2567F3
FieldScriptText_2567F3: @ 0x082567F3
	.string "{0xFD}{0x02}　は\nかいりきを　はっきした！\p{0xFD}{0x02}の　かいりきの　おかげで\nいわを　おせるように　なった！"
	.byte EOS
	.if (. - FieldScriptText_2567F3) > 0x31
	.error "FieldScriptText_2567F3 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_2567F3) < 0x31
	.space 0x31 - (. - FieldScriptText_2567F3)
	.endif
	@ field-script:0x2567B1 FieldScriptText_256824
	.globl FieldScriptText_256824
FieldScriptText_256824: @ 0x08256824
	.string "おおきな　いわ　だけど……\nポケモンの　わざで　おせるかも？"
	.byte EOS
	.if (. - FieldScriptText_256824) > 0x1f
	.error "FieldScriptText_256824 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_256824) < 0x1f
	.space 0x1f - (. - FieldScriptText_256824)
	.endif
	@ field-script:0x2567BB FieldScriptText_256843
	.globl FieldScriptText_256843
FieldScriptText_256843: @ 0x08256843
	.string "かいりきの　おかげで\nいわを　おして　うごかせる！"
	.byte EOS
	.if (. - FieldScriptText_256843) > 0x1a
	.error "FieldScriptText_256843 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_256843) < 0x1a
	.space 0x1a - (. - FieldScriptText_256843)
	.endif
	@ analyzed canonical ROM range 0x0825685D-0x08256896
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_0825685D: @ 0x0825685D
.globl EventScript_JP_0825685D
EventScript_JP_0825685D: @ 0x0825685D
	lockall
	checkpartymove 0x007F
	compare_var_to_value 0x800D, 0x0006
	goto_if 0x01, EventScript_JP_08256898
	bufferpartymonnick 0x00, 0x800D
	setfieldeffectargument 0x00, 0x800D
	loadword 0x00, FieldScriptText_2568BD
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082568A0
	loadword 0x00, FieldScriptText_2568D8
	callstd 0x04
	dofieldeffect 0x002B
	goto EventScript_JP_082568A0
	@ analyzed canonical ROM range 0x08256897-0x082568A1
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08256897: @ 0x08256897
.globl EventScript_JP_08256897
EventScript_JP_08256897: @ 0x08256897
	lockall
EventScript_JP_08256898: @ 0x08256898
	loadword 0x00, FieldScriptText_2568A2
	callstd 0x04
EventScript_JP_082568A0: @ 0x082568A0
	releaseall
	end
