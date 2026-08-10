	@ data/maps/EverGrandeCity_PokemonLeague_1F/scripts.inc:128 EverGrandeCity_PokemonLeague_1F_Text_GoForth
	.globl gText_Rom_211267
gText_Rom_211267: @ 0x08211267
	.string "トレーナーよ! おのれと\nポケモンを しんじて すすみたまえ!$"
	.if (. - gText_Rom_211267) > 0x20
	.error "gText_Rom_211267 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_211267) < 0x20
	.space 0x20 - (. - gText_Rom_211267)
	.endif
	@ analyzed canonical ROM range 0x08211287-0x08211368
	@ semantic recovery: script_data; byte-verified against linked ROM
sAnalyzedEventData_08211287: @ 0x08211287
MapScripts_JP_08211287: @ 0x08211287
	@ map script dispatch table
	.byte 0x02
	.4byte MapScriptTable_JP_082112A1
	.byte 0x04
	.4byte MapScriptTable_JP_08211292
	.byte 0
MapScriptTable_JP_08211292: @ 0x08211292
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_0821129C
	.2byte 0
EventScript_JP_0821129C: @ 0x0821129C
	@ event command: turnobject
	.byte 0x5B
	.2byte 0x00FF
	.byte 0x02
	@ event command: end
	.byte 0x02
MapScriptTable_JP_082112A1: @ 0x082112A1
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_082112AB
	.2byte 0
EventScript_JP_082112AB: @ 0x082112AB
	@ event command: lockall
	.byte 0x69
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0821135C @ Movement_JP_0821135C
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0821135C @ Movement_JP_0821135C
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08243627 @ PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08211369 @ gText_Rom_211369
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08211363 @ Movement_JP_08211363
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08211363 @ Movement_JP_08211363
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: delay
	.byte 0x28
	.2byte 0x0014
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08243627 @ PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082113B4 @ gText_Rom_2113B4
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: delay
	.byte 0x28
	.2byte 0x0014
	@ event command: dofieldeffect
	.byte 0x9C
	.2byte 0x003E
	@ event command: waitfieldeffect
	.byte 0x9E
	.2byte 0x003E
	@ event command: delay
	.byte 0x28
	.2byte 0x0028
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x0001
	@ event command: call
	.byte 0x04
	.4byte 0x0824285B
	@ event command: checkplayergender
	.byte 0xA0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08211344 @ EventScript_JP_08211344
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08211350 @ EventScript_JP_08211350
	@ event command: end
	.byte 0x02
EventScript_JP_08211344: @ 0x08211344
	@ event command: setrespawn
	.byte 0x9F
	.2byte 0x0001
	@ event command: fadescreenspeed
	.byte 0x98
	.byte 0x01
	.byte 0x18
	@ event command: special
	.byte 0x25
	.2byte 0x0110
	@ event command: waitstate
	.byte 0x27
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08211350: @ 0x08211350
	@ event command: setrespawn
	.byte 0x9F
	.2byte 0x0002
	@ event command: fadescreenspeed
	.byte 0x98
	.byte 0x01
	.byte 0x18
	@ event command: special
	.byte 0x25
	.2byte 0x0110
	@ event command: waitstate
	.byte 0x27
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
Movement_JP_0821135C: @ 0x0821135C
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
Movement_JP_08211363: @ 0x08211363
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
