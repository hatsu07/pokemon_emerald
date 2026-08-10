	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:383 BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilverShort (+1 aliases)
	.globl gText_Rom_2287FF
gText_Rom_2287FF: @ 0x082287FF
	.string "さあ ヒースさまとの けっしょうせん です!\nじゅんびの ほうは いかがですか?$"
	.if (. - gText_Rom_2287FF) > 0x29
	.error "gText_Rom_2287FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2287FF) < 0x29
	.space 0x29 - (. - gText_Rom_2287FF)
	.endif
	@ analyzed canonical ROM range 0x08228828-0x082294FB
	@ semantic recovery: script_data; byte-verified against linked ROM
sAnalyzedEventData_08228828: @ 0x08228828
MapScripts_JP_08228828: @ 0x08228828
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_0822883D
	.byte 0x02
	.4byte MapScriptTable_JP_0822888C
	.byte 0x04
	.4byte MapScriptTable_JP_0822900D
	.byte 0x05
	.4byte EventScript_JP_0822907C
	.byte 0
EventScript_JP_0822883D: @ 0x0822883D
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000A
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: copyvar
	.byte 0x19
	.2byte 0x400F
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082294A5 @ EventScript_JP_082294A5
	@ event command: call
	.byte 0x04
	.4byte 0x08228868 @ EventScript_JP_08228868
	@ event command: end
	.byte 0x02
EventScript_JP_08228868: @ 0x08228868
	@ event command: checkplayergender
	.byte 0xA0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228880 @ EventScript_JP_08228880
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228886 @ EventScript_JP_08228886
	@ event command: return
	.byte 0x03
EventScript_JP_08228880: @ 0x08228880
	@ event command: setvar
	.byte 0x16
	.2byte 0x4011
	.2byte 0x0064
	@ event command: return
	.byte 0x03
EventScript_JP_08228886: @ 0x08228886
	@ event command: setvar
	.byte 0x16
	.2byte 0x4011
	.2byte 0x0069
	@ event command: return
	.byte 0x03
MapScriptTable_JP_0822888C: @ 0x0822888C
	@ conditional map script table
	.2byte 0x4000, 0x0000
	.4byte EventScript_JP_08228896
	.2byte 0
EventScript_JP_08228896: @ 0x08228896
	@ event command: lockall
	.byte 0x69
	@ event command: call
	.byte 0x04
	.4byte 0x08228D49 @ EventScript_JP_08228D49
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082294C4 @ EventScript_JP_082294C4
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08243637
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: call
	.byte 0x04
	.4byte 0x08228B61 @ EventScript_JP_08228B61
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082294FC @ gText_Rom_2294FC
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: showobjectat
	.byte 0x58
	.2byte 0x000D
	.byte 0x1A
	.byte 0x15
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x400F
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x05
	.4byte 0x082288DA @ EventScript_JP_082288DA
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x400E
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x05
	.4byte 0x082288E6 @ EventScript_JP_082288E6
EventScript_JP_082288DA: @ 0x082288DA
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000D
	.4byte 0x08229301 @ Movement_JP_08229301
	@ event command: goto
	.byte 0x05
	.4byte 0x082288ED @ EventScript_JP_082288ED
EventScript_JP_082288E6: @ 0x082288E6
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000D
	.4byte 0x0822930B @ Movement_JP_0822930B
EventScript_JP_082288ED: @ 0x082288ED
	@ event command: playse
	.byte 0x2F
	.2byte 0x00DF
	@ event command: call
	.byte 0x04
	.4byte 0x082293BA @ EventScript_JP_082293BA
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x400F
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x05
	.4byte 0x0822890E @ EventScript_JP_0822890E
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x400E
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x05
	.4byte 0x08228D57 @ EventScript_JP_08228D57
EventScript_JP_0822890E: @ 0x0822890E
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0004
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822950D @ gText_Rom_22950D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000D
	.4byte 0x08229307 @ Movement_JP_08229307
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000F
	.4byte 0x08229315 @ Movement_JP_08229315
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0007
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E8
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x02021C7C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0005
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	@ event command: call
	.byte 0x04
	.4byte 0x08228FCC @ EventScript_JP_08228FCC
	@ event command: setvar
	.byte 0x16
	.2byte 0x4002
	.2byte 0x0000
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228A6C @ EventScript_JP_08228A6C
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082289DB @ EventScript_JP_082289DB
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0009
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082289DB @ EventScript_JP_082289DB
	@ event command: setvar
	.byte 0x16
	.2byte 0x4002
	.2byte 0x0001
EventScript_JP_08228983: @ 0x08228983
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082295B8 @ gText_Rom_2295B8
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: playse
	.byte 0x2F
	.2byte 0x00DF
	@ event command: call
	.byte 0x04
	.4byte 0x082293BA @ EventScript_JP_082293BA
	@ event command: delay
	.byte 0x28
	.2byte 0x003C
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x082294F0 @ Movement_JP_082294F0
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x082294F5 @ Movement_JP_082294F5
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: delay
	.byte 0x28
	.2byte 0x00B4
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x082294F7 @ Movement_JP_082294F7
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4002
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082289DB @ EventScript_JP_082289DB
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0013
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228A6C @ EventScript_JP_08228A6C
EventScript_JP_082289DB: @ 0x082289DB
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08243637
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0004
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4002
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08228A3D @ EventScript_JP_08228A3D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4002
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08228A51 @ EventScript_JP_08228A51
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4002
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08228A65 @ EventScript_JP_08228A65
	@ event command: playse
	.byte 0x2F
	.2byte 0x00DF
	@ event command: call
	.byte 0x04
	.4byte 0x082293BA @ EventScript_JP_082293BA
	@ event command: delay
	.byte 0x28
	.2byte 0x003C
EventScript_JP_08228A19: @ 0x08228A19
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000C
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
EventScript_JP_08228A26: @ 0x08228A26
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0004
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: goto
	.byte 0x05
	.4byte 0x08229481 @ EventScript_JP_08229481
EventScript_JP_08228A3D: @ 0x08228A3D
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0014
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: message
	.byte 0x67
	.4byte 0x08229547 @ gText_Rom_229547
	@ event command: waitmessage
	.byte 0x66
	@ event command: return
	.byte 0x03
EventScript_JP_08228A51: @ 0x08228A51
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0014
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: message
	.byte 0x67
	.4byte 0x08229608 @ gText_Rom_229608
	@ event command: waitmessage
	.byte 0x66
	@ event command: return
	.byte 0x03
EventScript_JP_08228A65: @ 0x08228A65
	@ event command: message
	.byte 0x67
	.4byte 0x08229CE6 @ gText_Rom_229CE6
	@ event command: waitmessage
	.byte 0x66
	@ event command: return
	.byte 0x03
EventScript_JP_08228A6C: @ 0x08228A6C
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08243637
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4002
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08228B4F @ EventScript_JP_08228B4F
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4002
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08228B58 @ EventScript_JP_08228B58
	@ event command: playse
	.byte 0x2F
	.2byte 0x00DF
	@ event command: call
	.byte 0x04
	.4byte 0x082293BA @ EventScript_JP_082293BA
	@ event command: delay
	.byte 0x28
	.2byte 0x003C
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000C
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: addvar
	.byte 0x17
	.2byte 0x800D
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0002
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8006
	.2byte 0x800D
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228AEE @ EventScript_JP_08228AEE
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0001
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x14
	.byte 0xFF
	.2byte 0x0005
	.2byte 0x0003
	.byte 0x27
EventScript_JP_08228AEE: @ 0x08228AEE
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000D
	.4byte 0x08229309 @ Movement_JP_08229309
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228B22 @ EventScript_JP_08228B22
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822955F @ gText_Rom_22955F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08228B2A @ EventScript_JP_08228B2A
EventScript_JP_08228B22: @ 0x08228B22
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822958C @ gText_Rom_22958C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
EventScript_JP_08228B2A: @ 0x08228B2A
	@ event command: special
	.byte 0x25
	.2byte 0x01E7
	@ event command: playse
	.byte 0x2F
	.2byte 0x00DF
	@ event command: call
	.byte 0x04
	.4byte 0x082293BA @ EventScript_JP_082293BA
	@ event command: delay
	.byte 0x28
	.2byte 0x003C
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: goto
	.byte 0x05
	.4byte 0x08229481 @ EventScript_JP_08229481
EventScript_JP_08228B4F: @ 0x08228B4F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822952F @ gText_Rom_22952F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_08228B58: @ 0x08228B58
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822964E @ gText_Rom_22964E
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_08228B61: @ 0x08228B61
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0006
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228BAF @ EventScript_JP_08228BAF
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0007
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228C02 @ EventScript_JP_08228C02
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228CF6 @ EventScript_JP_08228CF6
	@ event command: goto
	.byte 0x05
	.4byte 0x08228C55 @ EventScript_JP_08228C55
	.byte 0x03
EventScript_JP_08228BAF: @ 0x08228BAF
	@ event command: call
	.byte 0x04
	.4byte 0x08228D49 @ EventScript_JP_08228D49
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228BE6 @ EventScript_JP_08228BE6
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228BED @ EventScript_JP_08228BED
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228BF4 @ EventScript_JP_08228BF4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228BFB @ EventScript_JP_08228BFB
	@ event command: return
	.byte 0x03
EventScript_JP_08228BE6: @ 0x08228BE6
	@ event command: message
	.byte 0x67
	.4byte 0x08229694 @ gText_Rom_229694
	@ event command: waitmessage
	.byte 0x66
	@ event command: return
	.byte 0x03
EventScript_JP_08228BED: @ 0x08228BED
	@ event command: message
	.byte 0x67
	.4byte 0x082296A5 @ gText_Rom_2296A5
	@ event command: waitmessage
	.byte 0x66
	@ event command: return
	.byte 0x03
EventScript_JP_08228BF4: @ 0x08228BF4
	@ event command: message
	.byte 0x67
	.4byte 0x082296B5 @ gText_Rom_2296B5
	@ event command: waitmessage
	.byte 0x66
	@ event command: return
	.byte 0x03
EventScript_JP_08228BFB: @ 0x08228BFB
	@ event command: message
	.byte 0x67
	.4byte 0x082296D6 @ gText_Rom_2296D6
	@ event command: waitmessage
	.byte 0x66
	@ event command: return
	.byte 0x03
EventScript_JP_08228C02: @ 0x08228C02
	@ event command: call
	.byte 0x04
	.4byte 0x08228D49 @ EventScript_JP_08228D49
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228C39 @ EventScript_JP_08228C39
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228C40 @ EventScript_JP_08228C40
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228C47 @ EventScript_JP_08228C47
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228C4E @ EventScript_JP_08228C4E
	@ event command: return
	.byte 0x03
EventScript_JP_08228C39: @ 0x08228C39
	@ event command: message
	.byte 0x67
	.4byte 0x082296F9 @ gText_Rom_2296F9
	@ event command: waitmessage
	.byte 0x66
	@ event command: return
	.byte 0x03
EventScript_JP_08228C40: @ 0x08228C40
	@ event command: message
	.byte 0x67
	.4byte 0x0822970A @ gText_Rom_22970A
	@ event command: waitmessage
	.byte 0x66
	@ event command: return
	.byte 0x03
EventScript_JP_08228C47: @ 0x08228C47
	@ event command: message
	.byte 0x67
	.4byte 0x08229724 @ gText_Rom_229724
	@ event command: waitmessage
	.byte 0x66
	@ event command: return
	.byte 0x03
EventScript_JP_08228C4E: @ 0x08228C4E
	@ event command: message
	.byte 0x67
	.4byte 0x08229742 @ gText_Rom_229742
	@ event command: waitmessage
	.byte 0x66
	@ event command: return
	.byte 0x03
EventScript_JP_08228C55: @ 0x08228C55
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x400F
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x05
	.4byte 0x08228C91 @ EventScript_JP_08228C91
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x400E
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228CE4 @ EventScript_JP_08228CE4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228CED @ EventScript_JP_08228CED
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228CE4 @ EventScript_JP_08228CE4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228CED @ EventScript_JP_08228CED
EventScript_JP_08228C91: @ 0x08228C91
	@ event command: call
	.byte 0x04
	.4byte 0x08228D49 @ EventScript_JP_08228D49
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228CC8 @ EventScript_JP_08228CC8
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228CCF @ EventScript_JP_08228CCF
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228CD6 @ EventScript_JP_08228CD6
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228CDD @ EventScript_JP_08228CDD
	@ event command: return
	.byte 0x03
EventScript_JP_08228CC8: @ 0x08228CC8
	@ event command: message
	.byte 0x67
	.4byte 0x08229756 @ gText_Rom_229756
	@ event command: waitmessage
	.byte 0x66
	@ event command: return
	.byte 0x03
EventScript_JP_08228CCF: @ 0x08228CCF
	@ event command: message
	.byte 0x67
	.4byte 0x08229764 @ gText_Rom_229764
	@ event command: waitmessage
	.byte 0x66
	@ event command: return
	.byte 0x03
EventScript_JP_08228CD6: @ 0x08228CD6
	@ event command: message
	.byte 0x67
	.4byte 0x08229787 @ gText_Rom_229787
	@ event command: waitmessage
	.byte 0x66
	@ event command: return
	.byte 0x03
EventScript_JP_08228CDD: @ 0x08228CDD
	@ event command: message
	.byte 0x67
	.4byte 0x082297A7 @ gText_Rom_2297A7
	@ event command: waitmessage
	.byte 0x66
	@ event command: return
	.byte 0x03
EventScript_JP_08228CE4: @ 0x08228CE4
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822981A @ gText_Rom_22981A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_08228CED: @ 0x08228CED
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08229A4A @ gText_Rom_229A4A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_08228CF6: @ 0x08228CF6
	@ event command: call
	.byte 0x04
	.4byte 0x08228D49 @ EventScript_JP_08228D49
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228D2D @ EventScript_JP_08228D2D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228D34 @ EventScript_JP_08228D34
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228D3B @ EventScript_JP_08228D3B
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228D42 @ EventScript_JP_08228D42
	@ event command: return
	.byte 0x03
EventScript_JP_08228D2D: @ 0x08228D2D
	@ event command: message
	.byte 0x67
	.4byte 0x082297B7 @ gText_Rom_2297B7
	@ event command: waitmessage
	.byte 0x66
	@ event command: return
	.byte 0x03
EventScript_JP_08228D34: @ 0x08228D34
	@ event command: message
	.byte 0x67
	.4byte 0x082297CD @ gText_Rom_2297CD
	@ event command: waitmessage
	.byte 0x66
	@ event command: return
	.byte 0x03
EventScript_JP_08228D3B: @ 0x08228D3B
	@ event command: message
	.byte 0x67
	.4byte 0x082297E0 @ gText_Rom_2297E0
	@ event command: waitmessage
	.byte 0x66
	@ event command: return
	.byte 0x03
EventScript_JP_08228D42: @ 0x08228D42
	@ event command: message
	.byte 0x67
	.4byte 0x08229803 @ gText_Rom_229803
	@ event command: waitmessage
	.byte 0x66
	@ event command: return
	.byte 0x03
EventScript_JP_08228D49: @ 0x08228D49
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: return
	.byte 0x03
EventScript_JP_08228D57: @ 0x08228D57
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x400E
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228D88 @ EventScript_JP_08228D88
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228D95 @ EventScript_JP_08228D95
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228D88 @ EventScript_JP_08228D88
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228D95 @ EventScript_JP_08228D95
EventScript_JP_08228D88: @ 0x08228D88
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822982B @ gText_Rom_22982B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08228D9D @ EventScript_JP_08228D9D
EventScript_JP_08228D95: @ 0x08228D95
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08229A6B @ gText_Rom_229A6B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
EventScript_JP_08228D9D: @ 0x08228D9D
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x082294D7 @ Movement_JP_082294D7
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08229385 @ Movement_JP_08229385
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000F
	.4byte 0x0822931A @ Movement_JP_0822931A
	@ event command: playse
	.byte 0x2F
	.2byte 0x00DF
	@ event command: call
	.byte 0x04
	.4byte 0x082293BA @ EventScript_JP_082293BA
	@ event command: waitse
	.byte 0x30
	@ event command: playse
	.byte 0x2F
	.2byte 0x00DF
	@ event command: call
	.byte 0x04
	.4byte 0x082293BA @ EventScript_JP_082293BA
	@ event command: waitse
	.byte 0x30
	@ event command: playse
	.byte 0x2F
	.2byte 0x00DF
	@ event command: call
	.byte 0x04
	.4byte 0x082293BA @ EventScript_JP_082293BA
	@ event command: waitse
	.byte 0x30
	@ event command: playse
	.byte 0x2F
	.2byte 0x00DF
	@ event command: call
	.byte 0x04
	.4byte 0x082293BA @ EventScript_JP_082293BA
	@ event command: waitse
	.byte 0x30
	@ event command: playse
	.byte 0x2F
	.2byte 0x00DF
	@ event command: call
	.byte 0x04
	.4byte 0x082293BA @ EventScript_JP_082293BA
	@ event command: waitse
	.byte 0x30
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: message
	.byte 0x67
	.4byte 0x0822988B @ gText_Rom_22988B
	@ event command: waitmessage
	.byte 0x66
	@ event command: playse
	.byte 0x2F
	.2byte 0x00DF
	@ event command: call
	.byte 0x04
	.4byte 0x082293BA @ EventScript_JP_082293BA
	@ event command: waitse
	.byte 0x30
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x400E
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228ED2 @ EventScript_JP_08228ED2
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228E45 @ EventScript_JP_08228E45
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228EFF @ EventScript_JP_08228EFF
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0007
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x05
	.4byte 0x08228E45 @ EventScript_JP_08228E45
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082298B4 @ gText_Rom_2298B4
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0007
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
EventScript_JP_08228E45: @ 0x08228E45
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08229973 @ gText_Rom_229973
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: call
	.byte 0x04
	.4byte 0x08228F8C @ EventScript_JP_08228F8C
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228FAC @ EventScript_JP_08228FAC
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0009
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228FAC @ EventScript_JP_08228FAC
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228FC2 @ EventScript_JP_08228FC2
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08229988 @ gText_Rom_229988
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000C
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000C
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x05
	.4byte 0x08228AEE @ EventScript_JP_08228AEE
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000F
	.4byte 0x082293B7 @ Movement_JP_082293B7
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082299DB @ gText_Rom_2299DB
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: playfanfare
	.byte 0x31
	.2byte 0x01D2
	@ event command: message
	.byte 0x67
	.4byte 0x082299FF @ gText_Rom_2299FF
	@ event command: waitmessage
	.byte 0x66
	@ event command: waitfanfare
	.byte 0x32
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000D
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08229A1C @ gText_Rom_229A1C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08228AEE @ EventScript_JP_08228AEE
EventScript_JP_08228ED2: @ 0x08228ED2
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0007
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x05
	.4byte 0x08228EFF @ EventScript_JP_08228EFF
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08229AD4 @ gText_Rom_229AD4
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0007
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
EventScript_JP_08228EFF: @ 0x08228EFF
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08229B82 @ gText_Rom_229B82
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: call
	.byte 0x04
	.4byte 0x08228F8C @ EventScript_JP_08228F8C
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228FAC @ EventScript_JP_08228FAC
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0009
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228FAC @ EventScript_JP_08228FAC
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228FC2 @ EventScript_JP_08228FC2
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08229988 @ gText_Rom_229988
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000C
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000C
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228AEE @ EventScript_JP_08228AEE
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000F
	.4byte 0x082293B7 @ Movement_JP_082293B7
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08229BA1 @ gText_Rom_229BA1
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: playfanfare
	.byte 0x31
	.2byte 0x01D2
	@ event command: message
	.byte 0x67
	.4byte 0x08229BEE @ gText_Rom_229BEE
	@ event command: waitmessage
	.byte 0x66
	@ event command: waitfanfare
	.byte 0x32
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000D
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08229C07 @ gText_Rom_229C07
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08228AEE @ EventScript_JP_08228AEE
EventScript_JP_08228F8C: @ 0x08228F8C
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08229CB7 @ gText_Rom_229CB7
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000D
	.4byte 0x08229313 @ Movement_JP_08229313
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000F
	.4byte 0x082293B5 @ Movement_JP_082293B5
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: call
	.byte 0x04
	.4byte 0x08228FCC @ EventScript_JP_08228FCC
	@ event command: return
	.byte 0x03
EventScript_JP_08228FAC: @ 0x08228FAC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082299B0 @ gText_Rom_2299B0
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: playse
	.byte 0x2F
	.2byte 0x00DF
	@ event command: call
	.byte 0x04
	.4byte 0x082293BA @ EventScript_JP_082293BA
	@ event command: waitse
	.byte 0x30
	@ event command: goto
	.byte 0x05
	.4byte 0x08228A19 @ EventScript_JP_08228A19
EventScript_JP_08228FC2: @ 0x08228FC2
	@ event command: setvar
	.byte 0x16
	.2byte 0x4002
	.2byte 0x0002
	@ event command: goto
	.byte 0x05
	.4byte 0x08228983 @ EventScript_JP_08228983
EventScript_JP_08228FCC: @ 0x08228FCC
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0006
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: special
	.byte 0x25
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0003
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x4009
	.2byte 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00EC
	@ event command: waitstate
	.byte 0x27
	@ event command: setvar
	.byte 0x16
	.2byte 0x4009
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0011
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	@ event command: special
	.byte 0x25
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0010
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	@ event command: return
	.byte 0x03
MapScriptTable_JP_0822900D: @ 0x0822900D
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_08229017
	.2byte 0
EventScript_JP_08229017: @ 0x08229017
	@ event command: hideobjectat
	.byte 0x59
	.2byte 0x000D
	.byte 0x1A
	.byte 0x15
	@ event command: call
	.byte 0x04
	.4byte 0x0822908E @ EventScript_JP_0822908E
	@ event command: call
	.byte 0x04
	.4byte 0x08228868 @ EventScript_JP_08228868
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x0001
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x082292FF @ Movement_JP_082292FF
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x05
	.4byte 0x0822907B @ EventScript_JP_0822907B
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0009
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: copyvar
	.byte 0x19
	.2byte 0x400E
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822907B @ EventScript_JP_0822907B
	@ event command: call
	.byte 0x04
	.4byte 0x08222264
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x000F
	.2byte 0x000D
	.2byte 0x0009
	@ event command: removeobject
	.byte 0x53
	.2byte 0x000F
	@ event command: addobject
	.byte 0x55
	.2byte 0x000F
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000F
	.4byte 0x08229317 @ Movement_JP_08229317
EventScript_JP_0822907B: @ 0x0822907B
	@ event command: end
	.byte 0x02
EventScript_JP_0822907C: @ 0x0822907C
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4009
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08229088 @ EventScript_JP_08229088
	@ event command: end
	.byte 0x02
EventScript_JP_08229088: @ 0x08229088
	@ event command: call
	.byte 0x04
	.4byte 0x0822908E @ EventScript_JP_0822908E
	@ event command: return
	.byte 0x03
EventScript_JP_0822908E: @ 0x0822908E
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x400F
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082290BB @ EventScript_JP_082290BB
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x400F
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082290BC @ EventScript_JP_082290BC
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x400F
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08229120 @ EventScript_JP_08229120
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x400F
	.2byte 0x0003
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082291DE @ EventScript_JP_082291DE
	@ event command: return
	.byte 0x03
EventScript_JP_082290BB: @ 0x082290BB
	@ event command: return
	.byte 0x03
EventScript_JP_082290BC: @ 0x082290BC
	@ event command: createvobject
	.byte 0xAA
	.byte 0x2E
	.byte 0x01
	.2byte 0x0003
	.2byte 0x0000
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x16
	.byte 0x04
	.2byte 0x0006
	.2byte 0x0000
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x05
	.byte 0x06
	.2byte 0x0008
	.2byte 0x0000
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x0C
	.byte 0x09
	.2byte 0x000B
	.2byte 0x0000
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x2E
	.byte 0x0B
	.2byte 0x000D
	.2byte 0x0000
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x42
	.byte 0x0D
	.2byte 0x000F
	.2byte 0x0000
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x2D
	.byte 0x13
	.2byte 0x0007
	.2byte 0x0001
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x22
	.byte 0x16
	.2byte 0x000B
	.2byte 0x0001
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x0B
	.byte 0x19
	.2byte 0x000F
	.2byte 0x0001
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x23
	.byte 0x1A
	.2byte 0x0002
	.2byte 0x0002
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x26
	.byte 0x1D
	.2byte 0x0005
	.2byte 0x0001
	.byte 0x03
	.byte 0x01
	@ event command: return
	.byte 0x03
EventScript_JP_08229120: @ 0x08229120
	@ event command: createvobject
	.byte 0xAA
	.byte 0x2E
	.byte 0x01
	.2byte 0x0003
	.2byte 0x0000
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x16
	.byte 0x04
	.2byte 0x0006
	.2byte 0x0000
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x05
	.byte 0x06
	.2byte 0x0008
	.2byte 0x0000
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x14
	.byte 0x07
	.2byte 0x0009
	.2byte 0x0000
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x0C
	.byte 0x09
	.2byte 0x000B
	.2byte 0x0000
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x2F
	.byte 0x0A
	.2byte 0x000C
	.2byte 0x0000
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x2E
	.byte 0x0B
	.2byte 0x000D
	.2byte 0x0000
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x42
	.byte 0x0D
	.2byte 0x000F
	.2byte 0x0000
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x30
	.byte 0x0F
	.2byte 0x0002
	.2byte 0x0001
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x05
	.byte 0x10
	.2byte 0x0003
	.2byte 0x0001
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x14
	.byte 0x11
	.2byte 0x0004
	.2byte 0x0001
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x2D
	.byte 0x13
	.2byte 0x0007
	.2byte 0x0001
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x16
	.byte 0x14
	.2byte 0x0009
	.2byte 0x0001
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x22
	.byte 0x16
	.2byte 0x000B
	.2byte 0x0001
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x2E
	.byte 0x17
	.2byte 0x000D
	.2byte 0x0001
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x0B
	.byte 0x19
	.2byte 0x000F
	.2byte 0x0001
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x23
	.byte 0x1A
	.2byte 0x0002
	.2byte 0x0002
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x28
	.byte 0x1C
	.2byte 0x0005
	.2byte 0x0002
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x26
	.byte 0x1D
	.2byte 0x0005
	.2byte 0x0001
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x53
	.byte 0x1E
	.2byte 0x0006
	.2byte 0x0002
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x22
	.byte 0x1F
	.2byte 0x0008
	.2byte 0x0002
	.byte 0x03
	.byte 0x01
	@ event command: return
	.byte 0x03
EventScript_JP_082291DE: @ 0x082291DE
	@ event command: createvobject
	.byte 0xAA
	.byte 0x05
	.byte 0x00
	.2byte 0x0002
	.2byte 0x0000
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x2E
	.byte 0x01
	.2byte 0x0003
	.2byte 0x0000
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x2D
	.byte 0x02
	.2byte 0x000F
	.2byte 0x0000
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x42
	.byte 0x03
	.2byte 0x0005
	.2byte 0x0000
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x16
	.byte 0x04
	.2byte 0x0006
	.2byte 0x0000
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x2E
	.byte 0x05
	.2byte 0x0007
	.2byte 0x0000
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x05
	.byte 0x06
	.2byte 0x0008
	.2byte 0x0000
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x14
	.byte 0x07
	.2byte 0x0009
	.2byte 0x0000
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x18
	.byte 0x08
	.2byte 0x000A
	.2byte 0x0000
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x0C
	.byte 0x09
	.2byte 0x000B
	.2byte 0x0000
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x2F
	.byte 0x0A
	.2byte 0x000C
	.2byte 0x0000
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x2E
	.byte 0x0B
	.2byte 0x000D
	.2byte 0x0000
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x2D
	.byte 0x0C
	.2byte 0x000E
	.2byte 0x0000
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x42
	.byte 0x0D
	.2byte 0x000F
	.2byte 0x0002
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x37
	.byte 0x0E
	.2byte 0x000C
	.2byte 0x0002
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x30
	.byte 0x0F
	.2byte 0x0002
	.2byte 0x0001
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x05
	.byte 0x10
	.2byte 0x0003
	.2byte 0x0001
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x14
	.byte 0x11
	.2byte 0x0004
	.2byte 0x0001
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x18
	.byte 0x12
	.2byte 0x0006
	.2byte 0x0001
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x2D
	.byte 0x13
	.2byte 0x0007
	.2byte 0x0001
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x16
	.byte 0x14
	.2byte 0x0009
	.2byte 0x0001
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x17
	.byte 0x15
	.2byte 0x000A
	.2byte 0x0001
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x22
	.byte 0x16
	.2byte 0x000B
	.2byte 0x0001
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x2E
	.byte 0x17
	.2byte 0x000D
	.2byte 0x0001
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x30
	.byte 0x18
	.2byte 0x000E
	.2byte 0x0001
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x0B
	.byte 0x19
	.2byte 0x000F
	.2byte 0x0001
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x23
	.byte 0x1A
	.2byte 0x0002
	.2byte 0x0002
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x11
	.byte 0x1B
	.2byte 0x0003
	.2byte 0x0002
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x28
	.byte 0x1C
	.2byte 0x0005
	.2byte 0x0002
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x26
	.byte 0x1D
	.2byte 0x0005
	.2byte 0x0001
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x53
	.byte 0x1E
	.2byte 0x0006
	.2byte 0x0002
	.byte 0x03
	.byte 0x01
	@ event command: createvobject
	.byte 0xAA
	.byte 0x22
	.byte 0x1F
	.2byte 0x0008
	.2byte 0x0002
	.byte 0x03
	.byte 0x01
	@ event command: return
	.byte 0x03
Movement_JP_082292FF: @ 0x082292FF
	@ object movement sequence
	.byte 0x54 @ set_invisible
	.byte 0xFE @ step_end
Movement_JP_08229301: @ 0x08229301
	@ object movement sequence
	.byte 0x55 @ set_visible
	.byte 0x14 @ delay_16
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0xFE @ step_end
Movement_JP_08229309: @ 0x08229309
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
Movement_JP_0822930B: @ 0x0822930B
	@ object movement sequence
	.byte 0x55 @ set_visible
	.byte 0x14 @ delay_16
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0xFE @ step_end
Movement_JP_08229313: @ 0x08229313
	@ object movement sequence
	.byte 0x0B @ walk_right
	.byte 0xFE @ step_end
Movement_JP_08229315: @ 0x08229315
	@ object movement sequence
	.byte 0x0A @ walk_left
	.byte 0xFE @ step_end
Movement_JP_08229317: @ 0x08229317
	@ object movement sequence
	.byte 0x01 @ face_up
	.byte 0x54 @ set_invisible
	.byte 0xFE @ step_end
Movement_JP_0822931A: @ 0x0822931A
	@ object movement sequence
	.byte 0x55 @ set_visible
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x02 @ face_left
	.byte 0x13 @ delay_8
	.byte 0x12 @ delay_4
	.byte 0x00 @ face_down
	.byte 0x13 @ delay_8
	.byte 0x12 @ delay_4
	.byte 0x03 @ face_right
	.byte 0x13 @ delay_8
	.byte 0x12 @ delay_4
	.byte 0x01 @ face_up
	.byte 0x13 @ delay_8
	.byte 0x12 @ delay_4
	.byte 0x02 @ face_left
	.byte 0x14 @ delay_16
	.byte 0x16 @ walk_fast_up
	.byte 0x16 @ walk_fast_up
	.byte 0x02 @ face_left
	.byte 0x13 @ delay_8
	.byte 0x12 @ delay_4
	.byte 0x00 @ face_down
	.byte 0x13 @ delay_8
	.byte 0x12 @ delay_4
	.byte 0x03 @ face_right
	.byte 0x13 @ delay_8
	.byte 0x12 @ delay_4
	.byte 0x01 @ face_up
	.byte 0x13 @ delay_8
	.byte 0x12 @ delay_4
	.byte 0x02 @ face_left
	.byte 0x0E @ jump_2_left
	.byte 0x41 @ unlock_facing_direction
	.byte 0x01 @ face_up
	.byte 0x40 @ lock_facing_direction
	.byte 0x0E @ jump_2_left
	.byte 0x0E @ jump_2_left
	.byte 0x41 @ unlock_facing_direction
	.byte 0x03 @ face_right
	.byte 0x40 @ lock_facing_direction
	.byte 0x0E @ jump_2_left
	.byte 0x41 @ unlock_facing_direction
	.byte 0x00 @ face_down
	.byte 0x11 @ delay_2
	.byte 0x02 @ face_left
	.byte 0x13 @ delay_8
	.byte 0x12 @ delay_4
	.byte 0x01 @ face_up
	.byte 0x13 @ delay_8
	.byte 0x12 @ delay_4
	.byte 0x03 @ face_right
	.byte 0x13 @ delay_8
	.byte 0x12 @ delay_4
	.byte 0x00 @ face_down
	.byte 0x13 @ delay_8
	.byte 0x12 @ delay_4
	.byte 0x02 @ face_left
	.byte 0x12 @ delay_4
	.byte 0x01 @ face_up
	.byte 0x12 @ delay_4
	.byte 0x03 @ face_right
	.byte 0x12 @ delay_4
	.byte 0x00 @ face_down
	.byte 0x12 @ delay_4
	.byte 0x02 @ face_left
	.byte 0x11 @ delay_2
	.byte 0x01 @ face_up
	.byte 0x11 @ delay_2
	.byte 0x03 @ face_right
	.byte 0x11 @ delay_2
	.byte 0x00 @ face_down
	.byte 0x11 @ delay_2
	.byte 0x02 @ face_left
	.byte 0x40 @ lock_facing_direction
	.byte 0x0B @ walk_right
	.byte 0x07 @ walk_slow_right
	.byte 0x0B @ walk_right
	.byte 0x07 @ walk_slow_right
	.byte 0x41 @ unlock_facing_direction
	.byte 0x01 @ face_up
	.byte 0x14 @ delay_16
	.byte 0x47 @ jump_in_place_up
	.byte 0x47 @ jump_in_place_up
	.byte 0x14 @ delay_16
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x47 @ jump_in_place_up
	.byte 0x14 @ delay_16
	.byte 0x0B @ walk_right
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x02 @ face_left
	.byte 0x11 @ delay_2
	.byte 0x01 @ face_up
	.byte 0x11 @ delay_2
	.byte 0x03 @ face_right
	.byte 0x11 @ delay_2
	.byte 0x00 @ face_down
	.byte 0x11 @ delay_2
	.byte 0x02 @ face_left
	.byte 0x12 @ delay_4
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0xFE @ step_end
Movement_JP_08229385: @ 0x08229385
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x28 @ walk_in_place_fastest_right
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x25 @ walk_in_place_fastest_down
	.byte 0xFE @ step_end
Movement_JP_082293B5: @ 0x082293B5
	@ object movement sequence
	.byte 0x0A @ walk_left
	.byte 0xFE @ step_end
Movement_JP_082293B7: @ 0x082293B7
	@ object movement sequence
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0xFE @ step_end
EventScript_JP_082293BA: @ 0x082293BA
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x00
	.byte 0x04
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x02
	.byte 0x04
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x04
	.byte 0x04
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x06
	.byte 0x04
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x08
	.byte 0x04
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x0A
	.byte 0x03
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x0C
	.byte 0x03
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x0E
	.byte 0x03
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x10
	.byte 0x03
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x12
	.byte 0x03
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x14
	.byte 0x04
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x16
	.byte 0x04
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x18
	.byte 0x04
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x1A
	.byte 0x04
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x1C
	.byte 0x04
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x1E
	.byte 0x04
	@ event command: delay
	.byte 0x28
	.2byte 0x0014
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x00
	.byte 0x01
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x02
	.byte 0x01
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x04
	.byte 0x01
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x06
	.byte 0x01
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x08
	.byte 0x01
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x0A
	.byte 0x01
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x0C
	.byte 0x01
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x0E
	.byte 0x01
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x10
	.byte 0x01
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x12
	.byte 0x01
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x14
	.byte 0x01
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x16
	.byte 0x01
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x18
	.byte 0x01
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x1A
	.byte 0x01
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x1C
	.byte 0x01
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x1E
	.byte 0x01
	@ event command: delay
	.byte 0x28
	.2byte 0x0014
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x01
	.byte 0x04
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x03
	.byte 0x04
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x05
	.byte 0x04
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x07
	.byte 0x04
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x09
	.byte 0x04
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x0B
	.byte 0x03
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x0D
	.byte 0x03
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x0F
	.byte 0x03
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x11
	.byte 0x03
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x13
	.byte 0x03
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x15
	.byte 0x04
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x17
	.byte 0x04
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x19
	.byte 0x04
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x1B
	.byte 0x03
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x1F
	.byte 0x03
	@ event command: delay
	.byte 0x28
	.2byte 0x0014
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x01
	.byte 0x01
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x03
	.byte 0x01
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x05
	.byte 0x01
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x07
	.byte 0x01
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x09
	.byte 0x01
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x0B
	.byte 0x01
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x0D
	.byte 0x01
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x0F
	.byte 0x01
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x11
	.byte 0x01
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x13
	.byte 0x01
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x15
	.byte 0x01
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x17
	.byte 0x01
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x19
	.byte 0x01
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x1B
	.byte 0x01
	@ event command: turnvobject
	.byte 0xAB
	.byte 0x1F
	.byte 0x01
	@ event command: delay
	.byte 0x28
	.2byte 0x0014
	@ event command: return
	.byte 0x03
EventScript_JP_08229481: @ 0x08229481
	@ event command: copyvar
	.byte 0x19
	.2byte 0x800D
	.2byte 0x40CE
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822949B @ EventScript_JP_0822949B
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x12
	.byte 0xFF
	.2byte 0x0005
	.2byte 0x000B
	.byte 0x27, 0x02
EventScript_JP_0822949B: @ 0x0822949B
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x12
	.byte 0xFF
	.2byte 0x0011
	.2byte 0x000B
	.byte 0x27, 0x02
EventScript_JP_082294A5: @ 0x082294A5
	@ event command: random
	.byte 0x8F
	.2byte 0x0002
	@ event command: copyvar
	.byte 0x19
	.2byte 0x400D
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x400D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08244178
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0006
	.2byte 0x0002
	.2byte 0x0000
	@ event command: setobjectmovementtype
	.byte 0x65
	.2byte 0x0006
	.byte 0x0A
	@ event command: return
	.byte 0x03
EventScript_JP_082294C4: @ 0x082294C4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x400D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08244178
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0006
	.4byte 0x082294EA @ Movement_JP_082294EA
	@ event command: return
	.byte 0x03
Movement_JP_082294D7: @ 0x082294D7
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x13 @ delay_8
	.byte 0x51 @ disable_jump_landing_ground_effect
	.byte 0x46 @ jump_in_place_down
	.byte 0x12 @ delay_4
	.byte 0x46 @ jump_in_place_down
	.byte 0x50 @ enable_jump_landing_ground_effect
	.byte 0xFE @ step_end
Movement_JP_082294EA: @ 0x082294EA
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x25 @ walk_in_place_fastest_down
	.byte 0xFE @ step_end
Movement_JP_082294F0: @ 0x082294F0
	@ object movement sequence
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0xFE @ step_end
Movement_JP_082294F5: @ 0x082294F5
	@ object movement sequence
	.byte 0x27 @ walk_in_place_fastest_left
	.byte 0xFE @ step_end
Movement_JP_082294F7: @ 0x082294F7
	@ object movement sequence
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0xFE @ step_end
