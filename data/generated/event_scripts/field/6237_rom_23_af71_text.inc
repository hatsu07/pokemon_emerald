	@ field-script:0x23A530 FieldScriptText_23ADAF
	.globl FieldScriptText_23ADAF
FieldScriptText_23ADAF: @ 0x0823ADAF
	.string "バトルフロンティアの　しせつに\nポケモンを　ちょうせん　させるとき\pそれぞれの　ポケモンが\nおなじ　どうぐを　もつことは　できません\pちょうせん　させる　ポケモンには\nすべて　ちがう　どうぐを\lもたせて　おくように　してください"
	.byte EOS
	.if (. - FieldScriptText_23ADAF) > 0x73
	.error "FieldScriptText_23ADAF may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_23ADAF) < 0x73
	.space 0x73 - (. - FieldScriptText_23ADAF)
	.endif
	@ field-script:0x23A54A FieldScriptText_23AE22
	.globl FieldScriptText_23AE22
FieldScriptText_23AE22: @ 0x0823AE22
	.string "こちらでは　フロンティアパスの\nせつめいを　いたします！"
	.byte EOS
	.if (. - FieldScriptText_23AE22) > 0x1d
	.error "FieldScriptText_23AE22 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_23AE22) < 0x1d
	.space 0x1d - (. - FieldScriptText_23AE22)
	.endif
	@ field-script:0x23A557 FieldScriptText_23AE3F
	.globl FieldScriptText_23AE3F
FieldScriptText_23AE3F: @ 0x0823AE3F
	.string "どの　せつめいが　ききたいですか？"
	.byte EOS
	.if (. - FieldScriptText_23AE3F) > 0x12
	.error "FieldScriptText_23AE3F may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_23AE3F) < 0x12
	.space 0x12 - (. - FieldScriptText_23AE3F)
	.endif
	@ field-script:0x23A5A0 FieldScriptText_23AE51
	.globl FieldScriptText_23AE51
FieldScriptText_23AE51: @ 0x0823AE51
	.string "バトルフロンティアの　7つの　しせつで\nつよさを　みとめられた　トレーナーが\lそれぞれの　しせつの　シンボルを\lもらえることが　あります\pシンボルを　もらう　ためには\nなんにんも　トレーナーを　かちぬいたり\lなんども　せいは　したり……\pなかなか　たいへんな　みちのりですが\nぜひ　がんばって　くださいね！"
	.byte EOS
	.if (. - FieldScriptText_23AE51) > 0x9a
	.error "FieldScriptText_23AE51 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_23AE51) < 0x9a
	.space 0x9a - (. - FieldScriptText_23AE51)
	.endif
	@ field-script:0x23A5AE FieldScriptText_23AEEB
	.globl FieldScriptText_23AEEB
FieldScriptText_23AEEB: @ 0x0823AEEB
	.string "あなたの　たいせんを　ひとつだけ\nパスに　きろくする　ことが　できます\pおともだち　との　たいせんか\nバトルチューブ　バトルピラミッド　いがいの\lバトルフロンティアでの\lたいせんが　きろくできます\pたいせんが　おわった　ときに\nきろく　するか　どうかを　きめられます"
	.byte EOS
	.if (. - FieldScriptText_23AEEB) > 0x86
	.error "FieldScriptText_23AEEB may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_23AEEB) < 0x86
	.space 0x86 - (. - FieldScriptText_23AEEB)
	.endif
	@ field-script:0x23A5BC FieldScriptText_23AF71
	.globl FieldScriptText_23AF71
FieldScriptText_23AF71: @ 0x0823AF71
	.string "バトルポイントは\nバトルフロンティアで　すばらしい\lたたかいを　した　トレーナーに\lあたえられる　ごほうびです\pためた　ポイントは　ひきかえサービスで\nしょうひんと　ひきかえることが　できます"
	.byte EOS
	.if (. - FieldScriptText_23AF71) > 0x61
	.error "FieldScriptText_23AF71 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_23AF71) < 0x61
	.space 0x61 - (. - FieldScriptText_23AF71)
	.endif
	@ Embedded ROM bytes: file offset 0x23AFD2, size 0x1C
	.byte 0x00, 0x0F, 0x00
	.4byte BattleFrontier_Lounge8_Text_WhatATrainerNeeds
	.byte 0x09, 0x02, 0x02, 0x0F, 0x00
	.4byte BattleFrontier_Lounge8_Text_KnowAboutFrontierBrains
	.byte 0x09, 0x02, 0x02, 0x0F, 0x00, 0xB8, 0xB0, 0x23, 0x08, 0x09, 0x02, 0x02
