	@ data/maps/AbandonedShip_Rooms_1F/scripts.inc:34 AbandonedShip_Rooms_1F_Text_TakingALookAround
	.globl AbandonedShip_Rooms_1F_Text_TakingALookAround
AbandonedShip_Rooms_1F_Text_TakingALookAround: @ 0x0821AA80
	.string "こういった ふねは めずらしいので\nけんがく しておるのですよ\pフムフム……\nほかにも へやが ありそうですな"
	.byte EOS
	.if (. - AbandonedShip_Rooms_1F_Text_TakingALookAround) > 0x38
	.error "AbandonedShip_Rooms_1F_Text_TakingALookAround may not grow beyond its original slot"
	.endif
	.if (. - AbandonedShip_Rooms_1F_Text_TakingALookAround) < 0x38
	.space 0x38 - (. - AbandonedShip_Rooms_1F_Text_TakingALookAround)
	.endif
	@ data/maps/AbandonedShip_Rooms_1F/scripts.inc:37 AbandonedShip_Rooms_1F_Text_ThaliaIntro (+1 aliases)
	.globl AbandonedShip_Rooms_1F_Text_ThaliaIntro
AbandonedShip_Rooms_1F_Text_ThaliaIntro: @ 0x0821AAB8
	.string "あら こんな ところまで きて\nキミも ものずきね!"
	.byte EOS
	.if (. - AbandonedShip_Rooms_1F_Text_ThaliaIntro) > 0x1b
	.error "AbandonedShip_Rooms_1F_Text_ThaliaIntro may not grow beyond its original slot"
	.endif
	.if (. - AbandonedShip_Rooms_1F_Text_ThaliaIntro) < 0x1b
	.space 0x1b - (. - AbandonedShip_Rooms_1F_Text_ThaliaIntro)
	.endif
	@ data/maps/AbandonedShip_Rooms_1F/scripts.inc:40 AbandonedShip_Rooms_1F_Text_ThaliaDefeat (+1 aliases)
	.globl AbandonedShip_Rooms_1F_Text_ThaliaDefeat
AbandonedShip_Rooms_1F_Text_ThaliaDefeat: @ 0x0821AAD3
	.string "ものずき だけじゃ なくて\nつよいのか……"
	.byte EOS
	.if (. - AbandonedShip_Rooms_1F_Text_ThaliaDefeat) > 0x16
	.error "AbandonedShip_Rooms_1F_Text_ThaliaDefeat may not grow beyond its original slot"
	.endif
	.if (. - AbandonedShip_Rooms_1F_Text_ThaliaDefeat) < 0x16
	.space 0x16 - (. - AbandonedShip_Rooms_1F_Text_ThaliaDefeat)
	.endif
	@ data/maps/AbandonedShip_Rooms_1F/scripts.inc:43 AbandonedShip_Rooms_1F_Text_ThaliaPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl AbandonedShip_Rooms_1F_Text_ThaliaPostBattle
AbandonedShip_Rooms_1F_Text_ThaliaPostBattle: @ 0x0821AAE9
	.string "となりのへやの おじさん\nけんがく だなんて あやしいわ\pわたしに きが あるんじゃない かしら"
	.byte EOS
	.if (. - AbandonedShip_Rooms_1F_Text_ThaliaPostBattle) != 0x31
	.error "AbandonedShip_Rooms_1F_Text_ThaliaPostBattle must retain its original byte length"
	.endif
	@ data/maps/AbandonedShip_Rooms_1F/scripts.inc:46 AbandonedShip_Rooms_1F_Text_ThaliaRegister
	.globl AbandonedShip_Rooms_1F_Text_ThaliaRegister
AbandonedShip_Rooms_1F_Text_ThaliaRegister: @ 0x0821AB1A
	.string "つよい トレーナーの キミを\nきねんに とうろく させて ちょうだいね!"
	.byte EOS
	.if (. - AbandonedShip_Rooms_1F_Text_ThaliaRegister) > 0x25
	.error "AbandonedShip_Rooms_1F_Text_ThaliaRegister may not grow beyond its original slot"
	.endif
	.if (. - AbandonedShip_Rooms_1F_Text_ThaliaRegister) < 0x25
	.space 0x25 - (. - AbandonedShip_Rooms_1F_Text_ThaliaRegister)
	.endif
	@ data/maps/AbandonedShip_Rooms_1F/scripts.inc:49 AbandonedShip_Rooms_1F_Text_ThaliaRematchIntro (+1 aliases)
	.globl AbandonedShip_Rooms_1F_Text_ThaliaRematchIntro
AbandonedShip_Rooms_1F_Text_ThaliaRematchIntro: @ 0x0821AB3F
	.string "こんな ところまで なんども きて\nほんとに ものずきね キミって!"
	.byte EOS
	.if (. - AbandonedShip_Rooms_1F_Text_ThaliaRematchIntro) > 0x23
	.error "AbandonedShip_Rooms_1F_Text_ThaliaRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - AbandonedShip_Rooms_1F_Text_ThaliaRematchIntro) < 0x23
	.space 0x23 - (. - AbandonedShip_Rooms_1F_Text_ThaliaRematchIntro)
	.endif
	@ data/maps/AbandonedShip_Rooms_1F/scripts.inc:52 AbandonedShip_Rooms_1F_Text_ThaliaRematchDefeat (+1 aliases)
	.globl AbandonedShip_Rooms_1F_Text_ThaliaRematchDefeat
AbandonedShip_Rooms_1F_Text_ThaliaRematchDefeat: @ 0x0821AB62
	.string "ちょっと つよすぎない?"
	.byte EOS
	.if (. - AbandonedShip_Rooms_1F_Text_ThaliaRematchDefeat) > 0xd
	.error "AbandonedShip_Rooms_1F_Text_ThaliaRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - AbandonedShip_Rooms_1F_Text_ThaliaRematchDefeat) < 0xd
	.space 0xd - (. - AbandonedShip_Rooms_1F_Text_ThaliaRematchDefeat)
	.endif
	@ data/maps/AbandonedShip_Rooms_1F/scripts.inc:55 AbandonedShip_Rooms_1F_Text_ThaliaPostRematch
	.globl AbandonedShip_Rooms_1F_Text_ThaliaPostRematch
AbandonedShip_Rooms_1F_Text_ThaliaPostRematch: @ 0x0821AB6F
	.string "あの おじさん ぜったい\nわたしの ことを みているのよ!\lわざとらしすぎるわ!"
	.byte EOS
	.if (. - AbandonedShip_Rooms_1F_Text_ThaliaPostRematch) > 0x29
	.error "AbandonedShip_Rooms_1F_Text_ThaliaPostRematch may not grow beyond its original slot"
	.endif
	.if (. - AbandonedShip_Rooms_1F_Text_ThaliaPostRematch) < 0x29
	.space 0x29 - (. - AbandonedShip_Rooms_1F_Text_ThaliaPostRematch)
	.endif
	@ data/maps/AbandonedShip_Rooms_1F/scripts.inc:58 AbandonedShip_Rooms_1F_Text_DemetriusIntro (+1 aliases)
	.globl AbandonedShip_Rooms_1F_Text_DemetriusIntro
AbandonedShip_Rooms_1F_Text_DemetriusIntro: @ 0x0821AB98
	.string "わーっ!\nみつかった…… って あれ?"
	.byte EOS
	.if (. - AbandonedShip_Rooms_1F_Text_DemetriusIntro) > 0x14
	.error "AbandonedShip_Rooms_1F_Text_DemetriusIntro may not grow beyond its original slot"
	.endif
	.if (. - AbandonedShip_Rooms_1F_Text_DemetriusIntro) < 0x14
	.space 0x14 - (. - AbandonedShip_Rooms_1F_Text_DemetriusIntro)
	.endif
	@ data/maps/AbandonedShip_Rooms_1F/scripts.inc:61 AbandonedShip_Rooms_1F_Text_DemetriusDefeat (+1 aliases)
	.globl AbandonedShip_Rooms_1F_Text_DemetriusDefeat
AbandonedShip_Rooms_1F_Text_DemetriusDefeat: @ 0x0821ABAC
	.string "なんだ\nかあちゃん じゃ なかったのか"
	.byte EOS
	.if (. - AbandonedShip_Rooms_1F_Text_DemetriusDefeat) > 0x14
	.error "AbandonedShip_Rooms_1F_Text_DemetriusDefeat may not grow beyond its original slot"
	.endif
	.if (. - AbandonedShip_Rooms_1F_Text_DemetriusDefeat) < 0x14
	.space 0x14 - (. - AbandonedShip_Rooms_1F_Text_DemetriusDefeat)
	.endif
	@ data/maps/AbandonedShip_Rooms_1F/scripts.inc:64 AbandonedShip_Rooms_1F_Text_DemetriusPostBattle
	.globl AbandonedShip_Rooms_1F_Text_DemetriusPostBattle
AbandonedShip_Rooms_1F_Text_DemetriusPostBattle: @ 0x0821ABC0
	.string "かあちゃんに しかられて\nここまで にげて きたんだ\lボクが ここに いるのは ないしょだぞ!"
	.byte EOS
	.if (. - AbandonedShip_Rooms_1F_Text_DemetriusPostBattle) > 0x30
	.error "AbandonedShip_Rooms_1F_Text_DemetriusPostBattle may not grow beyond its original slot"
	.endif
	.if (. - AbandonedShip_Rooms_1F_Text_DemetriusPostBattle) < 0x30
	.space 0x30 - (. - AbandonedShip_Rooms_1F_Text_DemetriusPostBattle)
	.endif
	@ Embedded ROM bytes: file offset 0x21ABF0, size 0xA6
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x05, 0xFB, 0xAB, 0x21, 0x08, 0x01, 0x04, 0xAC, 0x21, 0x08, 0x00, 0x40, 0x18, 0x3C, 0xFF, 0x05
	.byte 0x00, 0x04, 0x00, 0x02, 0x2B, 0xEF, 0x00, 0x07, 0x00, 0x17, 0xAC, 0x21, 0x08, 0x2B, 0xEF, 0x00
	.byte 0x07, 0x01, 0x21, 0xAC, 0x21, 0x08, 0x02, 0xA2, 0x0B, 0x00, 0x04, 0x00, 0x33, 0x02, 0x01, 0x00
	.byte 0x03, 0xA2, 0x0B, 0x00, 0x04, 0x00, 0x2B, 0x02, 0x01, 0x00, 0x03, 0x0F, 0x00
	.4byte AbandonedShip_Corridors_B1F_Text_YayItsAShip @ ROM pointer 0x0821AD11
	.byte 0x09, 0x02, 0x02, 0x69, 0x2B, 0xEF, 0x00, 0x06, 0x01, 0x75, 0xAC, 0x21, 0x08, 0x47, 0x1D, 0x01
	.byte 0x01, 0x00, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06, 0x01, 0x6B, 0xAC, 0x21, 0x08, 0x0F, 0x00, 0x3C
	.byte 0xAD, 0x21, 0x08, 0x09, 0x04, 0x2F, 0x15, 0x00, 0x45, 0x1D, 0x01, 0x01, 0x00, 0x29, 0xEF, 0x00
	.byte 0x04, 0x21, 0xAC, 0x21, 0x08, 0x25, 0x8E, 0x00, 0x6B, 0x02, 0x0F, 0x00
	.4byte AbandonedShip_Corridors_B1F_Text_DoorIsLocked @ ROM pointer 0x0821AD1E
	.byte 0x09, 0x04, 0x6B, 0x02, 0x0F, 0x00, 0x6C, 0xAD, 0x21, 0x08, 0x09, 0x04, 0x6B, 0x02, 0x5C, 0x00
	.byte 0xF0, 0x01, 0x00, 0x00
	.4byte AbandonedShip_Corridors_B1F_Text_DuncanIntro @ ROM pointer 0x0821AC96
	.4byte AbandonedShip_Corridors_B1F_Text_DuncanDefeat @ ROM pointer 0x0821ACC7
	.byte 0x0F, 0x00
	.4byte AbandonedShip_Corridors_B1F_Text_DuncanPostBattle
	.byte 0x09, 0x06, 0x02
