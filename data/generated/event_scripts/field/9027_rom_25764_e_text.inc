	@ field-script:0x25733A FieldScriptText_25764E
	.globl gText_Rom_25764E
gText_Rom_25764E: @ 0x0825764E
	.string "すっ　すばらしい！\pまさに　きみ　そのもの　って　かんじの\nすてきな　プロフィール！\pこれを　きいた　ひとは\nだれもが　きみの　とりこに　なるだろうね！\pどうも　ありがとう！"
	.byte EOS
	.if (. - gText_Rom_25764E) > 0x58
	.error "gText_Rom_25764E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25764E) < 0x58
	.space 0x58 - (. - gText_Rom_25764E)
	.endif
	@ analyzed canonical ROM range 0x082576A6-0x08257A88
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_082576A6: @ 0x082576A6
EventText_JP_082576A6: @ 0x082576A6
	.string "ややっ!\nその　ことばを　しっている　とは……\pという　ことは　きみも\nふしぎな　できごと　クラブの　なかま　だね!{EOS}"
.globl EventScript_JP_082576E1
EventScript_JP_082576E1: @ 0x082576E1
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	@ event command: special
	special GetDaycareMonNicknames
	specialvar_ 0x800D, 0x00B6
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08257716
	compare_var_to_value 0x800D, 0x0002
	goto_if 0x01, EventScript_JP_0825779A
	compare_var_to_value 0x800D, 0x0003
	goto_if 0x01, EventScript_JP_082577B1
	loadword 0x00, gText_Rom_257A98
	callstd 0x04
	release
	end
EventScript_JP_08257716: @ 0x08257716
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_257AEA
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0825774C
	loadword 0x00, gText_Rom_257C57
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0825774C
	loadword 0x00, gText_Rom_257B71
	callstd 0x04
	clearflag 0x0086
	@ event command: special
	special RejectEggFromDayCare
	release
	end
EventScript_JP_0825774C: @ 0x0825774C
	specialvar_ 0x800D, 0x0083
	compare_var_to_value 0x800D, 0x0006
	goto_if 0x05, EventScript_JP_08257766
	loadword 0x00, gText_Rom_257B85
	callstd 0x04
	release
	end
EventScript_JP_08257766: @ 0x08257766
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	message gText_Rom_257BAB
	playfanfare 0x016F
	waitfanfare
	waitbuttonpress
	loadword 0x00, gText_Rom_257BC6
	callstd 0x04
	@ event command: special
	special GiveEggFromDaycare
	clearflag 0x0086
	release
	end
EventScript_JP_08257780: @ 0x08257780
	specialvar_ 0x800D, 0x00C3
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_08257791
	return
EventScript_JP_08257791: @ 0x08257791
	loadword 0x00, gText_Rom_257BD3
	callstd 0x04
	return
EventScript_JP_0825779A: @ 0x0825779A
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special GetDaycareMonNicknames
	loadword 0x00, gText_Rom_257B57
	callstd 0x04
	setvar 0x8004, 0x0000
	call EventScript_JP_08257780
	release
	end
EventScript_JP_082577B1: @ 0x082577B1
	@ event command: special
	special GetDaycareMonNicknames
	loadword 0x00, gText_Rom_257C39
	callstd 0x04
	@ event command: special
	special SetDaycareCompatibilityString
	@ event command: special
	special ShowFieldMessageStringVar4
	waitmessage
	waitbuttonpress
	setvar 0x8004, 0x0000
	call EventScript_JP_08257780
	setvar 0x8004, 0x0001
	call EventScript_JP_08257780
	release
	end
.globl EventScript_JP_082577DA
EventScript_JP_082577DA: @ 0x082577DA
	lock
	faceplayer
	specialvar_ 0x800D, 0x00B6
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_082578D4
	compare_var_to_value 0x800D, 0x0002
	goto_if 0x01, EventScript_JP_082578F8
	compare_var_to_value 0x800D, 0x0003
	goto_if 0x01, EventScript_JP_08257A25
	loadword 0x00, gText_Rom_257C73
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0825781F
	loadword 0x00, gText_Rom_257D22
	callstd 0x04
	release
	end
EventScript_JP_0825781F: @ 0x0825781F
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	specialvar_ 0x800D, 0x0084
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_082578B6
	specialvar_ 0x800D, 0x0207
	compare_var_to_value 0x800D, 0x0002
	goto_if 0x01, EventScript_JP_082578CA
	loadword 0x00, gText_Rom_257CB0
	callstd 0x04
	fadescreen 0x01
	@ event command: special
	special ChooseSendDaycareMon
	waitstate
	compare_var_to_value 0x8004, 0x00FF
	goto_if 0x01, EventScript_JP_08257893
	specialvar_ 0x800D, 0x0085
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082578C0
	specialvar_ 0x8005, 0x00BA
	waitse
	playmoncry 0x8005, 0x0000
	loadword 0x00, gText_Rom_257CC0
	callstd 0x04
	waitmoncry
	@ event command: special
	special StoreSelectedPokemonInDaycare
	incrementgamestat 0x2F
	specialvar_ 0x800D, 0x00B6
	compare_var_to_value 0x800D, 0x0002
	goto_if 0x01, EventScript_JP_0825789D
	release
	end
EventScript_JP_08257893: @ 0x08257893
	loadword 0x00, gText_Rom_257D57
	callstd 0x04
	release
	end
EventScript_JP_0825789D: @ 0x0825789D
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_257CEB
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0825781F
	goto EventScript_JP_08257893
	.byte 0x02
EventScript_JP_082578B6: @ 0x082578B6
	loadword 0x00, gText_Rom_257E2F
	callstd 0x04
	release
	end
EventScript_JP_082578C0: @ 0x082578C0
	loadword 0x00, gText_Rom_257E5F
	callstd 0x04
	release
	end
EventScript_JP_082578CA: @ 0x082578CA
	loadword 0x00, gText_Rom_257E87
	callstd 0x04
	release
	end
EventScript_JP_082578D4: @ 0x082578D4
	loadword 0x00, gText_Rom_257D0D
	callstd 0x04
	release
	end
EventScript_JP_082578DE: @ 0x082578DE
	loadword 0x00, gText_Rom_257D88
	callstd 0x04
	return
EventScript_JP_082578E7: @ 0x082578E7
	specialvar_ 0x800D, 0x00BE
	compare_var_to_value 0x800D, 0x0000
	call_if 0x05, EventScript_JP_082578DE
	return
EventScript_JP_082578F8: @ 0x082578F8
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_257D65
	callstd 0x04
	setvar 0x8004, 0x0000
	call EventScript_JP_082578E7
	loadword 0x00, gText_Rom_257CEB
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0825781F
	loadword 0x00, gText_Rom_257E51
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08257936
	goto EventScript_JP_08257893
	.byte 0x02
EventScript_JP_08257936: @ 0x08257936
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	specialvar_ 0x800D, 0x0083
	compare_var_to_value 0x800D, 0x0006
	goto_if 0x01, EventScript_JP_08257A06
	specialvar_ 0x800D, 0x00B6
	setvar 0x8004, 0x0000
	compare_var_to_value 0x800D, 0x0002
	goto_if 0x01, EventScript_JP_08257975
	@ event command: special
	special ShowDaycareLevelMenu
	waitstate
	copyvar 0x8004, 0x800D
	compare_var_to_value 0x800D, 0x0002
	goto_if 0x01, EventScript_JP_08257893
	goto EventScript_JP_08257975
	.byte 0x02
EventScript_JP_08257975: @ 0x08257975
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special GetDaycareCost
	loadword 0x00, gText_Rom_257DDD
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08257991
	goto EventScript_JP_08257893
	.byte 0x02
EventScript_JP_08257991: @ 0x08257991
	specialvar_ 0x800D, 0x00C5
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, Route117_PokemonDayCare_EventScript_RetrieveMon
	loadword 0x00, gText_Rom_257D35
	callstd 0x04
	release
	end
Route117_PokemonDayCare_EventScript_RetrieveMon: @ 0x082579AB
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0001, Route117_PokemonDayCare_Movement_RetrieveDaycareMon
	@ event command: waitmovement
	waitmovement 0x0000
	specialvar_ 0x800D, 0x00C0
	@ event command: special
	special SubtractMoneyFromVar0x8005
	playse 0x005F
	loadword 0x00, gText_Rom_257DF6
	callstd 0x04
	waitse
	playmoncry 0x800D, 0x0000
	loadword 0x00, gText_Rom_257E14
	callstd 0x04
	waitmoncry
	specialvar_ 0x800D, 0x00B6
	compare_var_to_value 0x800D, 0x0002
	goto_if 0x01, EventScript_JP_082579ED
	goto EventScript_JP_08257893
	.byte 0x02
EventScript_JP_082579ED: @ 0x082579ED
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_257D47
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08257936
	goto EventScript_JP_08257893
	.byte 0x02
EventScript_JP_08257A06: @ 0x08257A06
	loadword 0x00, gText_Rom_257DA4
	callstd 0x04
	release
	end
Route117_PokemonDayCare_Movement_RetrieveDaycareMon: @ 0x08257A10
	@ ANALYSIS: SEMANTIC_NUMERIC_MOVEMENT
	@ Object-movement command bytecode/sequence; numeric bytes are movement commands and terminators.
	@ object movement sequence
	delay_16
	delay_16
	face_left
	delay_16
	delay_16
	face_right
	delay_16
	delay_16
	face_up
	walk_slow_up
	set_invisible
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	face_down
	set_visible
	walk_slow_down
	step_end
.globl Route117_PokemonDayCare_EventScript_UnusedEnd
Route117_PokemonDayCare_EventScript_UnusedEnd: @ 0x08257A24
	end
EventScript_JP_08257A25: @ 0x08257A25
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_257D65
	callstd 0x04
	setvar 0x8004, 0x0000
	call EventScript_JP_082578E7
	setvar 0x8004, 0x0001
	call EventScript_JP_082578E7
	loadword 0x00, gText_Rom_257E51
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08257936
	loadword 0x00, gText_Rom_257D57
	callstd 0x04
	release
	end
	.byte 0x25, 0xBD, 0x00, 0x27, 0x21, 0x0D, 0x80, 0x02, 0x00, 0x06, 0x01, 0x93, 0x78, 0x25, 0x08, 0x19
	.byte 0x04, 0x80, 0x0D, 0x80, 0x26, 0x0D, 0x80, 0xC0, 0x00, 0x0F, 0x00, 0xF6, 0x7D, 0x25, 0x08, 0x09
	.byte 0x04, 0x0F, 0x00, 0x57, 0x7D, 0x25, 0x08, 0x09, 0x04, 0x6C, 0x02
