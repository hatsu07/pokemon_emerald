@ Battle animation script data
@ ROM 0x08277908-0x08286C2F (0xF328 bytes)
@
@ Fully decoded from the JP ROM command stream. The first 0x1C bytes are
@ gBattleAnims_Special; 0x08277924-0x08286C2D is battle-animation bytecode;
@ the final two bytes are alignment padding.
@
@ Move_*, Status_*, General_* and Special_* entry labels were recovered from
@ the four animation pointer tables immediately preceding / at this region.

@ Constants needed by symbolic arguments below.
	.ifndef ANIM_ATTACKER
	.set ANIM_ATTACKER, 0
	.endif
	.ifndef ANIM_TARGET
	.set ANIM_TARGET, 1
	.endif
	.ifndef ANIM_ATK_PARTNER
	.set ANIM_ATK_PARTNER, 2
	.endif
	.ifndef ANIM_DEF_PARTNER
	.set ANIM_DEF_PARTNER, 3
	.endif
	.ifndef SOUND_PAN_ATTACKER
	.set SOUND_PAN_ATTACKER, -64
	.endif
	.ifndef SOUND_PAN_TARGET
	.set SOUND_PAN_TARGET, 63
	.endif
	.ifndef BG_NONE
	.set BG_NONE, 0
	.endif
	.ifndef BG_DARK
	.set BG_DARK, 1
	.endif
	.ifndef BG_GHOST
	.set BG_GHOST, 2
	.endif
	.ifndef BG_PSYCHIC
	.set BG_PSYCHIC, 3
	.endif
	.ifndef BG_IMPACT_OPPONENT
	.set BG_IMPACT_OPPONENT, 4
	.endif
	.ifndef BG_IMPACT_PLAYER
	.set BG_IMPACT_PLAYER, 5
	.endif
	.ifndef BG_IMPACT_CONTESTS
	.set BG_IMPACT_CONTESTS, 6
	.endif
	.ifndef BG_DRILL
	.set BG_DRILL, 7
	.endif
	.ifndef BG_DRILL_CONTESTS
	.set BG_DRILL_CONTESTS, 8
	.endif
	.ifndef BG_HIGHSPEED_OPPONENT
	.set BG_HIGHSPEED_OPPONENT, 9
	.endif
	.ifndef BG_HIGHSPEED_PLAYER
	.set BG_HIGHSPEED_PLAYER, 10
	.endif
	.ifndef BG_THUNDER
	.set BG_THUNDER, 11
	.endif
	.ifndef BG_GUILLOTINE_OPPONENT
	.set BG_GUILLOTINE_OPPONENT, 12
	.endif
	.ifndef BG_GUILLOTINE_PLAYER
	.set BG_GUILLOTINE_PLAYER, 13
	.endif
	.ifndef BG_GUILLOTINE_CONTESTS
	.set BG_GUILLOTINE_CONTESTS, 14
	.endif
	.ifndef BG_ICE
	.set BG_ICE, 15
	.endif
	.ifndef BG_COSMIC
	.set BG_COSMIC, 16
	.endif
	.ifndef BG_IN_AIR
	.set BG_IN_AIR, 17
	.endif
	.ifndef BG_SKY
	.set BG_SKY, 18
	.endif
	.ifndef BG_SKY_CONTESTS
	.set BG_SKY_CONTESTS, 19
	.endif
	.ifndef BG_AURORA
	.set BG_AURORA, 20
	.endif
	.ifndef BG_FISSURE
	.set BG_FISSURE, 21
	.endif
	.ifndef BG_BUG_OPPONENT
	.set BG_BUG_OPPONENT, 22
	.endif
	.ifndef BG_BUG_PLAYER
	.set BG_BUG_PLAYER, 23
	.endif
	.ifndef BG_SOLAR_BEAM_OPPONENT
	.set BG_SOLAR_BEAM_OPPONENT, 24
	.endif
	.ifndef BG_SOLAR_BEAM_PLAYER
	.set BG_SOLAR_BEAM_PLAYER, 25
	.endif
	.ifndef BG_SOLAR_BEAM_CONTESTS
	.set BG_SOLAR_BEAM_CONTESTS, 26
	.endif

sBattleAnimationScriptData:
gBattleAnims_Special::
	.4byte Special_LevelUp
	.4byte Special_SwitchOutPlayerMon
	.4byte Special_SwitchOutOpponentMon
	.4byte Special_BallThrow
	.4byte Special_BallThrowWithTrainer
	.4byte Special_SubstituteToMon
	.4byte Special_MonToSubstitute

Move_NONE:
Move_MIRROR_MOVE:
Move_POUND:
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_TARGET
	ba_setalpha 12, 8
	ba_playsewithpan 0x0086, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, 0, 0, 1, 2
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 3, 0, 6, 1
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_TARGET
	ba_blendoff
	ba_end
Move_DOUBLE_SLAP:
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_TARGET
	ba_setalpha 12, 8
	ba_choosetwoturnanim BattleAnimScript_08277980, BattleAnimScript_08277994
BattleAnimScript_08277966: @ 0x08277966
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 3, 0, 6, 1
	ba_playsewithpan 0x0086, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_TARGET
	ba_blendoff
	ba_end
BattleAnimScript_08277980: @ 0x08277980
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, -8, 0, 1, 2
	ba_goto BattleAnimScript_08277966
BattleAnimScript_08277994: @ 0x08277994
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, 8, 0, 1, 2
	ba_goto BattleAnimScript_08277966
Move_POISON_POWDER:
	ba_loadspritegfx 0x2751
	ba_loadspritegfx 0x27A6
	ba_loopsewithpan 0x00A9, SOUND_PAN_TARGET, 10, 6
	ba_createsprite 0x0856DD2C, ANIM_TARGET, 2, -30, -22, 117, 80, 5, 1
	ba_createsprite 0x0856DD2C, ANIM_TARGET, 2, 10, -22, 117, 80, -5, 1
	ba_createsprite 0x0856DD2C, ANIM_TARGET, 2, -25, -22, 117, 112, 5, 3
	ba_delay 15
	ba_createsprite 0x0856DD2C, ANIM_TARGET, 2, -5, -22, 117, 80, -5, 1
	ba_createsprite 0x0856DD2C, ANIM_TARGET, 2, 5, -22, 117, 96, 5, 1
	ba_createsprite 0x0856DD2C, ANIM_TARGET, 2, 0, -22, 117, 69, -5, 1
	ba_createsprite 0x0856DD2C, ANIM_TARGET, 2, -15, -22, 117, 112, 5, 2
	ba_delay 30
	ba_createsprite 0x0856DD2C, ANIM_TARGET, 2, -15, -22, 117, 112, 5, 2
	ba_createsprite 0x0856DD2C, ANIM_TARGET, 2, 15, -22, 117, 80, -5, 1
	ba_createsprite 0x0856DD2C, ANIM_TARGET, 2, -10, -22, 117, 96, 7, 2
	ba_createsprite 0x0856DD2C, ANIM_TARGET, 2, -5, -22, 117, 90, -8, 0
	ba_delay 20
	ba_createsprite 0x0856DD2C, ANIM_TARGET, 2, -10, -22, 117, 80, -5, 1
	ba_createsprite 0x0856DD2C, ANIM_TARGET, 2, 0, -22, 117, 89, 5, 2
	ba_createsprite 0x0856DD2C, ANIM_TARGET, 2, 20, -22, 117, 112, -8, 2
	ba_createsprite 0x0856DD2C, ANIM_TARGET, 2, 5, -22, 117, 80, 5, 1
	ba_waitforvisualfinish
	ba_end
Move_STUN_SPORE:
	ba_loadspritegfx 0x2754
	ba_loopsewithpan 0x00A9, SOUND_PAN_TARGET, 10, 6
	ba_createsprite 0x0856DD14, ANIM_TARGET, 2, -30, -22, 117, 80, 5, 1
	ba_createsprite 0x0856DD14, ANIM_TARGET, 2, 10, -22, 117, 80, -5, 1
	ba_createsprite 0x0856DD14, ANIM_TARGET, 2, -25, -22, 117, 112, 5, 3
	ba_delay 15
	ba_createsprite 0x0856DD14, ANIM_TARGET, 2, -5, -22, 117, 80, -5, 1
	ba_createsprite 0x0856DD14, ANIM_TARGET, 2, 5, -22, 117, 96, 5, 1
	ba_createsprite 0x0856DD14, ANIM_TARGET, 2, 0, -22, 117, 69, -5, 1
	ba_createsprite 0x0856DD14, ANIM_TARGET, 2, -15, -22, 117, 112, 5, 2
	ba_delay 30
	ba_createsprite 0x0856DD14, ANIM_TARGET, 2, -15, -22, 117, 112, 5, 2
	ba_createsprite 0x0856DD14, ANIM_TARGET, 2, 15, -22, 117, 80, -5, 1
	ba_createsprite 0x0856DD14, ANIM_TARGET, 2, -10, -22, 117, 96, 7, 2
	ba_createsprite 0x0856DD14, ANIM_TARGET, 2, -5, -22, 117, 90, -8, 0
	ba_delay 20
	ba_createsprite 0x0856DD14, ANIM_TARGET, 2, -10, -22, 117, 80, -5, 1
	ba_createsprite 0x0856DD14, ANIM_TARGET, 2, 0, -22, 117, 89, 5, 2
	ba_createsprite 0x0856DD14, ANIM_TARGET, 2, 20, -22, 117, 112, -8, 2
	ba_createsprite 0x0856DD14, ANIM_TARGET, 2, 5, -22, 117, 80, 5, 1
	ba_waitforvisualfinish
	ba_end
Move_SLEEP_POWDER:
	ba_loadspritegfx 0x2753
	ba_loopsewithpan 0x00A9, SOUND_PAN_TARGET, 10, 6
	ba_createsprite 0x0856DCFC, ANIM_TARGET, 2, -30, -22, 117, 80, 5, 1
	ba_createsprite 0x0856DCFC, ANIM_TARGET, 2, 10, -22, 117, 80, -5, 1
	ba_createsprite 0x0856DCFC, ANIM_TARGET, 2, -25, -22, 117, 112, 5, 3
	ba_delay 15
	ba_createsprite 0x0856DCFC, ANIM_TARGET, 2, -5, -22, 117, 80, -5, 1
	ba_createsprite 0x0856DCFC, ANIM_TARGET, 2, 5, -22, 117, 96, 5, 1
	ba_createsprite 0x0856DCFC, ANIM_TARGET, 2, 0, -22, 117, 69, -5, 1
	ba_createsprite 0x0856DCFC, ANIM_TARGET, 2, -15, -22, 117, 112, 5, 2
	ba_delay 30
	ba_createsprite 0x0856DCFC, ANIM_TARGET, 2, -15, -22, 117, 112, 5, 2
	ba_createsprite 0x0856DCFC, ANIM_TARGET, 2, 15, -22, 117, 80, -5, 1
	ba_createsprite 0x0856DCFC, ANIM_TARGET, 2, -10, -22, 117, 96, 7, 2
	ba_createsprite 0x0856DCFC, ANIM_TARGET, 2, -5, -22, 117, 90, -8, 0
	ba_delay 20
	ba_createsprite 0x0856DCFC, ANIM_TARGET, 2, -10, -22, 117, 80, -5, 1
	ba_createsprite 0x0856DCFC, ANIM_TARGET, 2, 0, -22, 117, 89, 5, 2
	ba_createsprite 0x0856DCFC, ANIM_TARGET, 2, 20, -22, 117, 112, -8, 2
	ba_createsprite 0x0856DCFC, ANIM_TARGET, 2, 5, -22, 117, 80, 5, 1
	ba_waitforvisualfinish
	ba_end
Move_SWIFT:
	ba_loadspritegfx 0x27BE
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_DEF_PARTNER
	ba_setalpha 12, 8
	ba_playsewithpan 0x00CE, SOUND_PAN_ATTACKER
	ba_createsprite 0x0856DFE8, ANIM_TARGET, 3, 20, -10, 20, 0, 22, 20, 1
	ba_delay 5
	ba_playsewithpan 0x00CE, SOUND_PAN_ATTACKER
	ba_createsprite 0x0856DFE8, ANIM_TARGET, 3, 20, -10, 20, 5, 22, -18, 1
	ba_delay 5
	ba_playsewithpan 0x00CE, SOUND_PAN_ATTACKER
	ba_createsprite 0x0856DFE8, ANIM_TARGET, 3, 20, -10, 20, -10, 22, 15, 1
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 2, 0, 18, 1
	ba_createvisualtask AnimTask_ShakeMon2, 2, 3, 2, 0, 18, 1
	ba_delay 5
	ba_playsewithpan 0x00CE, SOUND_PAN_ATTACKER
	ba_createsprite 0x0856DFE8, ANIM_TARGET, 3, 20, -10, 20, 0, 22, -20, 1
	ba_delay 5
	ba_playsewithpan 0x00CE, SOUND_PAN_ATTACKER
	ba_createsprite 0x0856DFE8, ANIM_TARGET, 3, 20, -10, 20, 0, 22, 12, 1
	ba_delay 5
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
Move_STRENGTH:
BattleAnimScript_08277DEE: @ 0x08277DEE
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_DEF_PARTNER
	ba_setalpha 12, 8
	ba_playsewithpan 0x0098, SOUND_PAN_ATTACKER
	ba_createvisualtask AnimTask_ShakeAndSinkMon, 5, 0, 2, 0, 96, 30
	ba_waitforvisualfinish
	ba_delay 10
	ba_createsprite 0x0855A988, ANIM_ATTACKER, 2, 0, 0, 4
	ba_createvisualtask AnimTask_TranslateMonEllipticalRespectSide, 2, 1, 18, 6, 2, 4
	ba_delay 4
	ba_playsewithpan 0x008D, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 3, 16, 12, 1, 1
	ba_delay 4
	ba_playsewithpan 0x008D, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 3, -16, -12, 1, 1
	ba_delay 4
	ba_playsewithpan 0x008D, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 3, 3, 4, 1, 1
	ba_waitforvisualfinish
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 2, 0, 8, 1
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
Move_TACKLE:
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_TARGET
	ba_setalpha 12, 8
	ba_createsprite 0x0855A958, ANIM_ATTACKER, 2, 4, 4
	ba_delay 6
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, 0, 0, 1, 2
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 3, 0, 6, 1
	ba_playsewithpan 0x008B, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_TARGET
	ba_blendoff
	ba_end
Move_BODY_SLAM:
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_DEF_PARTNER
	ba_setalpha 12, 8
	ba_playsewithpan 0x0098, SOUND_PAN_ATTACKER
	ba_createsprite 0x0855A970, ANIM_ATTACKER, 2, 6, 1, 0
	ba_waitforvisualfinish
	ba_delay 11
	ba_createsprite 0x0855A9A0, ANIM_ATTACKER, 2, 0, 26, 0, 0, 5
	ba_delay 6
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 4, -10, 0, 1, 0
	ba_loopsewithpan 0x008D, SOUND_PAN_TARGET, 10, 2
	ba_delay 1
	ba_createsprite 0x0855A9A0, ANIM_ATTACKER, 2, 1, -28, 0, 0, 3
	ba_waitforvisualfinish
	ba_createvisualtask AnimTask_ShakeMonInPlace, 2, 1, 4, 0, 12, 1
	ba_waitforvisualfinish
	ba_delay 10
	ba_createsprite 0x0855A988, ANIM_ATTACKER, 2, 0, 0, 6
	ba_delay 5
	ba_createsprite 0x0855A988, ANIM_ATTACKER, 2, 1, 0, 6
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
Move_SUPERSONIC:
	ba_loadspritegfx 0x27B3
	ba_monbg ANIM_ATK_PARTNER
	ba_monbgprio_2A ANIM_ATTACKER
	ba_setalpha 12, 8
	ba_createvisualtask AnimTask_ShakeMon2, 2, 0, 2, 0, 8, 1
	ba_call BattleAnimScript_08277F8B
	ba_call BattleAnimScript_08277F8B
	ba_call BattleAnimScript_08277F8B
	ba_call BattleAnimScript_08277F8B
	ba_call BattleAnimScript_08277F8B
	ba_call BattleAnimScript_08277F8B
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_ATK_PARTNER
	ba_blendoff
	ba_end
BattleAnimScript_08277F8B: @ 0x08277F8B
	ba_playsewithpan 0x00B8, SOUND_PAN_ATTACKER
	ba_createsprite gSupersonicWaveSpriteTemplate, ANIM_TARGET, 2, 16, 0, 0, 0, 30, 0
	ba_delay 2
	ba_return
Move_SCREECH:
	ba_loadspritegfx 0x27B4
	ba_createvisualtask AnimTask_ShakeMon2, 2, 0, 3, 0, 2, 1
	ba_call BattleAnimScript_08277FD8
	ba_call BattleAnimScript_08277FD8
	ba_delay 16
	ba_createvisualtask AnimTask_SwayMon, 5, 0, 6, 2048, 2, 1
	ba_waitforvisualfinish
	ba_end
BattleAnimScript_08277FD8: @ 0x08277FD8
	ba_playsewithpan 0x00B5, SOUND_PAN_ATTACKER
	ba_createsprite gScreechWaveSpriteTemplate, ANIM_TARGET, 2, 16, 0, 0, 0, 30, 0
	ba_delay 2
	ba_return
Move_FLAME_WHEEL:
	ba_loadspritegfx 0x272D
	ba_monbg ANIM_DEF_PARTNER
	ba_monbgprio_2A ANIM_TARGET
	ba_createsprite 0x08571168, ANIM_ATTACKER, 3, 0, 0, 56, 0
	ba_playsewithpan 0x0090, SOUND_PAN_ATTACKER
	ba_delay 2
	ba_createsprite 0x08571168, ANIM_ATTACKER, 3, 0, 0, 56, 4
	ba_playsewithpan 0x0090, SOUND_PAN_ATTACKER
	ba_delay 2
	ba_createsprite 0x08571168, ANIM_ATTACKER, 3, 0, 0, 56, 8
	ba_playsewithpan 0x0090, SOUND_PAN_ATTACKER
	ba_delay 2
	ba_createsprite 0x08571168, ANIM_ATTACKER, 3, 0, 0, 56, 12
	ba_playsewithpan 0x0090, SOUND_PAN_ATTACKER
	ba_delay 2
	ba_createsprite 0x08571168, ANIM_ATTACKER, 3, 0, 0, 56, 16
	ba_playsewithpan 0x0090, SOUND_PAN_ATTACKER
	ba_delay 2
	ba_createsprite 0x08571168, ANIM_ATTACKER, 3, 0, 0, 56, 20
	ba_playsewithpan 0x0090, SOUND_PAN_ATTACKER
	ba_delay 2
	ba_createsprite 0x08571168, ANIM_ATTACKER, 3, 0, 0, 56, 24
	ba_playsewithpan 0x0090, SOUND_PAN_ATTACKER
	ba_waitforvisualfinish
	ba_createsprite 0x0855A9A0, ANIM_ATTACKER, 2, 0, 24, 0, 0, 6
	ba_delay 4
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 5, 0, 8, 1
	ba_createvisualtask AnimTask_BlendMonInAndOut, 3, 1, 31, 12, 1, 1
	ba_playsewithpan 0x0091, SOUND_PAN_TARGET
	ba_call BattleAnimScript_0828129F
	ba_delay 7
	ba_createsprite 0x0855A988, ANIM_ATTACKER, 2, 0, 0, 9
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_end
	ba_createsprite 0x08571168, ANIM_ATTACKER, 3, 0, 0, 50
	ba_delay 4
	ba_return
Move_PIN_MISSILE:
	ba_loadspritegfx 0x27B1
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_TARGET
	ba_monbgprio_28 ANIM_TARGET
	ba_setalpha 12, 8
	ba_playsewithpan 0x008F, SOUND_PAN_ATTACKER
	ba_createsprite 0x08572640, ANIM_ATTACKER, 2, 20, -8, -8, -8, 20, -32
	ba_delay 15
	ba_createsprite 0x08572640, ANIM_ATTACKER, 2, 20, -8, 8, 8, 20, -40
	ba_delay 4
	ba_playsewithpan 0x00A6, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 3, -8, -8, 1, 2
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 3, 0, 2, 1
	ba_delay 9
	ba_createsprite 0x08572640, ANIM_ATTACKER, 2, 20, -8, 0, 0, 20, -32
	ba_delay 4
	ba_playsewithpan 0x00A6, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 3, 8, 8, 1, 2
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 3, 0, 2, 1
	ba_delay 14
	ba_playsewithpan 0x00A6, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 3, 0, 0, 1, 2
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 3, 0, 2, 1
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_TARGET
	ba_blendoff
	ba_end
Move_ICICLE_SPEAR:
	ba_loadspritegfx 0x2816
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_TARGET
	ba_monbgprio_28 ANIM_TARGET
	ba_setalpha 12, 8
	ba_playsewithpan 0x0089, SOUND_PAN_ATTACKER
	ba_createsprite 0x08572658, ANIM_ATTACKER, 2, 20, -8, -8, -8, 20, -32
	ba_delay 15
	ba_createsprite 0x08572658, ANIM_ATTACKER, 2, 20, -8, 8, 8, 20, -40
	ba_delay 4
	ba_playsewithpan 0x00A6, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 3, -8, -8, 1, 2
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 3, 0, 2, 1
	ba_delay 9
	ba_createsprite 0x08572658, ANIM_ATTACKER, 2, 20, -8, 0, 0, 20, -32
	ba_delay 4
	ba_playsewithpan 0x00A6, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 3, 8, 8, 1, 2
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 3, 0, 2, 1
	ba_delay 14
	ba_playsewithpan 0x00A6, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 3, 0, 0, 1, 2
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 3, 0, 2, 1
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_TARGET
	ba_blendoff
	ba_end
Move_TAKE_DOWN:
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_DEF_PARTNER
	ba_setalpha 12, 8
	ba_createvisualtask AnimTask_WindUpLunge, 5, 0, -24, 8, 23, 10, 40, 10
	ba_delay 35
	ba_createsprite 0x08572E70, ANIM_ATTACKER, 2, 31, 3, 1, 0, 10, 0, 0
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 4, -10, 0, 1, 0
	ba_playsewithpan 0x008D, SOUND_PAN_TARGET
	ba_delay 1
	ba_createsprite 0x0855A9A0, ANIM_ATTACKER, 2, 1, -16, 0, 0, 4
	ba_waitforvisualfinish
	ba_createvisualtask AnimTask_ShakeMonInPlace, 2, 1, 4, 0, 12, 1
	ba_waitforvisualfinish
	ba_delay 2
	ba_createsprite 0x0855A988, ANIM_ATTACKER, 2, 0, 0, 5
	ba_delay 3
	ba_createsprite 0x0855A988, ANIM_ATTACKER, 2, 1, 0, 7
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
Move_DOUBLE_EDGE:
	ba_loadspritegfx 0x2797
	ba_playsewithpan 0x00CE, SOUND_PAN_ATTACKER
	ba_createsprite 0x08572E70, ANIM_ATTACKER, 2, 2, 4, 2, 0x7FFF, 10, 0, 0
	ba_waitforvisualfinish
	ba_delay 10
	ba_playsewithpan 0x00C1, SOUND_PAN_ATTACKER
	ba_waitplaysewithpan 0x00C1, SOUND_PAN_ATTACKER, 8
	ba_createvisualtask AnimTask_TranslateMonEllipticalRespectSide, 2, 0, 18, 6, 2, 4
	ba_waitforvisualfinish
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 0, 16, 16, 0x7FFF
	ba_createsprite 0x0855A9A0, ANIM_ATTACKER, 2, 0, 20, 0, 0, 4
	ba_delay 3
	ba_waitforvisualfinish
	ba_playsewithpan 0x008D, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 4, -10, 0, 1, 0
	ba_createsprite 0x0855A9A0, ANIM_ATTACKER, 2, 1, -32, 0, 0, 3
	ba_waitforvisualfinish
	ba_createvisualtask sub_080D59B8, 2, 8, -256, 0, 0
	ba_createvisualtask sub_080D59B8, 2, 8, -256, 1, 0
	ba_createvisualtask AnimTask_ShakeMonInPlace, 2, 0, 4, 0, 12, 1
	ba_createvisualtask AnimTask_ShakeMonInPlace, 2, 1, 4, 0, 12, 1
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 2, 16, 0, 0x7FFF
	ba_waitforvisualfinish
	ba_createvisualtask sub_080D59B8, 2, 8, -256, 0, 1
	ba_createvisualtask sub_080D59B8, 2, 8, -256, 1, 1
	ba_waitforvisualfinish
	ba_createsprite 0x0855A988, ANIM_ATTACKER, 2, 0, 0, 5
	ba_delay 3
	ba_createsprite 0x0855A988, ANIM_ATTACKER, 2, 1, 0, 7
	ba_waitforvisualfinish
	ba_end
Move_POISON_STING:
	ba_loadspritegfx 0x27B1
	ba_loadspritegfx 0x2797
	ba_loadspritegfx 0x27A6
	ba_monbg ANIM_TARGET
	ba_monbgprio_28 ANIM_TARGET
	ba_setalpha 12, 8
	ba_playsewithpan 0x00A0, SOUND_PAN_ATTACKER
	ba_createsprite 0x08572628, ANIM_TARGET, 2, 20, 0, -8, 0, 20
	ba_waitforvisualfinish
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 3, 0, 0, 1, 2
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 2, 0, 5, 1
	ba_playsewithpan 0x00A6, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_call BattleAnimScript_08285FF8
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_TARGET
	ba_blendoff
	ba_end
Move_TWINEEDLE:
	ba_loadspritegfx 0x27B1
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_TARGET
	ba_monbgprio_28 ANIM_TARGET
	ba_setalpha 12, 8
	ba_loopsewithpan 0x00A0, SOUND_PAN_ATTACKER, 6, 2
	ba_createsprite 0x08572628, ANIM_TARGET, 2, 10, -4, 0, -4, 20
	ba_createsprite 0x08572628, ANIM_TARGET, 2, 20, 12, 10, 12, 20
	ba_delay 20
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 2, 0, 5, 1
	ba_createsprite gBattleAnimSpriteTemplate_BasicHitFlipped, ANIM_ATTACKER, 3, 0, -4, 1, 3
	ba_loopsewithpan 0x00A6, SOUND_PAN_TARGET, 5, 2
	ba_delay 1
	ba_createsprite gBattleAnimSpriteTemplate_BasicHitFlipped, ANIM_ATTACKER, 3, 10, 12, 1, 3
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_TARGET
	ba_blendoff
	ba_end
Move_FIRE_BLAST:
	ba_loadspritegfx 0x272D
	ba_createsoundtask sub_08158A6C, 144, 145
	ba_call BattleAnimScript_08278575
	ba_call BattleAnimScript_08278575
	ba_call BattleAnimScript_08278575
	ba_delay 24
	ba_createvisualtask sub_08116E70, 10, 1, 3, 0, 8, 0
	ba_waitforvisualfinish
	ba_delay 19
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 5, 0, 20, 1
	ba_call BattleAnimScript_082785B9
	ba_delay 3
	ba_call BattleAnimScript_082785B9
	ba_delay 3
	ba_call BattleAnimScript_082785B9
	ba_delay 3
	ba_call BattleAnimScript_082785B9
	ba_delay 3
	ba_call BattleAnimScript_082785B9
	ba_delay 3
	ba_call BattleAnimScript_082785B9
	ba_delay 3
	ba_call BattleAnimScript_082785B9
	ba_delay 3
	ba_call BattleAnimScript_082785B9
	ba_delay 3
	ba_call BattleAnimScript_082785B9
	ba_waitforvisualfinish
	ba_createvisualtask sub_08116E70, 10, 1, 2, 8, 0, 0
	ba_waitforvisualfinish
	ba_end
BattleAnimScript_08278575: @ 0x08278575
	ba_createsprite 0x08571100, ANIM_TARGET, 2, 0, 0, 0
	ba_createsprite 0x08571100, ANIM_TARGET, 2, 0, 0, 51
	ba_createsprite 0x08571100, ANIM_TARGET, 2, 0, 0, 102
	ba_createsprite 0x08571100, ANIM_TARGET, 2, 0, 0, 153
	ba_createsprite 0x08571100, ANIM_TARGET, 2, 0, 0, 204
	ba_delay 5
	ba_return
BattleAnimScript_082785B9: @ 0x082785B9
	ba_createsprite 0x08571150, ANIM_TARGET, 2, 0, 0, 10, 0, -2
	ba_createsprite 0x08571150, ANIM_TARGET, 2, 0, 0, 13, -2, 0
	ba_createsprite 0x08571150, ANIM_TARGET, 2, 0, 0, 13, 2, 0
	ba_createsprite 0x08571150, ANIM_TARGET, 2, 0, 0, 15, -2, 2
	ba_createsprite 0x08571150, ANIM_TARGET, 2, 0, 0, 15, 2, 2
	ba_return
Move_LEECH_SEED:
	ba_loadspritegfx 0x2716
	ba_playsewithpan 0x00A9, SOUND_PAN_ATTACKER
	ba_createsprite 0x0856DEA0, ANIM_TARGET, 2, 15, 0, 0, 24, 35, -32
	ba_delay 8
	ba_playsewithpan 0x00A9, SOUND_PAN_ATTACKER
	ba_createsprite 0x0856DEA0, ANIM_TARGET, 2, 15, 0, -16, 24, 35, -40
	ba_delay 8
	ba_playsewithpan 0x00A9, SOUND_PAN_ATTACKER
	ba_createsprite 0x0856DEA0, ANIM_TARGET, 2, 15, 0, 16, 24, 35, -37
	ba_delay 12
	ba_loopsewithpan 0x00A7, SOUND_PAN_TARGET, 10, 8
	ba_waitforvisualfinish
	ba_end
Move_EMBER:
	ba_loadspritegfx 0x272D
	ba_loopsewithpan 0x0097, SOUND_PAN_ATTACKER, 5, 2
	ba_createsprite 0x085710B8, ANIM_TARGET, 2, 20, 0, -16, 24, 20, 1
	ba_delay 4
	ba_createsprite 0x085710B8, ANIM_TARGET, 2, 20, 0, 0, 24, 20, 1
	ba_delay 4
	ba_createsprite 0x085710B8, ANIM_TARGET, 2, 20, 0, 16, 24, 20, 1
	ba_delay 16
	ba_playsewithpan 0x0090, SOUND_PAN_TARGET
	ba_call BattleAnimScript_082786C1
	ba_call BattleAnimScript_082786C1
	ba_call BattleAnimScript_082786C1
	ba_end
BattleAnimScript_082786C1: @ 0x082786C1
	ba_createsprite 0x085710D0, ANIM_TARGET, 2, -24, 24, 24, 24, 20, 1, 1
	ba_delay 4
	ba_return
Move_MEGA_PUNCH:
	ba_loadspritegfx 0x2797
	ba_loadspritegfx 0x279F
	ba_monbg ANIM_TARGET
	ba_delay 2
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 0, 0, 16, 0
	ba_setalpha 12, 8
	ba_playsewithpan 0x008C, SOUND_PAN_TARGET
	ba_createsprite 0x08571B2C, ANIM_ATTACKER, 3, 0, 0, 0, 50
	ba_createvisualtask sub_08116E70, 10, 4, 2, 0, 7, 0x7FFF
	ba_delay 50
	ba_call BattleAnimScript_08278775
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, 0, 0, 1, 0
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 4, 0, 22, 1
	ba_createvisualtask sub_08116E70, 10, 4, 2, 0, 0, 0x7FFF
	ba_createsprite 0x08572E70, ANIM_ATTACKER, 2, 31, 3, 1, 0, 8, 0, 0
	ba_playsewithpan 0x007B, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_TARGET
	ba_blendoff
	ba_delay 2
	ba_restorebg
	ba_waitbgfadein
	ba_end
BattleAnimScript_08278775: @ 0x08278775
	ba_delay 2
	ba_createvisualtask AnimTask_IsContest, 2
	ba_jumpargeq 0x07, 1, BattleAnimScript_082787AC
	ba_createvisualtask AnimTask_IsTargetPlayerSide, 2
	ba_jumpargeq 0x07, 0, BattleAnimScript_0827879E
	ba_jumpargeq 0x07, 1, BattleAnimScript_082787A5
BattleAnimScript_0827879D: @ 0x0827879D
	ba_return
BattleAnimScript_0827879E: @ 0x0827879E
	ba_changebg BG_IMPACT_OPPONENT
	ba_goto BattleAnimScript_0827879D
BattleAnimScript_082787A5: @ 0x082787A5
	ba_changebg BG_IMPACT_PLAYER
	ba_goto BattleAnimScript_0827879D
BattleAnimScript_082787AC: @ 0x082787AC
	ba_changebg BG_IMPACT_CONTESTS
	ba_goto BattleAnimScript_0827879D
Move_MEGA_KICK:
	ba_loadspritegfx 0x2797
	ba_loadspritegfx 0x279F
	ba_monbg ANIM_TARGET
	ba_delay 2
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 0, 0, 16, 0
	ba_setalpha 12, 8
	ba_playsewithpan 0x008C, SOUND_PAN_TARGET
	ba_createsprite 0x08571B2C, ANIM_ATTACKER, 3, 0, 0, 1, 50
	ba_createvisualtask sub_08116E70, 10, 4, 2, 0, 7, 0x7FFF
	ba_delay 50
	ba_playsewithpan 0x008D, SOUND_PAN_TARGET
	ba_call BattleAnimScript_08278775
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, 0, 0, 1, 0
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 4, 0, 22, 1
	ba_createvisualtask sub_08116E70, 10, 4, 2, 0, 0, 0x7FFF
	ba_createsprite 0x08572E70, ANIM_ATTACKER, 2, 31, 3, 1, 0, 8, 0, 0
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_TARGET
	ba_blendoff
	ba_delay 2
	ba_restorebg
	ba_waitbgfadein
	ba_end
Move_COMET_PUNCH:
	ba_loadspritegfx 0x2797
	ba_loadspritegfx 0x279F
	ba_monbg ANIM_TARGET
	ba_setalpha 12, 8
	ba_choosetwoturnanim BattleAnimScript_0827887D, BattleAnimScript_082788A2
BattleAnimScript_08278863: @ 0x08278863
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 3, 0, 6, 1
	ba_playsewithpan 0x008B, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_TARGET
	ba_blendoff
	ba_end
BattleAnimScript_0827887D: @ 0x0827887D
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, -8, -8, 1, 2
	ba_createsprite 0x08571A7C, ANIM_ATTACKER, 3, -8, 0, 8, 1, 0
	ba_goto BattleAnimScript_08278863
BattleAnimScript_082788A2: @ 0x082788A2
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, 8, -8, 1, 2
	ba_createsprite 0x08571A7C, ANIM_ATTACKER, 3, 8, 0, 8, 1, 0
	ba_goto BattleAnimScript_08278863
Move_SONIC_BOOM:
	ba_loadspritegfx 0x2713
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_DEF_PARTNER
	ba_monbgprio_28 ANIM_TARGET
	ba_setalpha 12, 8
	ba_call BattleAnimScript_082788FE
	ba_call BattleAnimScript_082788FE
	ba_call BattleAnimScript_082788FE
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 3, 0, 10, 1
	ba_call BattleAnimScript_08278916
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
BattleAnimScript_082788FE: @ 0x082788FE
	ba_playsewithpan 0x00A0, SOUND_PAN_ATTACKER
	ba_createsprite gSonicBoomProjectileSpriteTemplate, ANIM_TARGET, 2, 16, 0, 0, 0, 15
	ba_delay 4
	ba_return
BattleAnimScript_08278916: @ 0x08278916
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 3, 0, 0, 1, 2
	ba_delay 4
	ba_return
Move_THUNDER_SHOCK:
	ba_loadspritegfx 0x2711
	ba_loadspritegfx 0x271B
	ba_createvisualtask sub_08116E70, 10, 1, 0, 0, 6, 0
	ba_waitforvisualfinish
	ba_delay 10
	ba_createvisualtask sub_0810B02C, 5, 0, -44, 0
	ba_playsewithpan 0x0076, SOUND_PAN_TARGET
	ba_delay 9
	ba_createvisualtask sub_08116E70, 10, 4, 0, 0, 13, 0
	ba_waitforvisualfinish
	ba_createvisualtask sub_08116E70, 10, 4, 0, 13, 0, 0
	ba_waitforvisualfinish
	ba_delay 20
	ba_call BattleAnimScript_08286171
	ba_waitforvisualfinish
	ba_delay 20
	ba_createvisualtask sub_08116E70, 10, 1, 0, 6, 0, 0
	ba_waitforvisualfinish
	ba_end
Move_THUNDERBOLT:
	ba_loadspritegfx 0x2711
	ba_loadspritegfx 0x282A
	ba_loadspritegfx 0x271B
	ba_createvisualtask sub_08116E70, 10, 1, 0, 0, 6, 0
	ba_waitforvisualfinish
	ba_delay 10
	ba_createvisualtask sub_0810B02C, 5, 24, -52, 0
	ba_playsewithpan 0x0076, SOUND_PAN_TARGET
	ba_delay 7
	ba_createvisualtask sub_0810B02C, 5, -24, -52, 0
	ba_playsewithpan 0x0076, SOUND_PAN_TARGET
	ba_delay 7
	ba_createvisualtask sub_0810B02C, 5, 0, -60, 1
	ba_playsewithpan 0x0076, SOUND_PAN_TARGET
	ba_delay 9
	ba_createvisualtask sub_08116E70, 10, 4, 0, 0, 13, 0
	ba_waitforvisualfinish
	ba_createvisualtask sub_08116E70, 10, 4, 0, 13, 0, 0
	ba_waitforvisualfinish
	ba_delay 20
	ba_createsprite 0x085713C4, ANIM_TARGET, 3, 44, 0, 0, 3
	ba_createsprite 0x085713DC, ANIM_TARGET, 4, 0, 0, 32, 44, 0, 40, 0, 0x8003
	ba_createsprite 0x085713DC, ANIM_TARGET, 4, 0, 0, 32, 44, 64, 40, 1, 0x8003
	ba_createsprite 0x085713DC, ANIM_TARGET, 4, 0, 0, 32, 44, 128, 40, 0, 0x8003
	ba_createsprite 0x085713DC, ANIM_TARGET, 4, 0, 0, 32, 44, 192, 40, 2, 0x8003
	ba_createsprite 0x085713DC, ANIM_TARGET, 4, 0, 0, 16, 44, 32, 40, 0, 0x8003
	ba_createsprite 0x085713DC, ANIM_TARGET, 4, 0, 0, 16, 44, 96, 40, 1, 0x8003
	ba_createsprite 0x085713DC, ANIM_TARGET, 4, 0, 0, 16, 44, 160, 40, 0, 0x8003
	ba_createsprite 0x085713DC, ANIM_TARGET, 4, 0, 0, 16, 44, 224, 40, 2, 0x8003
	ba_playsewithpan 0x00D7, SOUND_PAN_TARGET
	ba_delay 0
	ba_createvisualtask sub_08116E70, 10, 1, 0, 2, 2, 0
	ba_delay 6
	ba_createvisualtask sub_08116E70, 10, 1, 0, 6, 6, 0
	ba_delay 6
	ba_createvisualtask sub_08116E70, 10, 1, 0, 2, 2, 0
	ba_delay 6
	ba_createvisualtask sub_08116E70, 10, 1, 0, 6, 6, 0
	ba_waitforvisualfinish
	ba_delay 20
	ba_waitplaysewithpan 0x0077, SOUND_PAN_TARGET, 19
	ba_call BattleAnimScript_08286171
	ba_waitforvisualfinish
	ba_delay 20
	ba_createvisualtask sub_08116E70, 10, 1, 0, 6, 0, 0
	ba_waitforvisualfinish
	ba_end
Move_THUNDER_WAVE:
	ba_loadspritegfx 0x2711
	ba_loadspritegfx 0x271B
	ba_loadspritegfx 0x27BD
	ba_createvisualtask sub_08116E70, 10, 1, 0, 0, 6, 0
	ba_waitforvisualfinish
	ba_delay 10
	ba_createvisualtask sub_0810B02C, 5, 0, -48, 0
	ba_playsewithpan 0x008A, SOUND_PAN_TARGET
	ba_delay 20
	ba_loopsewithpan 0x0077, SOUND_PAN_TARGET, 10, 4
	ba_createsprite sSpriteTemplate_08571424, ANIM_TARGET, 2, -16, -16
	ba_delay 4
	ba_createsprite sSpriteTemplate_08571424, ANIM_TARGET, 2, -16, 0
	ba_delay 4
	ba_createsprite sSpriteTemplate_08571424, ANIM_TARGET, 2, -16, 16
	ba_waitforvisualfinish
	ba_createvisualtask sub_08116E70, 10, 1, 0, 6, 0, 0
	ba_waitforvisualfinish
	ba_end
Move_BEAT_UP:
	ba_loadspritegfx 0x2797
	ba_loadspritegfx 0x279F
	ba_monbg ANIM_TARGET
	ba_setalpha 12, 8
	ba_choosetwoturnanim BattleAnimScript_08278BD4, BattleAnimScript_08278C45
BattleAnimScript_08278BCF: @ 0x08278BCF
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_TARGET
	ba_blendoff
	ba_end
BattleAnimScript_08278BD4: @ 0x08278BD4
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 2, -20, -20, 1, 2
	ba_createsprite 0x08571A7C, ANIM_TARGET, 3, -20, -12, 8, 1, 0
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 3, 0, 6, 1
	ba_playsewithpan 0x007B, SOUND_PAN_TARGET
	ba_delay 8
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 2, 8, 0, 1, 2
	ba_createsprite 0x08571A7C, ANIM_TARGET, 3, 8, 8, 8, 1, 0
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 3, 0, 6, 1
	ba_playsewithpan 0x007B, SOUND_PAN_TARGET
	ba_goto BattleAnimScript_08278BCF
BattleAnimScript_08278C45: @ 0x08278C45
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 2, 12, -20, 1, 2
	ba_createsprite 0x08571A7C, ANIM_TARGET, 3, 12, -12, 8, 1, 0
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 3, 0, 6, 1
	ba_playsewithpan 0x007B, SOUND_PAN_TARGET
	ba_delay 8
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 2, -12, 0, 1, 2
	ba_createsprite 0x08571A7C, ANIM_TARGET, 3, -12, 8, 8, 1, 0
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 3, 0, 6, 1
	ba_playsewithpan 0x007B, SOUND_PAN_TARGET
	ba_goto BattleAnimScript_08278BCF
Move_STOMP:
	ba_loadspritegfx 0x279F
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_TARGET
	ba_setalpha 12, 8
	ba_playsewithpan 0x0087, SOUND_PAN_TARGET
	ba_createsprite 0x08571B44, ANIM_ATTACKER, 3, 0, -32, 15
	ba_delay 19
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, 0, -8, 1, 1
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 0, 4, 9, 1
	ba_playsewithpan 0x008D, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_TARGET
	ba_blendoff
	ba_end
Move_TAIL_WHIP:
	ba_loopsewithpan 0x00A7, SOUND_PAN_ATTACKER, 24, 3
	ba_createvisualtask AnimTask_TranslateMonEllipticalRespectSide, 2, 0, 12, 4, 2, 3
	ba_waitforvisualfinish
	ba_end
Move_CUT:
	ba_loadspritegfx 0x279A
	ba_monbg ANIM_TARGET
	ba_setalpha 12, 8
	ba_playsewithpan 0x0080, SOUND_PAN_TARGET
	ba_createsprite gCuttingSliceSpriteTemplate, ANIM_ATTACKER, 2, 40, -32, 0
	ba_delay 5
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 0, 3, 10, 1
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_TARGET
	ba_blendoff
	ba_waitforvisualfinish
	ba_end
Move_HIDDEN_POWER:
	ba_loadspritegfx 0x27E9
	ba_playsewithpan 0x0098, SOUND_PAN_ATTACKER
	ba_createvisualtask AnimTask_ScaleMonAndRestore, 5, -7, -7, 11, 0, 0
	ba_waitforvisualfinish
	ba_delay 30
	ba_createvisualtask AnimTask_BlendMonInAndOut, 5, 0, 0x4FFF, 12, 5, 1
	ba_delay 4
	ba_createvisualtask AnimTask_ScaleMonAndRestore, 5, -7, -7, 11, 0, 0
	ba_playsewithpan 0x00D9, SOUND_PAN_ATTACKER
	ba_createsprite gHiddenPowerOrbAttackerSpriteTemplate, ANIM_ATTACKER, 2, 26, 0
	ba_createsprite gHiddenPowerOrbAttackerSpriteTemplate, ANIM_ATTACKER, 2, 26, 42
	ba_createsprite gHiddenPowerOrbAttackerSpriteTemplate, ANIM_ATTACKER, 2, 26, 84
	ba_createsprite gHiddenPowerOrbAttackerSpriteTemplate, ANIM_ATTACKER, 2, 26, 126
	ba_createsprite gHiddenPowerOrbAttackerSpriteTemplate, ANIM_ATTACKER, 2, 26, 168
	ba_createsprite gHiddenPowerOrbAttackerSpriteTemplate, ANIM_ATTACKER, 2, 26, 210
	ba_delay 52
	ba_setarg 0x07, 0xFFFF
	ba_playsewithpan 0x00CF, SOUND_PAN_ATTACKER
	ba_createvisualtask AnimTask_ScaleMonAndRestore, 5, -7, -7, 11, 0, 0
	ba_createsprite gHiddenPowerOrbTargetSpriteTemplate, ANIM_TARGET, 2, 0
	ba_createsprite gHiddenPowerOrbTargetSpriteTemplate, ANIM_TARGET, 2, 32
	ba_createsprite gHiddenPowerOrbTargetSpriteTemplate, ANIM_TARGET, 2, 64
	ba_createsprite gHiddenPowerOrbTargetSpriteTemplate, ANIM_TARGET, 2, 96
	ba_createsprite gHiddenPowerOrbTargetSpriteTemplate, ANIM_TARGET, 2, 128
	ba_createsprite gHiddenPowerOrbTargetSpriteTemplate, ANIM_TARGET, 2, 160
	ba_createsprite gHiddenPowerOrbTargetSpriteTemplate, ANIM_TARGET, 2, 192
	ba_createsprite gHiddenPowerOrbTargetSpriteTemplate, ANIM_TARGET, 2, 224
	ba_end
Move_REVERSAL:
	ba_loadspritegfx 0x27FC
	ba_loadspritegfx 0x279F
	ba_loadspritegfx 0x2797
	ba_playsewithpan 0x00D1, SOUND_PAN_ATTACKER
	ba_createsprite 0x08572E70, ANIM_ATTACKER, 2, 31, 3, 3, 0x7FFF, 8, 0, 0
	ba_waitforvisualfinish
	ba_delay 30
	ba_createvisualtask sub_08116254, 2, 31, 3, 2, 0, 10, 0x7FFF
	ba_delay 10
	ba_playsewithpan 0x00D9, SOUND_PAN_ATTACKER
	ba_createsprite 0x085AD3E0, ANIM_ATTACKER, 2, 26, 0
	ba_createsprite 0x085AD3E0, ANIM_ATTACKER, 2, 26, 42
	ba_createsprite 0x085AD3E0, ANIM_ATTACKER, 2, 26, 84
	ba_createsprite 0x085AD3E0, ANIM_ATTACKER, 2, 26, 126
	ba_createsprite 0x085AD3E0, ANIM_ATTACKER, 2, 26, 168
	ba_createsprite 0x085AD3E0, ANIM_ATTACKER, 2, 26, 210
	ba_waitforvisualfinish
	ba_delay 20
	ba_createsprite 0x0855A958, ANIM_ATTACKER, 2, 6, 4
	ba_delay 8
	ba_playsewithpan 0x007B, SOUND_PAN_TARGET
	ba_createsprite 0x08572E70, ANIM_ATTACKER, 2, 31, 3, 1, 0x7FFF, 8, 0, 0
	ba_createsprite 0x08571A7C, ANIM_TARGET, 4, 0, 0, 10, 1, 0
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 3, 0, 0, 1, 1
	ba_createvisualtask sub_080D5C0C, 5, 0, 1, 8, 1, 0
	ba_end
Move_PURSUIT:
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_TARGET
	ba_fadetobg BG_DARK
	ba_waitbgfadein
	ba_delay 0
	ba_setalpha 12, 8
	ba_choosetwoturnanim BattleAnimScript_08278F2B, BattleAnimScript_08278F54
BattleAnimScript_08278F22: @ 0x08278F22
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_TARGET
	ba_blendoff
	ba_delay 0
	ba_restorebg
	ba_waitbgfadein
	ba_end
BattleAnimScript_08278F2B: @ 0x08278F2B
	ba_playsewithpan 0x008B, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 3, 0, 0, 1, 2
	ba_createvisualtask sub_080D5C0C, 5, 0, 1, 6, 1, 0
	ba_goto BattleAnimScript_08278F22
BattleAnimScript_08278F54: @ 0x08278F54
	ba_playsewithpan 0x008B, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 3, 0, 0, 1, 1
	ba_createvisualtask sub_080D5C0C, 5, 0, 1, 6, 1, 0
	ba_goto BattleAnimScript_08278F22
Move_SPIKE_CANNON:
	ba_loadspritegfx 0x27B1
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_TARGET
	ba_monbgprio_28 ANIM_TARGET
	ba_setalpha 12, 8
	ba_createvisualtask AnimTask_WindUpLunge, 5, 0, -4, 0, 4, 6, 8, 4
	ba_waitforvisualfinish
	ba_loopsewithpan 0x00A0, SOUND_PAN_ATTACKER, 5, 3
	ba_createsprite 0x0855A988, ANIM_ATTACKER, 2, 0, 0, 5
	ba_createsprite 0x08572628, ANIM_ATTACKER, 2, 10, -8, -8, -8, 20
	ba_createsprite 0x08572628, ANIM_ATTACKER, 2, 18, 0, 0, 0, 20
	ba_createsprite 0x08572628, ANIM_ATTACKER, 2, 26, 8, 8, 8, 20
	ba_waitforvisualfinish
	ba_createsprite gBattleAnimSpriteTemplate_BasicHitFlipped, ANIM_ATTACKER, 3, -8, -8, 1, 2
	ba_createsprite gBattleAnimSpriteTemplate_BasicHitFlipped, ANIM_ATTACKER, 3, 0, 0, 1, 2
	ba_createsprite gBattleAnimSpriteTemplate_BasicHitFlipped, ANIM_ATTACKER, 3, 8, 8, 1, 2
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 3, 0, 7, 1
	ba_loopsewithpan 0x00A6, SOUND_PAN_TARGET, 5, 3
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_TARGET
	ba_blendoff
	ba_end
Move_SWORDS_DANCE:
	ba_loadspritegfx 0x2715
	ba_monbg ANIM_ATTACKER
	ba_setalpha 12, 8
	ba_playsewithpan 0x00BF, SOUND_PAN_ATTACKER
	ba_createvisualtask AnimTask_TranslateMonEllipticalRespectSide, 2, 0, 16, 6, 1, 4
	ba_createsprite gSwordsDanceBladeSpriteTemplate, ANIM_ATTACKER, 2, 0, 0
	ba_delay 22
	ba_createvisualtask sub_081165E4, 2, 0x2715, 2, 2, 0x7FF2, 16, 0, 0
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_ATTACKER
	ba_blendoff
	ba_delay 1
	ba_end
Move_PSYCH_UP:
	ba_loadspritegfx 0x27D4
	ba_monbg ANIM_ATK_PARTNER
	ba_createvisualtask sub_0811635C, 2, 1, 2, 6, 1, 11, 0
	ba_setalpha 12, 8
	ba_loopsewithpan 0x00C8, SOUND_PAN_ATTACKER, 5, 10
	ba_createsprite 0x0857212C, ANIM_ATTACKER, 2, 0, 0, 0, 0
	ba_createvisualtask AnimTask_SwayMon, 5, 0, 5, 0x0A00, 8, 0
	ba_delay 127
	ba_delay 4
	ba_playsewithpan 0x00BD, SOUND_PAN_ATTACKER
	ba_createvisualtask AnimTask_ScaleMonAndRestore, 5, -5, -5, 10, 0, 1
	ba_createvisualtask sub_08116E70, 9, 2, 2, 10, 0, 1023
	ba_delay 30
	ba_clearmonbg ANIM_ATK_PARTNER
	ba_blendoff
	ba_waitforvisualfinish
	ba_end
Move_DIZZY_PUNCH:
	ba_loadspritegfx 0x2759
	ba_loadspritegfx 0x279F
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_TARGET
	ba_setalpha 12, 8
	ba_call BattleAnimScript_08279203
	ba_createsprite 0x08571A7C, ANIM_TARGET, 5, 16, 8, 20, 1, 0
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 4, 16, 0, 1, 1
	ba_playsewithpan 0x008B, SOUND_PAN_TARGET
	ba_createsprite 0x08571B5C, ANIM_TARGET, 3, 16, 8, 160, -32
	ba_createsprite 0x08571B5C, ANIM_TARGET, 3, 16, 8, -256, -40
	ba_createsprite 0x08571B5C, ANIM_TARGET, 3, 16, 8, 128, -16
	ba_createsprite 0x08571B5C, ANIM_TARGET, 3, 16, 8, 416, -38
	ba_createsprite 0x08571B5C, ANIM_TARGET, 3, 16, 8, -128, -22
	ba_createsprite 0x08571B5C, ANIM_TARGET, 3, 16, 8, -384, -31
	ba_delay 10
	ba_call BattleAnimScript_08279203
	ba_createsprite 0x08571A7C, ANIM_TARGET, 5, -16, -8, 20, 1, 0
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 4, -16, -16, 1, 1
	ba_playsewithpan 0x007B, SOUND_PAN_TARGET
	ba_createsprite 0x08571B5C, ANIM_TARGET, 3, -16, -8, 160, -32
	ba_createsprite 0x08571B5C, ANIM_TARGET, 3, -16, -8, -256, -40
	ba_createsprite 0x08571B5C, ANIM_TARGET, 3, -16, -8, 128, -16
	ba_createsprite 0x08571B5C, ANIM_TARGET, 3, -16, -8, 416, -38
	ba_createsprite 0x08571B5C, ANIM_TARGET, 3, -16, -8, -128, -22
	ba_createsprite 0x08571B5C, ANIM_TARGET, 3, -16, -8, -384, -31
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_TARGET
	ba_blendoff
	ba_end
BattleAnimScript_08279203: @ 0x08279203
	ba_createsprite 0x0855A958, ANIM_ATTACKER, 2, 6, 4
	ba_delay 6
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 3, 0, 7, 1
	ba_return
Move_FIRE_SPIN:
	ba_loadspritegfx 0x272D
	ba_playsewithpan 0x0096, SOUND_PAN_TARGET
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 0, 2, 47, 1
	ba_call BattleAnimScript_0827924B
	ba_call BattleAnimScript_0827924B
	ba_call BattleAnimScript_0827924B
	ba_waitforvisualfinish
	ba_end
BattleAnimScript_0827924B: @ 0x0827924B
	ba_createsprite 0x0857276C, ANIM_TARGET, 2, 0, 28, 528, 30, 13, 50, 1
	ba_delay 2
	ba_createsprite 0x0857276C, ANIM_TARGET, 2, 0, 32, 480, 20, 16, -46, 1
	ba_delay 2
	ba_createsprite 0x0857276C, ANIM_TARGET, 2, 0, 33, 576, 20, 8, 42, 1
	ba_delay 2
	ba_createsprite 0x0857276C, ANIM_TARGET, 2, 0, 31, 400, 25, 11, -42, 1
	ba_delay 2
	ba_createsprite 0x0857276C, ANIM_TARGET, 2, 0, 28, 512, 25, 16, 46, 1
	ba_delay 2
	ba_createsprite 0x0857276C, ANIM_TARGET, 2, 0, 33, 464, 30, 15, -50, 1
	ba_delay 2
	ba_return
Move_FURY_CUTTER:
	ba_loadspritegfx 0x279A
	ba_monbg ANIM_TARGET
	ba_setalpha 12, 8
	ba_playsewithpan 0x0088, SOUND_PAN_TARGET
	ba_createvisualtask AnimTask_IsFuryCutterHitRight, 2
	ba_jumpargeq 0x07, 0, BattleAnimScript_08279333
	ba_goto BattleAnimScript_08279345
BattleAnimScript_082792F6: @ 0x082792F6
	ba_createvisualtask AnimTask_GetFuryCutterHitCount, 2
	ba_jumpargeq 0x07, 1, BattleAnimScript_0827931A
	ba_jumpargeq 0x07, 2, BattleAnimScript_08279357
	ba_jumpargeq 0x07, 3, BattleAnimScript_08279371
	ba_goto BattleAnimScript_0827938B
BattleAnimScript_0827931A: @ 0x0827931A
	ba_delay 5
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 0, 3, 10, 1
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_TARGET
	ba_blendoff
	ba_waitforvisualfinish
	ba_end
BattleAnimScript_08279333: @ 0x08279333
	ba_createsprite gCuttingSliceSpriteTemplate, ANIM_ATTACKER, 2, 40, -32, 0
	ba_goto BattleAnimScript_082792F6
BattleAnimScript_08279345: @ 0x08279345
	ba_createsprite gCuttingSliceSpriteTemplate, ANIM_ATTACKER, 2, 40, -32, 1
	ba_goto BattleAnimScript_082792F6
BattleAnimScript_08279357: @ 0x08279357
	ba_createsprite 0x08572E70, ANIM_ATTACKER, 2, 31, 3, 1, 0x2909, 4, 0, 0
	ba_goto BattleAnimScript_0827931A
BattleAnimScript_08279371: @ 0x08279371
	ba_createsprite 0x08572E70, ANIM_ATTACKER, 2, 31, 3, 3, 0x2909, 4, 0, 0
	ba_goto BattleAnimScript_0827931A
BattleAnimScript_0827938B: @ 0x0827938B
	ba_createsprite 0x08572E70, ANIM_ATTACKER, 2, 31, 3, 3, 0x2909, 4, 0, 0
	ba_goto BattleAnimScript_0827931A
Move_SELF_DESTRUCT:
	ba_loadspritegfx 0x27D6
	ba_createvisualtask sub_08116E70, 10, 2, 1, 0, 9, 31
	ba_createvisualtask AnimTask_ShakeMon2, 5, 4, 6, 0, 38, 1
	ba_createvisualtask AnimTask_ShakeMon2, 5, 5, 6, 0, 38, 1
	ba_createvisualtask AnimTask_ShakeMon2, 5, 6, 6, 0, 38, 1
	ba_createvisualtask AnimTask_ShakeMon2, 5, 7, 6, 0, 38, 1
	ba_createvisualtask AnimTask_ShakeMon2, 5, 8, 6, 0, 38, 1
	ba_call BattleAnimScript_0827942B
	ba_call BattleAnimScript_0827942B
	ba_waitforvisualfinish
	ba_createvisualtask sub_08116E70, 10, 2, 1, 9, 0, 31
	ba_end
BattleAnimScript_0827942B: @ 0x0827942B
	ba_playsewithpan 0x00B1, SOUND_PAN_ATTACKER
	ba_createsprite gExplosionSpriteTemplate, ANIM_ATTACKER, 3, 0, 0, 0, 1
	ba_delay 6
	ba_playsewithpan 0x00B1, SOUND_PAN_ATTACKER
	ba_createsprite gExplosionSpriteTemplate, ANIM_ATTACKER, 3, 24, -24, 0, 1
	ba_delay 6
	ba_playsewithpan 0x00B1, SOUND_PAN_ATTACKER
	ba_createsprite gExplosionSpriteTemplate, ANIM_ATTACKER, 3, -16, 16, 0, 1
	ba_delay 6
	ba_playsewithpan 0x00B1, SOUND_PAN_ATTACKER
	ba_createsprite gExplosionSpriteTemplate, ANIM_ATTACKER, 3, -24, -12, 0, 1
	ba_delay 6
	ba_playsewithpan 0x00B1, SOUND_PAN_ATTACKER
	ba_createsprite gExplosionSpriteTemplate, ANIM_ATTACKER, 3, 16, 16, 0, 1
	ba_delay 6
	ba_return
Move_SLAM:
BattleAnimScript_08279495: @ 0x08279495
	ba_loadspritegfx 0x2748
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_TARGET
	ba_setalpha 12, 8
	ba_playsewithpan 0x008B, SOUND_PAN_ATTACKER
	ba_createsprite 0x0855A9A0, ANIM_ATTACKER, 2, 0, 20, 3, 0, 4
	ba_delay 1
	ba_createsprite 0x0856E4B4, ANIM_ATTACKER, 2, 0, 0
	ba_delay 3
	ba_playsewithpan 0x008D, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 3, 0, 0, 1, 1
	ba_createsprite 0x0855A9A0, ANIM_ATTACKER, 2, 1, -12, 10, 0, 3
	ba_createsprite 0x0855A988, ANIM_ATTACKER, 2, 0, 0, 5
	ba_delay 3
	ba_createvisualtask AnimTask_ShakeMonInPlace, 2, 1, 0, 3, 6, 1
	ba_waitforvisualfinish
	ba_delay 5
	ba_createsprite 0x0855A988, ANIM_ATTACKER, 2, 1, 0, 6
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_TARGET
	ba_blendoff
	ba_end
Move_VINE_WHIP:
	ba_loadspritegfx 0x282F
	ba_playsewithpan 0x008F, SOUND_PAN_ATTACKER
	ba_createsprite 0x0855A958, ANIM_ATTACKER, 2, 4, 6
	ba_delay 6
	ba_playsewithpan 0x009B, SOUND_PAN_TARGET
	ba_createsprite 0x0856E4CC, ANIM_TARGET, 2, 0, 0
	ba_delay 6
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 2, 0, 6, 1
	ba_end
Move_DRILL_PECK:
	ba_loadspritegfx 0x2797
	ba_loadspritegfx 0x27B2
	ba_createsprite gPhysicalStrikeMovementSpriteTemplate, ANIM_ATTACKER, 2, 0
	ba_playsewithpan 0x00A2, SOUND_PAN_ATTACKER
	ba_waitforvisualfinish
	ba_delay 2
	ba_createsprite gPhysicalStrikeMovementSpriteTemplate, ANIM_ATTACKER, 2, 1
	ba_delay 2
	ba_loopsewithpan 0x00A6, SOUND_PAN_TARGET, 4, 8
	ba_createvisualtask sub_0810F3D8, 5
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 4, 0, 18, 1
	ba_waitforvisualfinish
	ba_createsprite gPhysicalStrikeMovementSpriteTemplate, ANIM_ATTACKER, 2, 2
	ba_waitforvisualfinish
	ba_createsprite 0x0855A988, ANIM_ATTACKER, 2, 0, 0, 6
	ba_waitforvisualfinish
	ba_end
Move_WATERFALL:
BattleAnimScript_082795AD: @ 0x082795AD
	ba_loadspritegfx 0x27A4
	ba_loadspritegfx 0x27AB
	ba_loadspritegfx 0x279D
	ba_monbg ANIM_DEF_PARTNER
	ba_setalpha 12, 8
	ba_createvisualtask AnimTask_ShakeMon, 5, 0, 0, 2, 23, 1
	ba_delay 5
	ba_playsewithpan 0x008E, SOUND_PAN_ATTACKER
	ba_createsprite 0x08570E1C, ANIM_ATTACKER, 2, 10, 10, 25, 0
	ba_delay 4
	ba_playsewithpan 0x008E, SOUND_PAN_ATTACKER
	ba_createsprite 0x08570E1C, ANIM_ATTACKER, 2, -15, 0, 25, 0
	ba_delay 4
	ba_playsewithpan 0x008E, SOUND_PAN_ATTACKER
	ba_createsprite 0x08570E1C, ANIM_ATTACKER, 2, 20, 10, 25, 0
	ba_delay 4
	ba_playsewithpan 0x008E, SOUND_PAN_ATTACKER
	ba_createsprite 0x08570E1C, ANIM_ATTACKER, 2, 0, -10, 25, 0
	ba_delay 4
	ba_playsewithpan 0x008E, SOUND_PAN_ATTACKER
	ba_createsprite 0x08570E1C, ANIM_ATTACKER, 2, -10, 15, 25, 0
	ba_delay 4
	ba_playsewithpan 0x008E, SOUND_PAN_ATTACKER
	ba_createsprite 0x08570E1C, ANIM_ATTACKER, 2, 25, 20, 25, 0
	ba_delay 4
	ba_playsewithpan 0x008E, SOUND_PAN_ATTACKER
	ba_createsprite 0x08570E1C, ANIM_ATTACKER, 2, -20, 20, 25, 0
	ba_delay 4
	ba_playsewithpan 0x008E, SOUND_PAN_ATTACKER
	ba_createsprite 0x08570E1C, ANIM_ATTACKER, 2, 12, 0, 25, 0
	ba_waitforvisualfinish
	ba_delay 10
	ba_createsprite 0x0855A958, ANIM_ATTACKER, 2, 6, 5
	ba_delay 6
	ba_call BattleAnimScript_0827968E
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
BattleAnimScript_0827968E: @ 0x0827968E
	ba_playsewithpan 0x00D8, SOUND_PAN_TARGET
	ba_createvisualtask AnimTask_ShakeMon2, 5, 1, 4, 0, 17, 1
	ba_createsprite gBattleAnimSpriteTemplate_WaterHit, ANIM_ATTACKER, 3, 0, 20, 1, 1
	ba_createsprite 0x08570E34, ANIM_ATTACKER, 4, 0, 20
	ba_createsprite 0x08570E34, ANIM_ATTACKER, 4, 0, 20
	ba_delay 2
	ba_createsprite gBattleAnimSpriteTemplate_WaterHit, ANIM_ATTACKER, 3, 0, 15, 1, 1
	ba_createsprite 0x08570E34, ANIM_ATTACKER, 4, 0, 15
	ba_createsprite 0x08570E34, ANIM_ATTACKER, 4, 0, 15
	ba_delay 2
	ba_createsprite gBattleAnimSpriteTemplate_WaterHit, ANIM_ATTACKER, 3, 0, 10, 1, 1
	ba_createsprite 0x08570E34, ANIM_ATTACKER, 4, 0, 10
	ba_createsprite 0x08570E34, ANIM_ATTACKER, 4, 0, 10
	ba_delay 2
	ba_createsprite gBattleAnimSpriteTemplate_WaterHit, ANIM_ATTACKER, 3, 0, 5, 1, 1
	ba_createsprite 0x08570E34, ANIM_ATTACKER, 4, 0, 5
	ba_createsprite 0x08570E34, ANIM_ATTACKER, 4, 0, 5
	ba_delay 2
	ba_createsprite gBattleAnimSpriteTemplate_WaterHit, ANIM_ATTACKER, 3, 0, 0, 1, 1
	ba_createsprite 0x08570E34, ANIM_ATTACKER, 4, 0, 0
	ba_createsprite 0x08570E34, ANIM_ATTACKER, 4, 0, 0
	ba_delay 2
	ba_createsprite gBattleAnimSpriteTemplate_WaterHit, ANIM_ATTACKER, 3, 0, -5, 1, 1
	ba_createsprite 0x08570E34, ANIM_ATTACKER, 4, 0, -5
	ba_createsprite 0x08570E34, ANIM_ATTACKER, 4, 0, -5
	ba_delay 2
	ba_createsprite gBattleAnimSpriteTemplate_WaterHit, ANIM_ATTACKER, 3, 0, -10, 1, 1
	ba_createsprite 0x08570E34, ANIM_ATTACKER, 4, 0, -10
	ba_createsprite 0x08570E34, ANIM_ATTACKER, 4, 0, -10
	ba_delay 2
	ba_createsprite gBattleAnimSpriteTemplate_WaterHit, ANIM_ATTACKER, 3, 0, -15, 1, 1
	ba_createsprite 0x08570E34, ANIM_ATTACKER, 4, 0, -15
	ba_createsprite 0x08570E34, ANIM_ATTACKER, 4, 0, -15
	ba_delay 2
	ba_createsprite gBattleAnimSpriteTemplate_WaterHit, ANIM_ATTACKER, 3, 0, -20, 1, 1
	ba_createsprite 0x08570E34, ANIM_ATTACKER, 4, 0, -20
	ba_createsprite 0x08570E34, ANIM_ATTACKER, 4, 0, -20
	ba_return
Move_EXPLOSION:
	ba_loadspritegfx 0x27D6
	ba_createsprite 0x08572E70, ANIM_ATTACKER, 2, 1, 8, 9, 0x211A, 8, 0, 8
	ba_createvisualtask AnimTask_ShakeMon2, 5, 4, 8, 0, 40, 1
	ba_createvisualtask AnimTask_ShakeMon2, 5, 5, 8, 0, 40, 1
	ba_createvisualtask AnimTask_ShakeMon2, 5, 6, 8, 0, 40, 1
	ba_createvisualtask AnimTask_ShakeMon2, 5, 7, 8, 0, 40, 1
	ba_createvisualtask AnimTask_ShakeMon2, 5, 8, 8, 0, 40, 1
	ba_call BattleAnimScript_0827989E
	ba_call BattleAnimScript_0827989E
	ba_waitforvisualfinish
	ba_createvisualtask sub_08116E70, 10, 1, 1, 16, 16, 0x7FFF
	ba_delay 50
	ba_createvisualtask sub_08116E70, 10, 1, 3, 16, 0, 0x7FFF
	ba_end
BattleAnimScript_0827989E: @ 0x0827989E
	ba_playsewithpan 0x00B2, SOUND_PAN_ATTACKER
	ba_createsprite gExplosionSpriteTemplate, ANIM_ATTACKER, 3, 0, 0, 0, 1
	ba_delay 6
	ba_playsewithpan 0x00B2, SOUND_PAN_ATTACKER
	ba_createsprite gExplosionSpriteTemplate, ANIM_ATTACKER, 3, 24, -24, 0, 1
	ba_delay 6
	ba_playsewithpan 0x00B2, SOUND_PAN_ATTACKER
	ba_createsprite gExplosionSpriteTemplate, ANIM_ATTACKER, 3, -16, 16, 0, 1
	ba_delay 6
	ba_playsewithpan 0x00B2, SOUND_PAN_ATTACKER
	ba_createsprite gExplosionSpriteTemplate, ANIM_ATTACKER, 3, -24, -12, 0, 1
	ba_delay 6
	ba_playsewithpan 0x00B2, SOUND_PAN_ATTACKER
	ba_createsprite gExplosionSpriteTemplate, ANIM_ATTACKER, 3, 16, 16, 0, 1
	ba_delay 6
	ba_return
Move_DEFENSE_CURL:
	ba_loadspritegfx 0x27FA
	ba_loopsewithpan 0x00DC, SOUND_PAN_ATTACKER, 18, 3
	ba_createvisualtask AnimTask_SetGreyscaleOrOriginalPal, 5, 0, 0
	ba_createvisualtask sub_0815B274, 5
	ba_waitforvisualfinish
	ba_createsprite 0x085AD140, ANIM_ATTACKER, 2, 0, 6, 0, 1
	ba_waitforvisualfinish
	ba_createvisualtask AnimTask_SetGreyscaleOrOriginalPal, 5, 0, 1
	ba_waitforvisualfinish
	ba_end
Move_PROTECT:
	ba_loadspritegfx 0x2828
	ba_monbg ANIM_ATK_PARTNER
	ba_monbgprio_28 ANIM_ATTACKER
	ba_waitplaysewithpan 0x00CF, SOUND_PAN_ATTACKER, 16
	ba_createsprite gProtectShieldSpriteTemplate, ANIM_ATTACKER, 2, 24, 0, 90
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_ATK_PARTNER
	ba_end
Move_DETECT:
	ba_loadspritegfx 0x2757
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 2, 0, 9, 0
	ba_waitforvisualfinish
	ba_createvisualtask sub_08116E70, 10, 2, 1, 0, 9, 0x7FFF
	ba_delay 18
	ba_playsewithpan 0x00D1, SOUND_PAN_ATTACKER
	ba_createsprite 0x085175C8, ANIM_ATTACKER, 13, 20, -20
	ba_waitforvisualfinish
	ba_delay 10
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 2, 9, 0, 0
	ba_createvisualtask sub_08116E70, 10, 2, 2, 9, 0, 0x7FFF
	ba_waitforvisualfinish
	ba_end
Move_FRUSTRATION:
	ba_loadspritegfx 0x2797
	ba_loadspritegfx 0x2767
	ba_monbg ANIM_DEF_PARTNER
	ba_setalpha 12, 8
	ba_createvisualtask AnimTask_GetFrustrationPowerLevel, 1
	ba_jumpargeq 0x07, 0, BattleAnimScript_082799F0
	ba_jumpargeq 0x07, 1, BattleAnimScript_08279AF6
	ba_jumpargeq 0x07, 2, BattleAnimScript_08279BC3
	ba_goto BattleAnimScript_08279C3F
BattleAnimScript_082799EB: @ 0x082799EB
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
BattleAnimScript_082799F0: @ 0x082799F0
	ba_playsewithpan 0x00AB, SOUND_PAN_ATTACKER
	ba_createvisualtask AnimTask_ShakeMon2, 5, 0, 1, 0, 15, 1
	ba_createvisualtask sub_08116E70, 10, 2, 3, 0, 9, 31
	ba_waitforvisualfinish
	ba_delay 20
	ba_playsewithpan 0x00C2, SOUND_PAN_ATTACKER
	ba_createsprite gAngerMarkSpriteTemplate, ANIM_ATTACKER, 2, 0, 20, -28
	ba_waitforvisualfinish
	ba_playsewithpan 0x00C2, SOUND_PAN_ATTACKER
	ba_createsprite gAngerMarkSpriteTemplate, ANIM_ATTACKER, 2, 0, 20, -28
	ba_waitforvisualfinish
	ba_delay 10
	ba_createvisualtask AnimTask_SwayMon, 5, 0, 16, 0x1800, 8, 0
	ba_delay 5
	ba_createvisualtask AnimTask_ShakeMon2, 5, 1, 4, 0, 30, 1
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 3, 0, 0, 1, 0
	ba_playsewithpan 0x008B, SOUND_PAN_TARGET
	ba_delay 5
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 3, 24, 8, 1, 0
	ba_playsewithpan 0x008B, SOUND_PAN_TARGET
	ba_delay 5
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 3, -24, -16, 1, 0
	ba_playsewithpan 0x008B, SOUND_PAN_TARGET
	ba_delay 5
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 3, 8, 4, 1, 0
	ba_playsewithpan 0x008B, SOUND_PAN_TARGET
	ba_delay 5
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 3, -16, 19, 1, 0
	ba_playsewithpan 0x008B, SOUND_PAN_TARGET
	ba_delay 5
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 3, 18, -18, 1, 0
	ba_playsewithpan 0x008B, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_createvisualtask sub_08116E70, 10, 2, 3, 9, 0, 31
	ba_goto BattleAnimScript_082799EB
BattleAnimScript_08279AF6: @ 0x08279AF6
	ba_playsewithpan 0x00AB, SOUND_PAN_ATTACKER
	ba_createvisualtask AnimTask_ShakeMon2, 5, 0, 1, 0, 15, 1
	ba_createvisualtask sub_08116E70, 10, 2, 3, 0, 9, 31
	ba_waitforvisualfinish
	ba_delay 20
	ba_playsewithpan 0x00C2, SOUND_PAN_ATTACKER
	ba_createsprite gAngerMarkSpriteTemplate, ANIM_ATTACKER, 2, 0, 20, -28
	ba_waitforvisualfinish
	ba_delay 5
	ba_createvisualtask sub_0815C2E4, 5
	ba_delay 7
	ba_playsewithpan 0x008B, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 3, 0, 8, 1, 1
	ba_createvisualtask AnimTask_ShakeMon2, 5, 1, 4, 0, 6, 1
	ba_delay 14
	ba_playsewithpan 0x008B, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 3, 12, -6, 1, 1
	ba_createvisualtask AnimTask_ShakeMon2, 5, 1, 4, 0, 6, 1
	ba_delay 14
	ba_playsewithpan 0x008B, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 3, -12, -6, 1, 1
	ba_createvisualtask AnimTask_ShakeMon2, 5, 1, 4, 0, 6, 1
	ba_waitforvisualfinish
	ba_createvisualtask sub_08116E70, 10, 2, 3, 9, 0, 31
	ba_goto BattleAnimScript_082799EB
BattleAnimScript_08279BC3: @ 0x08279BC3
	ba_playsewithpan 0x00C2, SOUND_PAN_ATTACKER
	ba_createsprite gAngerMarkSpriteTemplate, ANIM_ATTACKER, 2, 0, 20, -28
	ba_waitforvisualfinish
	ba_delay 5
	ba_createsprite 0x0855A958, ANIM_ATTACKER, 2, 4, 4
	ba_delay 6
	ba_playsewithpan 0x008B, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, 10, 4, 1, 1
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 3, 0, 6, 1
	ba_waitforvisualfinish
	ba_createsprite 0x0855A958, ANIM_ATTACKER, 2, 4, 4
	ba_delay 6
	ba_playsewithpan 0x008B, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, -10, -4, 1, 2
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 3, 0, 6, 1
	ba_goto BattleAnimScript_082799EB
BattleAnimScript_08279C3F: @ 0x08279C3F
	ba_createsprite 0x085AD2D8, ANIM_ATTACKER, 2, 20, -28
	ba_waitforvisualfinish
	ba_delay 10
	ba_createsprite 0x0855A958, ANIM_ATTACKER, 2, 10, 2
	ba_delay 12
	ba_playsewithpan 0x008B, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, 0, 0, 1, 2
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 1, 0, 6, 1
	ba_goto BattleAnimScript_082799EB
Move_SAFEGUARD:
	ba_loadspritegfx 0x2804
	ba_monbg ANIM_ATK_PARTNER
	ba_setalpha 8, 8
	ba_playsewithpan 0x00E1, SOUND_PAN_ATTACKER
	ba_createsprite gSafeguardSpriteTemplate, ANIM_ATTACKER, 2
	ba_delay 4
	ba_createsprite gSafeguardSpriteTemplate, ANIM_ATTACKER, 2
	ba_delay 4
	ba_createsprite gSafeguardSpriteTemplate, ANIM_ATTACKER, 2
	ba_waitforvisualfinish
	ba_playsewithpan 0x0066, SOUND_PAN_ATTACKER
	ba_createvisualtask sub_08116254, 2, 10, 0, 2, 0, 10, 0x7FFF
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_ATK_PARTNER
	ba_blendoff
	ba_end
Move_PAIN_SPLIT:
	ba_loadspritegfx 0x27FF
	ba_createsprite 0x085AD398, ANIM_ATTACKER, 2, -8, -42, 0
	ba_createsprite 0x085AD398, ANIM_TARGET, 2, -8, -42, 1
	ba_delay 10
	ba_playsewithpan 0x00C2, 0x00
	ba_createvisualtask AnimTask_PainSplitMovement, 2, 0, 0
	ba_createvisualtask AnimTask_PainSplitMovement, 2, 1, 0
	ba_waitforvisualfinish
	ba_createsprite 0x085AD398, ANIM_ATTACKER, 2, -24, -42, 0
	ba_createsprite 0x085AD398, ANIM_TARGET, 2, -24, -42, 1
	ba_delay 10
	ba_playsewithpan 0x00C2, 0x00
	ba_createvisualtask AnimTask_PainSplitMovement, 2, 0, 1
	ba_createvisualtask AnimTask_PainSplitMovement, 2, 1, 1
	ba_waitforvisualfinish
	ba_createsprite 0x085AD398, ANIM_ATTACKER, 2, 8, -42, 0
	ba_createsprite 0x085AD398, ANIM_TARGET, 2, 8, -42, 1
	ba_delay 10
	ba_playsewithpan 0x00C2, 0x00
	ba_createvisualtask AnimTask_PainSplitMovement, 2, 0, 2
	ba_createvisualtask AnimTask_PainSplitMovement, 2, 1, 2
	ba_end
Move_VICE_GRIP:
	ba_loadspritegfx 0x279A
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_DEF_PARTNER
	ba_setalpha 12, 8
	ba_playsewithpan 0x009C, SOUND_PAN_TARGET
	ba_createsprite gViceGripPincerSpriteTemplate, ANIM_ATTACKER, 2, 0
	ba_createsprite gViceGripPincerSpriteTemplate, ANIM_ATTACKER, 2, 1
	ba_delay 9
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 1, 0, 0, 1, 2
	ba_createvisualtask AnimTask_ShakeMon2, 5, 1, 2, 0, 5, 1
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
Move_GUILLOTINE:
	ba_loadspritegfx 0x279A
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_DEF_PARTNER
	ba_setalpha 12, 8
	ba_fadetobgfromset 12, 13, 14
	ba_waitbgfadein
	ba_playsewithpan 0x009C, SOUND_PAN_TARGET
	ba_createsprite gGuillotinePincerSpriteTemplate, ANIM_ATTACKER, 2, 0
	ba_createsprite gGuillotinePincerSpriteTemplate, ANIM_ATTACKER, 2, 1
	ba_createvisualtask sub_08116E70, 10, 4, 2, 0, 16, 0
	ba_delay 9
	ba_createvisualtask AnimTask_ShakeMon2, 5, 1, 2, 0, 23, 1
	ba_delay 46
	ba_createvisualtask AnimTask_ShakeMon2, 5, 1, 4, 0, 8, 1
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 3, 0, 0, 1, 0
	ba_createsprite 0x08572E70, ANIM_ATTACKER, 2, 31, 3, 1, 0, 8, 0, 0
	ba_playsewithpan 0x0088, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_restorebg
	ba_waitbgfadein
	ba_end
Move_PAY_DAY:
	ba_loadspritegfx 0x2774
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_TARGET
	ba_monbgprio_28 ANIM_TARGET
	ba_setalpha 12, 8
	ba_playsewithpan 0x00A0, SOUND_PAN_ATTACKER
	ba_createsprite 0x0856F0BC, ANIM_ATTACKER, 2, 20, 0, 0, 0, 1152
	ba_waitforvisualfinish
	ba_playsewithpan 0x00AE, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 1, 0, 0, 1, 2
	ba_createsprite 0x0856F0D4, ANIM_ATTACKER, 2
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 1, 0, 6, 1
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_TARGET
	ba_blendoff
	ba_end
Move_OUTRAGE:
	ba_loadspritegfx 0x272D
	ba_loopsewithpan 0x00AB, SOUND_PAN_ATTACKER, 8, 3
	ba_createvisualtask sub_08116254, 2, 7, 2, 5, 3, 8, 430
	ba_createvisualtask AnimTask_TranslateMonEllipticalRespectSide, 2, 0, 12, 6, 5, 4
	ba_delay 0
	ba_createsprite 0x08572A60, ANIM_TARGET, 2, 0, 0, 30, 1280, 0, 3
	ba_delay 0
	ba_createsprite 0x08572A60, ANIM_TARGET, 2, 0, 0, 30, -1280, 0, 3
	ba_delay 0
	ba_createsprite 0x08572A60, ANIM_TARGET, 2, 0, 0, 30, 0, 1280, 3
	ba_delay 0
	ba_createsprite 0x08572A60, ANIM_TARGET, 2, 0, 0, 30, 0, -1280, 3
	ba_delay 0
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 2, 0, 40, 1
	ba_createsprite 0x08572A60, ANIM_TARGET, 2, 0, 0, 30, 1280, 768, 3
	ba_delay 0
	ba_createsprite 0x08572A60, ANIM_TARGET, 2, 0, 0, 30, -1280, 768, 3
	ba_delay 0
	ba_createsprite 0x08572A60, ANIM_TARGET, 2, 0, 0, 30, 1280, -768, 3
	ba_delay 0
	ba_createsprite 0x08572A60, ANIM_TARGET, 2, 0, 0, 30, -1280, -768, 3
	ba_delay 0
	ba_createsprite 0x08572A60, ANIM_TARGET, 2, 0, 0, 30, 1280, 0, 3
	ba_call BattleAnimScript_08279F9B
	ba_call BattleAnimScript_08279F9B
	ba_waitforvisualfinish
	ba_end
BattleAnimScript_08279F9B: @ 0x08279F9B
	ba_delay 3
	ba_createsprite 0x08572A60, ANIM_TARGET, 2, 0, 0, 30, -1280, 0, 3
	ba_delay 0
	ba_createsprite 0x08572A60, ANIM_TARGET, 2, 0, 0, 30, 0, 1280, 3
	ba_delay 0
	ba_createsprite 0x08572A60, ANIM_TARGET, 2, 0, 0, 30, 0, -1280, 3
	ba_delay 0
	ba_createsprite 0x08572A60, ANIM_TARGET, 2, 0, 0, 30, 1280, 768, 3
	ba_delay 0
	ba_createsprite 0x08572A60, ANIM_TARGET, 2, 0, 0, 30, -1280, 768, 3
	ba_delay 0
	ba_createsprite 0x08572A60, ANIM_TARGET, 2, 0, 0, 30, 1280, -768, 3
	ba_delay 0
	ba_createsprite 0x08572A60, ANIM_TARGET, 2, 0, 0, 30, -1280, -768, 3
	ba_return
Move_SPARK:
	ba_loadspritegfx 0x2797
	ba_loadspritegfx 0x271B
	ba_delay 0
	ba_createvisualtask sub_08116254, 2, 3, -31, 1, 5, 5, 0x5BFF
	ba_playsewithpan 0x0077, SOUND_PAN_ATTACKER
	ba_createsprite 0x08571330, ANIM_ATTACKER, 0, 32, 24, 190, 12, 0, 1, 0
	ba_delay 0
	ba_createsprite 0x08571330, ANIM_ATTACKER, 0, 80, 24, 22, 12, 0, 1, 0
	ba_createsprite 0x08571330, ANIM_ATTACKER, 0, 156, 24, 121, 13, 0, 1, 1
	ba_delay 0
	ba_createvisualtask sub_08116254, 2, 3, -31, 1, 0, 0, 0x5BFF
	ba_delay 10
	ba_createvisualtask sub_08116254, 2, 3, -31, 1, 5, 5, 0x5BFF
	ba_playsewithpan 0x0077, SOUND_PAN_ATTACKER
	ba_createsprite 0x08571330, ANIM_ATTACKER, 0, 100, 24, 60, 10, 0, 1, 0
	ba_createsprite 0x08571330, ANIM_ATTACKER, 0, 170, 24, 42, 11, 0, 1, 1
	ba_delay 0
	ba_createsprite 0x08571330, ANIM_ATTACKER, 0, 238, 24, 165, 10, 0, 1, 1
	ba_delay 0
	ba_createvisualtask sub_08116254, 2, 3, -31, 1, 0, 0, 0x5BFF
	ba_delay 20
	ba_createvisualtask sub_08116254, 2, 3, -31, 1, 7, 7, 0x5BFF
	ba_playsewithpan 0x0077, SOUND_PAN_ATTACKER
	ba_createsprite 0x085713DC, ANIM_ATTACKER, 4, 0, 0, 32, 12, 0, 20, 0, 0
	ba_createsprite 0x085713DC, ANIM_ATTACKER, 4, 0, 0, 32, 12, 64, 20, 1, 0
	ba_createsprite 0x085713DC, ANIM_ATTACKER, 4, 0, 0, 32, 12, 128, 20, 0, 0
	ba_createsprite 0x085713DC, ANIM_ATTACKER, 4, 0, 0, 32, 12, 192, 20, 2, 0
	ba_createsprite 0x085713DC, ANIM_ATTACKER, 4, 0, 0, 16, 12, 32, 20, 0, 0
	ba_createsprite 0x085713DC, ANIM_ATTACKER, 4, 0, 0, 16, 12, 96, 20, 1, 0
	ba_createsprite 0x085713DC, ANIM_ATTACKER, 4, 0, 0, 16, 12, 160, 20, 0, 0
	ba_createsprite 0x085713DC, ANIM_ATTACKER, 4, 0, 0, 16, 12, 224, 20, 2, 0
	ba_delay 4
	ba_waitforvisualfinish
	ba_createvisualtask sub_08116254, 2, 3, -31, 1, 0, 0, 0x5BFF
	ba_createsprite 0x0855A958, ANIM_ATTACKER, 2, 4, 4
	ba_delay 4
	ba_playsewithpan 0x00D7, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 2, 0, 0, 1, 2
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 3, 0, 6, 1
	ba_waitforvisualfinish
	ba_createvisualtask sub_08116254, 2, 4, -31, 2, 0, 6, 0x5BFF
	ba_call BattleAnimScript_08286171
	ba_waitforvisualfinish
	ba_end
Move_ATTRACT:
	ba_loadspritegfx 0x27E8
	ba_loopsewithpan 0x00D4, SOUND_PAN_ATTACKER, 12, 3
	ba_createvisualtask AnimTask_SwayMon, 5, 0, 12, 0x1000, 4, 0
	ba_delay 15
	ba_createsprite gAttractHeartSpriteTemplate, ANIM_TARGET, 3, 20, -8
	ba_waitforvisualfinish
	ba_playsewithpan 0x00E2, SOUND_PAN_TARGET
	ba_createsprite gFloatingHeartSpriteTemplate, ANIM_TARGET, 3, 160, -32
	ba_createsprite gFloatingHeartSpriteTemplate, ANIM_TARGET, 3, -256, -40
	ba_createsprite gFloatingHeartSpriteTemplate, ANIM_TARGET, 3, 128, -16
	ba_createsprite gFloatingHeartSpriteTemplate, ANIM_TARGET, 3, 416, -38
	ba_createsprite gFloatingHeartSpriteTemplate, ANIM_TARGET, 3, -128, -22
	ba_createsprite gFloatingHeartSpriteTemplate, ANIM_TARGET, 3, -384, -31
	ba_waitforvisualfinish
	ba_waitplaysewithpan 0x00E3, 0x00, 15
	ba_createvisualtask AnimTask_HeartsBackground, 5
	ba_createsprite gAttractBackgroundHeartSpriteTemplate, ANIM_ATTACKER, 40, 16, 256, 0
	ba_createsprite gAttractBackgroundHeartSpriteTemplate, ANIM_ATTACKER, 40, 224, 240, 15
	ba_createsprite gAttractBackgroundHeartSpriteTemplate, ANIM_ATTACKER, 40, 126, 272, 30
	ba_createsprite gAttractBackgroundHeartSpriteTemplate, ANIM_ATTACKER, 40, 80, 224, 45
	ba_createsprite gAttractBackgroundHeartSpriteTemplate, ANIM_ATTACKER, 40, 170, 272, 60
	ba_createsprite gAttractBackgroundHeartSpriteTemplate, ANIM_ATTACKER, 40, 40, 256, 75
	ba_createsprite gAttractBackgroundHeartSpriteTemplate, ANIM_ATTACKER, 40, 112, 256, 90
	ba_createsprite gAttractBackgroundHeartSpriteTemplate, ANIM_ATTACKER, 40, 200, 272, 90
	ba_delay 75
	ba_createvisualtask sub_08116254, 2, 4, 4, 4, 0, 10, 0x6F3F
	ba_end
Move_GROWTH:
	ba_call BattleAnimScript_0827A34C
	ba_waitforvisualfinish
	ba_call BattleAnimScript_0827A34C
	ba_waitforvisualfinish
	ba_end
BattleAnimScript_0827A34C: @ 0x0827A34C
	ba_createvisualtask sub_08116254, 2, 2, 0, 2, 0, 8, 0x7FFF
	ba_playsewithpan 0x0098, SOUND_PAN_ATTACKER
	ba_createvisualtask AnimTask_ScaleMonAndRestore, 5, -3, -3, 16, 0, 0
	ba_return
Move_WHIRLWIND:
	ba_loadspritegfx 0x27B2
	ba_createsprite 0x08571FB8, ANIM_ATTACKER, 2, 0, -8, 1, 60, 0
	ba_createsprite 0x08571FB8, ANIM_ATTACKER, 2, 0, 0, 1, 60, 1
	ba_createsprite 0x08571FB8, ANIM_ATTACKER, 2, 0, 8, 1, 60, 2
	ba_createsprite 0x08571FB8, ANIM_ATTACKER, 2, 0, 16, 1, 60, 3
	ba_createsprite 0x08571FB8, ANIM_ATTACKER, 2, 0, 24, 1, 60, 4
	ba_createsprite 0x08571FB8, ANIM_ATTACKER, 2, 0, 32, 1, 60, 0
	ba_delay 5
	ba_loopsewithpan 0x0087, SOUND_PAN_TARGET, 10, 4
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 4, 0, 15, 1
	ba_delay 29
	ba_createvisualtask AnimTask_TranslateMonEllipticalRespectSide, 2, 1, 12, 6, 1, 5
	ba_delay 7
	ba_playsewithpan 0x0081, SOUND_PAN_TARGET
	ba_createvisualtask sub_080D5634, 5, 1, 8
	ba_waitforvisualfinish
	ba_end
Move_CONFUSE_RAY:
	ba_loadspritegfx 0x271D
	ba_monbg ANIM_DEF_PARTNER
	ba_fadetobg BG_GHOST
	ba_waitbgfadein
	ba_createvisualtask sub_081591B4, 2, -64, 63, 2, 0
	ba_createvisualtask sub_081164D0, 2, 0x271D, 0, 6, 0, 14, 351
	ba_createsprite 0x085728F8, ANIM_TARGET, 2, 28, 0, 288
	ba_waitforvisualfinish
	ba_setalpha 8, 8
	ba_playsewithpan 0x0082, SOUND_PAN_TARGET
	ba_createsprite 0x08572910, ANIM_TARGET, 2, 0, -16
	ba_waitforvisualfinish
	ba_delay 0
	ba_blendoff
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_restorebg
	ba_waitbgfadein
	ba_end
Move_LOCK_ON:
	ba_loadspritegfx 0x271E
	ba_createsprite gLockOnTargetSpriteTemplate, ANIM_ATTACKER, 40
	ba_createsprite gLockOnRingSpriteTemplate, ANIM_ATTACKER, 40, 1
	ba_createsprite gLockOnRingSpriteTemplate, ANIM_ATTACKER, 40, 2
	ba_createsprite gLockOnRingSpriteTemplate, ANIM_ATTACKER, 40, 3
	ba_createsprite gLockOnRingSpriteTemplate, ANIM_ATTACKER, 40, 4
	ba_delay 120
	ba_setarg 0x07, 0xFFFF
	ba_waitforvisualfinish
	ba_end
Move_MEAN_LOOK:
	ba_loadspritegfx 0x27CB
	ba_monbg ANIM_DEF_PARTNER
	ba_playsewithpan 0x00BD, SOUND_PAN_ATTACKER
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 1, 0, 16, 0
	ba_loopsewithpan 0x00C4, SOUND_PAN_TARGET, 15, 4
	ba_waitplaysewithpan 0x00C0, SOUND_PAN_TARGET, 85
	ba_createsprite 0x085ACF0C, ANIM_ATTACKER, 2
	ba_delay 120
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 2, 16, 0, 0
	ba_delay 30
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_waitforvisualfinish
	ba_end
Move_ROCK_THROW:
BattleAnimScript_0827A4EB: @ 0x0827A4EB
	ba_loadspritegfx 0x274A
	ba_createsprite 0x08572EBC, ANIM_TARGET, 2, 6, 1, 15, 1
	ba_createsprite 0x085726E8, ANIM_TARGET, 2, 0, 1, 0, 0
	ba_playsewithpan 0x0083, SOUND_PAN_TARGET
	ba_delay 6
	ba_createsprite 0x085726E8, ANIM_TARGET, 2, 19, 1, 10, 0
	ba_playsewithpan 0x0083, SOUND_PAN_TARGET
	ba_delay 6
	ba_createsprite 0x085726E8, ANIM_TARGET, 2, -23, 2, -10, 0
	ba_playsewithpan 0x0083, SOUND_PAN_TARGET
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 0, 5, 20, 1
	ba_delay 6
	ba_createsprite 0x085726E8, ANIM_TARGET, 2, -15, 1, -10, 0
	ba_playsewithpan 0x0083, SOUND_PAN_TARGET
	ba_delay 6
	ba_createsprite 0x085726E8, ANIM_TARGET, 2, 23, 2, 10, 0
	ba_playsewithpan 0x0083, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_end
Move_ROCK_SLIDE:
	ba_loadspritegfx 0x274A
	ba_monbg ANIM_DEF_PARTNER
	ba_createsprite 0x08572EBC, ANIM_ATTACKER, 2, 7, 1, 11, 1
	ba_createsprite 0x085726E8, ANIM_TARGET, 2, -5, 1, -5, 1
	ba_playsewithpan 0x0083, SOUND_PAN_TARGET
	ba_delay 2
	ba_createsprite 0x085726E8, ANIM_TARGET, 2, 5, 0, 6, 1
	ba_playsewithpan 0x0083, SOUND_PAN_TARGET
	ba_delay 2
	ba_createsprite 0x085726E8, ANIM_TARGET, 2, 19, 1, 10, 1
	ba_playsewithpan 0x0083, SOUND_PAN_TARGET
	ba_delay 2
	ba_createsprite 0x085726E8, ANIM_TARGET, 2, -23, 2, -10, 1
	ba_playsewithpan 0x0083, SOUND_PAN_TARGET
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 0, 5, 50, 1
	ba_createvisualtask AnimTask_ShakeMon, 2, 3, 0, 5, 50, 1
	ba_delay 2
	ba_call BattleAnimScript_0827A60F
	ba_call BattleAnimScript_0827A60F
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_end
BattleAnimScript_0827A60F: @ 0x0827A60F
	ba_createsprite 0x085726E8, ANIM_TARGET, 2, -20, 0, -10, 1
	ba_playsewithpan 0x0083, SOUND_PAN_TARGET
	ba_delay 2
	ba_createsprite 0x085726E8, ANIM_TARGET, 2, 28, 1, 10, 1
	ba_playsewithpan 0x0083, SOUND_PAN_TARGET
	ba_delay 2
	ba_createsprite 0x085726E8, ANIM_TARGET, 2, -10, 1, -5, 1
	ba_playsewithpan 0x0083, SOUND_PAN_TARGET
	ba_delay 2
	ba_createsprite 0x085726E8, ANIM_TARGET, 2, 10, 0, 6, 1
	ba_playsewithpan 0x0083, SOUND_PAN_TARGET
	ba_delay 2
	ba_createsprite 0x085726E8, ANIM_TARGET, 2, 24, 1, 10, 1
	ba_playsewithpan 0x0083, SOUND_PAN_TARGET
	ba_delay 2
	ba_createsprite 0x085726E8, ANIM_TARGET, 2, -32, 2, -10, 1
	ba_playsewithpan 0x0083, SOUND_PAN_TARGET
	ba_delay 2
	ba_createsprite 0x085726E8, ANIM_TARGET, 2, -20, 0, -10, 1
	ba_playsewithpan 0x0083, SOUND_PAN_TARGET
	ba_delay 2
	ba_createsprite 0x085726E8, ANIM_TARGET, 2, 30, 2, 10, 1
	ba_playsewithpan 0x0083, SOUND_PAN_TARGET
	ba_delay 2
	ba_return
Move_THIEF:
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_TARGET
	ba_delay 1
	ba_fadetobg BG_DARK
	ba_waitbgfadein
	ba_setalpha 12, 8
	ba_createsprite 0x0855A958, ANIM_ATTACKER, 2, 6, 4
	ba_delay 6
	ba_playsewithpan 0x007A, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, 0, 0, 1, 2
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 1, 0, 8, 1
	ba_waitforvisualfinish
	ba_delay 20
	ba_clearmonbg ANIM_TARGET
	ba_blendoff
	ba_restorebg
	ba_waitbgfadein
	ba_end
Move_BUBBLE_BEAM:
BattleAnimScript_0827A6FF: @ 0x0827A6FF
	ba_loadspritegfx 0x27A2
	ba_loadspritegfx 0x27AB
	ba_monbg ANIM_TARGET
	ba_monbgprio_28 ANIM_TARGET
	ba_setalpha 12, 8
	ba_delay 1
	ba_call BattleAnimScript_0827A739
	ba_createvisualtask AnimTask_SwayMon, 5, 0, 3, 0x0C00, 8, 1
	ba_call BattleAnimScript_0827A739
	ba_call BattleAnimScript_0827A739
	ba_waitforvisualfinish
	ba_call BattleAnimScript_08286069
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_TARGET
	ba_blendoff
	ba_end
BattleAnimScript_0827A739: @ 0x0827A739
	ba_createsprite gBubbleSpriteTemplate, ANIM_ATTACKER, 2, 18, 0, 35, 70, 0, 256, 50
	ba_playsewithpan 0x007C, SOUND_PAN_ATTACKER
	ba_delay 3
	ba_createsprite gBubbleSpriteTemplate, ANIM_ATTACKER, 2, 18, 0, 20, 40, -10, 256, 50
	ba_playsewithpan 0x007C, SOUND_PAN_ATTACKER
	ba_delay 3
	ba_createsprite gBubbleSpriteTemplate, ANIM_ATTACKER, 2, 18, 0, 10, -60, 0, 256, 50
	ba_playsewithpan 0x007C, SOUND_PAN_ATTACKER
	ba_delay 3
	ba_createsprite gBubbleSpriteTemplate, ANIM_ATTACKER, 2, 18, 0, 15, -15, 10, 256, 50
	ba_playsewithpan 0x007C, SOUND_PAN_ATTACKER
	ba_delay 3
	ba_createsprite gBubbleSpriteTemplate, ANIM_ATTACKER, 2, 18, 0, 30, 10, -10, 256, 50
	ba_playsewithpan 0x007C, SOUND_PAN_ATTACKER
	ba_delay 3
	ba_createsprite gBubbleSpriteTemplate, ANIM_ATTACKER, 2, 18, 0, 25, -30, 10, 256, 50
	ba_playsewithpan 0x007C, SOUND_PAN_ATTACKER
	ba_delay 3
	ba_return
Move_ICY_WIND:
	ba_loadspritegfx 0x279D
	ba_loadspritegfx 0x279E
	ba_monbg ANIM_DEF_PARTNER
	ba_createvisualtask sub_08116E70, 10, 11, 4, 0, 4, 0
	ba_fadetobg BG_ICE
	ba_waitbgfadeout
	ba_playsewithpan 0x0089, 0x00
	ba_waitbgfadein
	ba_waitforvisualfinish
	ba_panse_1B 0x0084, SOUND_PAN_ATTACKER, SOUND_PAN_TARGET, 2, 0
	ba_call BattleAnimScript_0827A834
	ba_delay 5
	ba_call BattleAnimScript_0827A834
	ba_playsewithpan 0x0085, SOUND_PAN_TARGET
	ba_delay 55
	ba_call BattleAnimScript_08285E7F
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_restorebg
	ba_waitbgfadeout
	ba_createvisualtask sub_08116E70, 10, 11, 4, 4, 0, 0
	ba_waitbgfadein
	ba_end
BattleAnimScript_0827A834: @ 0x0827A834
	ba_createsprite 0x0857177C, ANIM_TARGET, 40, 0, 0, 0, 0, 72, 1
	ba_delay 5
	ba_createsprite 0x0857177C, ANIM_TARGET, 40, 0, 10, 0, 10, 72, 1
	ba_delay 5
	ba_createsprite 0x0857177C, ANIM_TARGET, 40, 0, -10, 0, -10, 72, 1
	ba_delay 5
	ba_createsprite 0x0857177C, ANIM_TARGET, 40, 0, 15, 0, 15, 72, 1
	ba_delay 5
	ba_createsprite 0x0857177C, ANIM_TARGET, 40, 0, -5, 0, -5, 72, 1
	ba_return
Move_SMOKESCREEN:
	ba_loadspritegfx 0x2720
	ba_loadspritegfx 0x2721
	ba_playsewithpan 0x0087, SOUND_PAN_ATTACKER
	ba_createsprite 0x085ACE58, ANIM_TARGET, 2, 20, 0, 0, 0, 35, -25
	ba_waitforvisualfinish
	ba_createvisualtask sub_0815A09C, 2
	ba_delay 2
	ba_playsewithpan 0x009F, SOUND_PAN_TARGET
	ba_createsprite 0x085ACE40, ANIM_TARGET, 4, 0, -12, 104, 0, 75
	ba_createsprite 0x085ACE40, ANIM_TARGET, 4, 0, -12, 72, 1, 75
	ba_createsprite 0x085ACE40, ANIM_TARGET, 4, 0, -6, 56, 1, 75
	ba_createsprite 0x085ACE40, ANIM_TARGET, 4, 0, -6, 88, 0, 75
	ba_createsprite 0x085ACE40, ANIM_TARGET, 4, 0, 0, 56, 0, 75
	ba_createsprite 0x085ACE40, ANIM_TARGET, 4, 0, 0, 88, 1, 75
	ba_createsprite 0x085ACE40, ANIM_TARGET, 4, 0, 6, 72, 0, 75
	ba_createsprite 0x085ACE40, ANIM_TARGET, 4, 0, 6, 104, 1, 75
	ba_createsprite 0x085ACE40, ANIM_TARGET, 4, 0, 12, 72, 0, 75
	ba_createsprite 0x085ACE40, ANIM_TARGET, 4, 0, 12, 56, 1, 75
	ba_createsprite 0x085ACE40, ANIM_TARGET, 4, 0, 18, 80, 0, 75
	ba_createsprite 0x085ACE40, ANIM_TARGET, 4, 0, 18, 72, 1, 75
	ba_waitforvisualfinish
	ba_end
Move_CONVERSION:
	ba_loadspritegfx 0x2722
	ba_monbg ANIM_ATK_PARTNER
	ba_monbgprio_28 ANIM_ATTACKER
	ba_setalpha 16, 0
	ba_delay 0
	ba_playsewithpan 0x00CE, SOUND_PAN_ATTACKER
	ba_createsprite gConversionSpriteTemplate, ANIM_ATTACKER, 2, -24, -24
	ba_delay 3
	ba_createsprite gConversionSpriteTemplate, ANIM_ATTACKER, 2, -8, -24
	ba_delay 3
	ba_createsprite gConversionSpriteTemplate, ANIM_ATTACKER, 2, 8, -24
	ba_delay 3
	ba_createsprite gConversionSpriteTemplate, ANIM_ATTACKER, 2, 24, -24
	ba_delay 3
	ba_playsewithpan 0x00CE, SOUND_PAN_ATTACKER
	ba_createsprite gConversionSpriteTemplate, ANIM_ATTACKER, 2, -24, -8
	ba_delay 3
	ba_createsprite gConversionSpriteTemplate, ANIM_ATTACKER, 2, -8, -8
	ba_delay 3
	ba_createsprite gConversionSpriteTemplate, ANIM_ATTACKER, 2, 8, -8
	ba_delay 3
	ba_createsprite gConversionSpriteTemplate, ANIM_ATTACKER, 2, 24, -8
	ba_delay 3
	ba_playsewithpan 0x00CE, SOUND_PAN_ATTACKER
	ba_createsprite gConversionSpriteTemplate, ANIM_ATTACKER, 2, -24, 8
	ba_delay 3
	ba_createsprite gConversionSpriteTemplate, ANIM_ATTACKER, 2, -8, 8
	ba_delay 3
	ba_createsprite gConversionSpriteTemplate, ANIM_ATTACKER, 2, 8, 8
	ba_delay 3
	ba_createsprite gConversionSpriteTemplate, ANIM_ATTACKER, 2, 24, 8
	ba_delay 3
	ba_playsewithpan 0x00CE, SOUND_PAN_ATTACKER
	ba_createsprite gConversionSpriteTemplate, ANIM_ATTACKER, 2, -24, 24
	ba_delay 3
	ba_createsprite gConversionSpriteTemplate, ANIM_ATTACKER, 2, -8, 24
	ba_delay 3
	ba_createsprite gConversionSpriteTemplate, ANIM_ATTACKER, 2, 8, 24
	ba_delay 3
	ba_createsprite gConversionSpriteTemplate, ANIM_ATTACKER, 2, 24, 24
	ba_delay 20
	ba_playsewithpan 0x00D0, SOUND_PAN_ATTACKER
	ba_createvisualtask sub_081165E4, 2, 0x2722, 1, 1, 0x37FF, 12, 0, 0
	ba_delay 6
	ba_createvisualtask sub_08102B24, 5
	ba_waitforvisualfinish
	ba_delay 1
	ba_clearmonbg ANIM_ATK_PARTNER
	ba_blendoff
	ba_end
Move_CONVERSION_2:
	ba_loadspritegfx 0x2722
	ba_monbg ANIM_DEF_PARTNER
	ba_monbgprio_2A ANIM_TARGET
	ba_setalpha 0, 16
	ba_delay 0
	ba_playsewithpan 0x00D0, SOUND_PAN_TARGET
	ba_createsprite gConversion2SpriteTemplate, ANIM_ATTACKER, 2, -24, -24, 60
	ba_createsprite gConversion2SpriteTemplate, ANIM_ATTACKER, 2, -8, -24, 65
	ba_createsprite gConversion2SpriteTemplate, ANIM_ATTACKER, 2, 8, -24, 70
	ba_createsprite gConversion2SpriteTemplate, ANIM_ATTACKER, 2, 24, -24, 75
	ba_createsprite gConversion2SpriteTemplate, ANIM_ATTACKER, 2, -24, -8, 80
	ba_createsprite gConversion2SpriteTemplate, ANIM_ATTACKER, 2, -8, -8, 85
	ba_createsprite gConversion2SpriteTemplate, ANIM_ATTACKER, 2, 8, -8, 90
	ba_createsprite gConversion2SpriteTemplate, ANIM_ATTACKER, 2, 24, -8, 95
	ba_createsprite gConversion2SpriteTemplate, ANIM_ATTACKER, 2, -24, 8, 100
	ba_createsprite gConversion2SpriteTemplate, ANIM_ATTACKER, 2, -8, 8, 105
	ba_createsprite gConversion2SpriteTemplate, ANIM_ATTACKER, 2, 8, 8, 110
	ba_createsprite gConversion2SpriteTemplate, ANIM_ATTACKER, 2, 24, 8, 115
	ba_createsprite gConversion2SpriteTemplate, ANIM_ATTACKER, 2, -24, 24, 120
	ba_createsprite gConversion2SpriteTemplate, ANIM_ATTACKER, 2, -8, 24, 125
	ba_createsprite gConversion2SpriteTemplate, ANIM_ATTACKER, 2, 8, 24, 130
	ba_createsprite gConversion2SpriteTemplate, ANIM_ATTACKER, 2, 24, 24, 135
	ba_createvisualtask sub_08102C30, 5
	ba_delay 60
	ba_playsewithpan 0x00CE, SOUND_PAN_TARGET
	ba_delay 10
	ba_playsewithpan 0x00CE, SOUND_PAN_TARGET
	ba_delay 10
	ba_playsewithpan 0x00CE, SOUND_PAN_TARGET
	ba_delay 10
	ba_playsewithpan 0x00CE, SOUND_PAN_TARGET
	ba_delay 10
	ba_playsewithpan 0x00CE, SOUND_PAN_TARGET
	ba_delay 10
	ba_playsewithpan 0x00CE, SOUND_PAN_TARGET
	ba_delay 10
	ba_playsewithpan 0x00CE, SOUND_PAN_TARGET
	ba_delay 10
	ba_playsewithpan 0x00CE, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
Move_ROLLING_KICK:
	ba_loadspritegfx 0x279F
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_TARGET
	ba_setalpha 12, 8
	ba_createvisualtask AnimTask_TranslateMonEllipticalRespectSide, 2, 0, 18, 6, 1, 4
	ba_playsewithpan 0x0087, SOUND_PAN_ATTACKER
	ba_delay 6
	ba_playsewithpan 0x0087, SOUND_PAN_ATTACKER
	ba_waitforvisualfinish
	ba_createsprite 0x0855A9A0, ANIM_ATTACKER, 2, 0, 20, 0, 0, 4
	ba_createsprite 0x08571AC4, ANIM_ATTACKER, 2, -24, 0, 48, 10, 160, 0
	ba_delay 5
	ba_playsewithpan 0x007B, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, -8, 0, 1, 2
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 5, 0, 6, 1
	ba_waitforvisualfinish
	ba_createsprite 0x0855A988, ANIM_ATTACKER, 2, 0, 1, 8
	ba_clearmonbg ANIM_TARGET
	ba_blendoff
	ba_end
Move_HEADBUTT:
	ba_loadspritegfx 0x2797
	ba_createsprite gPhysicalStrikeMovementSpriteTemplate, ANIM_ATTACKER, 2, 0
	ba_playsewithpan 0x00A2, SOUND_PAN_ATTACKER
	ba_waitforvisualfinish
	ba_delay 2
	ba_createsprite gPhysicalStrikeMovementSpriteTemplate, ANIM_ATTACKER, 2, 1
	ba_waitforvisualfinish
	ba_createvisualtask AnimTask_ShakeMonInPlace, 2, 0, 2, 0, 4, 1
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 5, 0, 6, 1
	ba_createsprite gPhysicalStrikeMovementSpriteTemplate, ANIM_ATTACKER, 2, 2
	ba_createsprite gBattleAnimSpriteTemplate_PiercingHit, ANIM_TARGET, 3, 0, 0, 1, 1
	ba_playsewithpan 0x007B, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_end
Move_HORN_ATTACK:
	ba_loadspritegfx 0x2797
	ba_loadspritegfx 0x2724
	ba_createsprite gPhysicalStrikeMovementSpriteTemplate, ANIM_ATTACKER, 2, 0
	ba_playsewithpan 0x00A2, SOUND_PAN_ATTACKER
	ba_waitforvisualfinish
	ba_delay 2
	ba_createsprite gPhysicalStrikeMovementSpriteTemplate, ANIM_ATTACKER, 2, 1
	ba_createsprite gHornHitSpriteTemplate, ANIM_TARGET, 4, 0, 0, 10
	ba_waitforvisualfinish
	ba_createvisualtask AnimTask_ShakeMonInPlace, 2, 0, 2, 0, 4, 1
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 5, 0, 6, 1
	ba_createsprite gPhysicalStrikeMovementSpriteTemplate, ANIM_ATTACKER, 2, 2
	ba_createsprite gBattleAnimSpriteTemplate_PiercingHit, ANIM_TARGET, 3, 0, 0, 1, 1
	ba_playsewithpan 0x00A6, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_end
Move_FURY_ATTACK:
	ba_loadspritegfx 0x2797
	ba_loadspritegfx 0x2724
	ba_createvisualtask sub_080D59B8, 2, 4, 256, 0, 2
	ba_choosetwoturnanim BattleAnimScript_0827AD44, BattleAnimScript_0827AD6A
BattleAnimScript_0827AD31: @ 0x0827AD31
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 5, 0, 6, 1
	ba_waitforvisualfinish
	ba_end
BattleAnimScript_0827AD44: @ 0x0827AD44
	ba_createsprite gHornHitSpriteTemplate, ANIM_TARGET, 4, 8, 8, 10
	ba_waitforvisualfinish
	ba_createsprite gBattleAnimSpriteTemplate_PiercingHit, ANIM_TARGET, 3, 0, 0, 1, 1
	ba_playsewithpan 0x00A6, SOUND_PAN_TARGET
	ba_goto BattleAnimScript_0827AD31
BattleAnimScript_0827AD6A: @ 0x0827AD6A
	ba_createsprite gHornHitSpriteTemplate, ANIM_TARGET, 4, -8, -8, 10
	ba_waitforvisualfinish
	ba_createsprite gBattleAnimSpriteTemplate_PiercingHit, ANIM_TARGET, 3, 0, 0, 1, 1
	ba_playsewithpan 0x00A6, SOUND_PAN_TARGET
	ba_goto BattleAnimScript_0827AD31
Move_HORN_DRILL:
	ba_loadspritegfx 0x2797
	ba_loadspritegfx 0x2724
	ba_jumpifcontest BattleAnimScript_0827AEF6
	ba_fadetobg BG_DRILL
	ba_waitbgfadeout
	ba_createvisualtask sub_08117EB0, 5, 0xF700, 768, 1, 0xFFFF
BattleAnimScript_0827ADAD: @ 0x0827ADAD
	ba_waitbgfadein
	ba_setalpha 12, 8
	ba_createsprite gPhysicalStrikeMovementSpriteTemplate, ANIM_ATTACKER, 2, 0
	ba_playsewithpan 0x00A2, SOUND_PAN_ATTACKER
	ba_waitforvisualfinish
	ba_delay 2
	ba_createsprite gPhysicalStrikeMovementSpriteTemplate, ANIM_ATTACKER, 2, 1
	ba_createsprite gHornHitSpriteTemplate, ANIM_TARGET, 4, 0, 0, 12
	ba_waitforvisualfinish
	ba_playse 0x0014
	ba_createvisualtask AnimTask_ShakeMonInPlace, 2, 0, 2, 0, 40, 1
	ba_createvisualtask AnimTask_ShakeMonInPlace, 2, 1, 10, 0, 40, 1
	ba_createsprite gBattleAnimSpriteTemplate_PiercingHit, ANIM_TARGET, 3, 0, 0, 1, 3
	ba_playsewithpan 0x00A6, SOUND_PAN_TARGET
	ba_delay 4
	ba_createsprite gBattleAnimSpriteTemplate_PiercingHit, ANIM_TARGET, 3, 0, 2, 1, 3
	ba_playsewithpan 0x00A6, SOUND_PAN_TARGET
	ba_delay 4
	ba_createsprite gBattleAnimSpriteTemplate_PiercingHit, ANIM_TARGET, 3, -4, 3, 1, 3
	ba_playsewithpan 0x00A6, SOUND_PAN_TARGET
	ba_delay 4
	ba_createsprite gBattleAnimSpriteTemplate_PiercingHit, ANIM_TARGET, 3, -8, -5, 1, 3
	ba_playsewithpan 0x00A6, SOUND_PAN_TARGET
	ba_delay 4
	ba_createsprite gBattleAnimSpriteTemplate_PiercingHit, ANIM_TARGET, 3, 4, -12, 1, 3
	ba_playsewithpan 0x00A6, SOUND_PAN_TARGET
	ba_delay 4
	ba_createsprite gBattleAnimSpriteTemplate_PiercingHit, ANIM_TARGET, 3, 16, 0, 1, 3
	ba_playsewithpan 0x00A6, SOUND_PAN_TARGET
	ba_delay 4
	ba_createsprite gBattleAnimSpriteTemplate_PiercingHit, ANIM_TARGET, 3, 5, 18, 1, 3
	ba_playsewithpan 0x00A6, SOUND_PAN_TARGET
	ba_delay 4
	ba_createsprite gBattleAnimSpriteTemplate_PiercingHit, ANIM_TARGET, 3, -17, 12, 1, 2
	ba_playsewithpan 0x00A6, SOUND_PAN_TARGET
	ba_delay 4
	ba_createsprite gBattleAnimSpriteTemplate_PiercingHit, ANIM_TARGET, 3, -21, -15, 1, 2
	ba_playsewithpan 0x00A6, SOUND_PAN_TARGET
	ba_delay 4
	ba_createsprite gBattleAnimSpriteTemplate_PiercingHit, ANIM_TARGET, 3, 8, -27, 1, 2
	ba_playsewithpan 0x00A6, SOUND_PAN_TARGET
	ba_delay 4
	ba_createsprite gBattleAnimSpriteTemplate_PiercingHit, ANIM_TARGET, 3, 32, 0, 1, 2
	ba_playsewithpan 0x00A6, SOUND_PAN_TARGET
	ba_delay 4
	ba_createsprite gPhysicalStrikeMovementSpriteTemplate, ANIM_ATTACKER, 2, 2
	ba_waitforvisualfinish
	ba_restorebg
	ba_waitbgfadeout
	ba_setarg 0x07, 0xFFFF
	ba_waitbgfadein
	ba_end
BattleAnimScript_0827AEF6: @ 0x0827AEF6
	ba_fadetobg BG_DRILL_CONTESTS
	ba_waitbgfadeout
	ba_createvisualtask sub_08117EB0, 5, 0x0900, 768, 0, 0xFFFF
	ba_goto BattleAnimScript_0827ADAD
Move_THRASH:
	ba_loadspritegfx 0x2797
	ba_loadspritegfx 0x279F
	ba_createvisualtask sub_08105488, 2
	ba_createvisualtask sub_081054F4, 2
	ba_createsprite 0x08571A94, ANIM_TARGET, 3, 1, 10, 0
	ba_createvisualtask AnimTask_ShakeMonInPlace, 2, 1, 4, 0, 7, 1
	ba_playsewithpan 0x008B, SOUND_PAN_TARGET
	ba_delay 28
	ba_createsprite 0x08571A94, ANIM_TARGET, 3, 1, 10, 1
	ba_createvisualtask AnimTask_ShakeMonInPlace, 2, 1, 4, 0, 7, 1
	ba_playsewithpan 0x007B, SOUND_PAN_TARGET
	ba_delay 28
	ba_createsprite 0x08571A94, ANIM_TARGET, 3, 1, 10, 3
	ba_createvisualtask AnimTask_ShakeMonInPlace, 2, 1, 8, 0, 16, 1
	ba_playsewithpan 0x008D, SOUND_PAN_TARGET
	ba_end
Move_SING:
	ba_loadspritegfx 0x2758
	ba_monbg ANIM_DEF_PARTNER
	ba_createvisualtask sub_08103438, 2
	ba_waitforvisualfinish
	ba_panse_1B 0x00AC, SOUND_PAN_ATTACKER, SOUND_PAN_TARGET, 2, 0
	ba_createsprite gSingMusicNoteSpriteTemplate, ANIM_TARGET, 2, 7, 0, 12
	ba_delay 5
	ba_createsprite gSingMusicNoteSpriteTemplate, ANIM_TARGET, 2, 6, 1, 12
	ba_delay 5
	ba_createsprite gSingMusicNoteSpriteTemplate, ANIM_TARGET, 2, 1, 2, 12
	ba_delay 5
	ba_createsprite gSingMusicNoteSpriteTemplate, ANIM_TARGET, 2, 2, 3, 12
	ba_delay 5
	ba_createsprite gSingMusicNoteSpriteTemplate, ANIM_TARGET, 2, 3, 0, 12
	ba_delay 4
	ba_createsprite gSingMusicNoteSpriteTemplate, ANIM_TARGET, 2, 2, 1, 12
	ba_delay 4
	ba_createsprite gSingMusicNoteSpriteTemplate, ANIM_TARGET, 2, 5, 2, 12
	ba_delay 4
	ba_createsprite gSingMusicNoteSpriteTemplate, ANIM_TARGET, 2, 6, 3, 12
	ba_delay 4
	ba_createsprite gSingMusicNoteSpriteTemplate, ANIM_TARGET, 2, 2, 0, 12
	ba_delay 4
	ba_createsprite gSingMusicNoteSpriteTemplate, ANIM_TARGET, 2, 2, 1, 12
	ba_delay 4
	ba_createsprite gSingMusicNoteSpriteTemplate, ANIM_TARGET, 2, 1, 2, 12
	ba_delay 4
	ba_createsprite gSingMusicNoteSpriteTemplate, ANIM_TARGET, 2, 5, 3, 12
	ba_delay 4
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_createvisualtask sub_081034F0, 2
	ba_waitforvisualfinish
	ba_end
Move_LOW_KICK:
	ba_loadspritegfx 0x279F
	ba_loadspritegfx 0x2797
	ba_createsprite 0x0855A9A0, ANIM_ATTACKER, 2, 0, 20, 0, 0, 4
	ba_createsprite 0x08571AC4, ANIM_TARGET, 2, -24, 28, 40, 8, 160, 0
	ba_delay 4
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 2, -8, 8, 1, 2
	ba_createvisualtask sub_080D59B8, 2, 6, 384, 1, 2
	ba_playsewithpan 0x007B, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_createsprite 0x0855A988, ANIM_ATTACKER, 2, 0, 1, 4
	ba_end
Move_EARTHQUAKE:
	ba_createvisualtask sub_08115B2C, 5, 5, 10, 50
	ba_createvisualtask sub_08115B2C, 5, 4, 10, 50
	ba_playsewithpan 0x00EA, 0x00
	ba_delay 10
	ba_createsprite 0x08572E70, ANIM_ATTACKER, 2, 1, 3, 1, 0, 14, 0x7FFF, 14
	ba_delay 16
	ba_createsprite 0x08572E70, ANIM_ATTACKER, 2, 1, 3, 1, 0, 14, 0x7FFF, 14
	ba_end
Move_FISSURE:
	ba_loadspritegfx 0x275A
	ba_createvisualtask sub_08115B2C, 3, 5, 10, 50
	ba_createvisualtask sub_08115B2C, 3, 1, 10, 50
	ba_playsewithpan 0x00EA, SOUND_PAN_TARGET
	ba_delay 8
	ba_call BattleAnimScript_0827B18B
	ba_delay 15
	ba_createsprite 0x08572E70, ANIM_ATTACKER, 2, 1, 3, 1, 0, 14, 0x7FFF, 14
	ba_delay 15
	ba_call BattleAnimScript_0827B1DC
	ba_delay 15
	ba_createsprite 0x08572E70, ANIM_ATTACKER, 2, 1, 3, 1, 0, 14, 0x7FFF, 14
	ba_delay 15
	ba_call BattleAnimScript_0827B18B
	ba_delay 50
	ba_fadetobg BG_FISSURE
	ba_waitbgfadeout
	ba_createvisualtask sub_08115E78, 5, 1, 5, 0xFFFF
	ba_waitbgfadein
	ba_delay 40
	ba_restorebg
	ba_waitbgfadeout
	ba_setarg 0x07, 0xFFFF
	ba_waitbgfadein
	ba_end
BattleAnimScript_0827B18B: @ 0x0827B18B
	ba_createsprite 0x08572DE0, ANIM_TARGET, 2, 1, 0, 12, -48, -16, 24
	ba_createsprite 0x08572DE0, ANIM_TARGET, 2, 1, 0, 16, -16, -10, 24
	ba_createsprite 0x08572DE0, ANIM_TARGET, 2, 1, 1, 14, -52, -18, 24
	ba_createsprite 0x08572DE0, ANIM_TARGET, 2, 1, 1, 12, -32, -16, 24
	ba_playsewithpan 0x00AF, SOUND_PAN_TARGET
	ba_return
BattleAnimScript_0827B1DC: @ 0x0827B1DC
	ba_createsprite 0x08572DE0, ANIM_TARGET, 2, 1, 0, 12, -24, -16, 24
	ba_createsprite 0x08572DE0, ANIM_TARGET, 2, 1, 0, 16, -38, -10, 24
	ba_createsprite 0x08572DE0, ANIM_TARGET, 2, 1, 1, 14, -20, -18, 24
	ba_createsprite 0x08572DE0, ANIM_TARGET, 2, 1, 1, 12, -36, -16, 24
	ba_playsewithpan 0x00AF, SOUND_PAN_TARGET
	ba_return
Move_DIG:
	ba_choosetwoturnanim BattleAnimScript_0827B237, BattleAnimScript_0827B292
BattleAnimScript_0827B236: @ 0x0827B236
	ba_end
BattleAnimScript_0827B237: @ 0x0827B237
	ba_loadspritegfx 0x275A
	ba_loadspritegfx 0x2829
	ba_createsprite 0x08572DF8, ANIM_ATTACKER, 1, 0, 0, 180
	ba_createsprite 0x08572DF8, ANIM_ATTACKER, 1, 0, 1, 180
	ba_monbg_22 ANIM_ATTACKER
	ba_delay 1
	ba_createvisualtask sub_0811550C, 2, 0
	ba_delay 6
	ba_call BattleAnimScript_0827B2F6
	ba_call BattleAnimScript_0827B2F6
	ba_call BattleAnimScript_0827B2F6
	ba_call BattleAnimScript_0827B2F6
	ba_call BattleAnimScript_0827B2F6
	ba_waitforvisualfinish
	ba_clearmonbg_23 ANIM_ATTACKER
	ba_delay 1
	ba_createvisualtask sub_0811550C, 2, 1
	ba_goto BattleAnimScript_0827B236
BattleAnimScript_0827B292: @ 0x0827B292
	ba_loadspritegfx 0x2797
	ba_loadspritegfx 0x2829
	ba_createvisualtask sub_08115764, 2, 0
	ba_waitforvisualfinish
	ba_monbg ANIM_ATTACKER
	ba_createsprite 0x08572DF8, ANIM_ATTACKER, 1, 0, 0, 48
	ba_createsprite 0x08572DF8, ANIM_ATTACKER, 1, 0, 1, 48
	ba_delay 1
	ba_createvisualtask sub_08115764, 2, 1
	ba_delay 16
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, -8, 0, 1, 2
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 5, 0, 6, 1
	ba_playsewithpan 0x008D, SOUND_PAN_ATTACKER
	ba_clearmonbg ANIM_ATTACKER
	ba_goto BattleAnimScript_0827B236
BattleAnimScript_0827B2F6: @ 0x0827B2F6
	ba_createsprite 0x08572DE0, ANIM_ATTACKER, 2, 0, 0, 12, 4, -16, 18
	ba_createsprite 0x08572DE0, ANIM_ATTACKER, 2, 0, 0, 16, 4, -10, 18
	ba_createsprite 0x08572DE0, ANIM_ATTACKER, 2, 0, 1, 14, 4, -18, 18
	ba_createsprite 0x08572DE0, ANIM_ATTACKER, 2, 0, 1, 12, 4, -16, 18
	ba_playsewithpan 0x00AF, SOUND_PAN_ATTACKER
	ba_delay 32
	ba_return
Move_MEDITATE:
	ba_call BattleAnimScript_08286258
	ba_createvisualtask sub_08110024, 2
	ba_playsewithpan 0x00A2, SOUND_PAN_ATTACKER
	ba_delay 16
	ba_playsewithpan 0x0098, SOUND_PAN_ATTACKER
	ba_waitforvisualfinish
	ba_call BattleAnimScript_08286264
	ba_end
Move_AGILITY:
	ba_monbg ANIM_ATK_PARTNER
	ba_setalpha 12, 8
	ba_createvisualtask AnimTask_TranslateMonEllipticalRespectSide, 2, 0, 24, 6, 4, 4
	ba_createvisualtask sub_08117210, 2, 0, 4, 7, 10
	ba_playsewithpan 0x0087, SOUND_PAN_ATTACKER
	ba_delay 12
	ba_playsewithpan 0x0087, SOUND_PAN_ATTACKER
	ba_delay 12
	ba_playsewithpan 0x0087, SOUND_PAN_ATTACKER
	ba_delay 12
	ba_playsewithpan 0x0087, SOUND_PAN_ATTACKER
	ba_delay 12
	ba_playsewithpan 0x0087, SOUND_PAN_ATTACKER
	ba_delay 12
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_ATK_PARTNER
	ba_blendoff
	ba_delay 1
	ba_end
Move_QUICK_ATTACK:
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_ATK_PARTNER
	ba_setalpha 12, 8
	ba_createvisualtask AnimTask_TranslateMonEllipticalRespectSide, 2, 0, 24, 6, 1, 5
	ba_createvisualtask sub_08117210, 2, 0, 4, 7, 3
	ba_playsewithpan 0x008F, SOUND_PAN_ATTACKER
	ba_delay 4
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 5, 0, 6, 1
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 4, 0, 0, 1, 1
	ba_playsewithpan 0x007B, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_ATK_PARTNER
	ba_blendoff
	ba_waitforvisualfinish
	ba_end
Move_RAGE:
	ba_loadspritegfx 0x2797
	ba_loadspritegfx 0x2767
	ba_monbg ANIM_TARGET
	ba_setalpha 12, 8
	ba_createvisualtask AnimTask_BlendMonInAndOut, 3, 0, 31, 10, 0, 2
	ba_createsprite gAngerMarkSpriteTemplate, ANIM_ATTACKER, 2, 0, -20, -28
	ba_playsewithpan 0x00C2, SOUND_PAN_ATTACKER
	ba_delay 20
	ba_createsprite gAngerMarkSpriteTemplate, ANIM_ATTACKER, 2, 0, 20, -28
	ba_playsewithpan 0x00C2, SOUND_PAN_ATTACKER
	ba_waitforvisualfinish
	ba_createsprite 0x0855A958, ANIM_ATTACKER, 2, 4, 6
	ba_delay 4
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, 0, 0, 1, 2
	ba_createvisualtask sub_080D5C0C, 2, 1, 1, 10, 1, 0
	ba_playsewithpan 0x007B, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_TARGET
	ba_end
Move_TELEPORT:
	ba_call BattleAnimScript_08286258
	ba_createvisualtask sub_0811008C, 2
	ba_playsewithpan 0x00CB, SOUND_PAN_ATTACKER
	ba_delay 15
	ba_call BattleAnimScript_08286264
	ba_waitforvisualfinish
	ba_end
Move_DOUBLE_TEAM:
	ba_createvisualtask sub_08103204, 2
	ba_setalpha 12, 8
	ba_monbg ANIM_ATK_PARTNER
	ba_playsewithpan 0x0087, SOUND_PAN_ATTACKER
	ba_delay 32
	ba_playsewithpan 0x0087, SOUND_PAN_ATTACKER
	ba_delay 24
	ba_playsewithpan 0x0087, SOUND_PAN_ATTACKER
	ba_delay 16
	ba_playsewithpan 0x0087, SOUND_PAN_ATTACKER
	ba_delay 8
	ba_playsewithpan 0x0087, SOUND_PAN_ATTACKER
	ba_delay 8
	ba_playsewithpan 0x0087, SOUND_PAN_ATTACKER
	ba_delay 8
	ba_playsewithpan 0x0087, SOUND_PAN_ATTACKER
	ba_delay 8
	ba_playsewithpan 0x0087, SOUND_PAN_ATTACKER
	ba_delay 8
	ba_playsewithpan 0x0087, SOUND_PAN_ATTACKER
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_ATK_PARTNER
	ba_blendoff
	ba_delay 1
	ba_end
Move_MINIMIZE:
	ba_setalpha 10, 8
	ba_createvisualtask AnimTask_Minimize, 2
	ba_loopsewithpan 0x00CC, SOUND_PAN_ATTACKER, 34, 3
	ba_waitforvisualfinish
	ba_blendoff
	ba_end
Move_METRONOME:
	ba_loadspritegfx 0x2750
	ba_loadspritegfx 0x27E1
	ba_createsprite gBattleAnimSpriteTemplate_FingerWag, ANIM_ATTACKER, 11, 0, 100
	ba_playsewithpan 0x00BA, SOUND_PAN_ATTACKER
	ba_delay 6
	ba_createsprite gMetronomeHandSpriteTemplate, ANIM_ATTACKER, 12, 0
	ba_delay 24
	ba_loopsewithpan 0x00A7, SOUND_PAN_ATTACKER, 22, 3
	ba_waitforvisualfinish
	ba_end
Move_SKULL_BASH:
	ba_choosetwoturnanim BattleAnimScript_0827B525, BattleAnimScript_0827B572
BattleAnimScript_0827B524: @ 0x0827B524
	ba_end
BattleAnimScript_0827B525: @ 0x0827B525
	ba_call BattleAnimScript_0827B535
	ba_call BattleAnimScript_0827B535
	ba_waitforvisualfinish
	ba_goto BattleAnimScript_0827B524
BattleAnimScript_0827B535: @ 0x0827B535
	ba_createsprite 0x0855A9B8, ANIM_ATTACKER, 2, 0, -24, 0, 0, 10, 0
	ba_playsewithpan 0x0098, SOUND_PAN_ATTACKER
	ba_waitforvisualfinish
	ba_createvisualtask sub_080D59B8, 2, 16, 96, 0, 2
	ba_waitforvisualfinish
	ba_createsprite 0x0855A9B8, ANIM_ATTACKER, 2, 0, 24, 0, 0, 10, 1
	ba_waitforvisualfinish
	ba_return
BattleAnimScript_0827B572: @ 0x0827B572
	ba_loadspritegfx 0x2797
	ba_createvisualtask sub_081024E4, 2, 0
	ba_playsewithpan 0x0098, SOUND_PAN_ATTACKER
	ba_waitforvisualfinish
	ba_playse 0x0014
	ba_createsprite 0x08572E70, ANIM_ATTACKER, 2, 1, 3, 1, 0, 14, 0x7FFF, 14
	ba_createvisualtask AnimTask_ShakeMonInPlace, 2, 0, 2, 0, 40, 1
	ba_createvisualtask AnimTask_ShakeMonInPlace, 2, 1, 10, 0, 40, 1
	ba_createsprite gBattleAnimSpriteTemplate_PiercingHit, ANIM_TARGET, 4, 0, 0, 1, 0
	ba_loopsewithpan 0x008D, SOUND_PAN_TARGET, 8, 3
	ba_waitforvisualfinish
	ba_createvisualtask sub_081024E4, 2, 1
	ba_goto BattleAnimScript_0827B524
Move_AMNESIA:
	ba_loadspritegfx 0x276D
	ba_call BattleAnimScript_08286258
	ba_delay 8
	ba_createsprite 0x08572328, ANIM_ATTACKER, 20
	ba_playsewithpan 0x00BA, SOUND_PAN_ATTACKER
	ba_delay 54
	ba_loopsewithpan 0x00BA, SOUND_PAN_ATTACKER, 16, 3
	ba_waitforvisualfinish
	ba_call BattleAnimScript_08286264
	ba_end
Move_KINESIS:
	ba_loadspritegfx 0x275B
	ba_loadspritegfx 0x2771
	ba_playsewithpan 0x00BD, SOUND_PAN_ATTACKER
	ba_call BattleAnimScript_08286258
	ba_createsprite 0x085722C0, ANIM_ATTACKER, 20
	ba_createsprite gKinesisZapEnergySpriteTemplate, ANIM_ATTACKER, 19, 32, -8, 0
	ba_createsprite gKinesisZapEnergySpriteTemplate, ANIM_ATTACKER, 19, 32, 16, 1
	ba_loopsewithpan 0x00C4, SOUND_PAN_ATTACKER, 21, 2
	ba_delay 60
	ba_playsewithpan 0x00B0, SOUND_PAN_ATTACKER
	ba_delay 30
	ba_loopsewithpan 0x00B0, SOUND_PAN_ATTACKER, 20, 2
	ba_delay 70
	ba_playsewithpan 0x00C2, SOUND_PAN_ATTACKER
	ba_waitforvisualfinish
	ba_call BattleAnimScript_08286264
	ba_end
Move_GLARE:
	ba_loadspritegfx 0x2808
	ba_loadspritegfx 0x27EA
	ba_createvisualtask AnimTask_GlareEyeDots, 5, 0
	ba_playsewithpan 0x00C8, SOUND_PAN_ATTACKER
	ba_waitforvisualfinish
	ba_createvisualtask sub_08116E70, 5, 1, 0, 0, 16, 0
	ba_waitforvisualfinish
	ba_createsprite gGlareEyeSpriteTemplate, ANIM_ATTACKER, 0, -16, -8
	ba_createsprite gGlareEyeSpriteTemplate, ANIM_ATTACKER, 0, 16, -8
	ba_createvisualtask sub_08106D48, 5
	ba_playsewithpan 0x00C0, SOUND_PAN_ATTACKER
	ba_delay 2
	ba_createvisualtask sub_0810A8E4, 3, 20, 1, 0
	ba_waitforvisualfinish
	ba_createvisualtask sub_08116E70, 5, 1, 0, 16, 0, 0
	ba_end
Move_BARRAGE:
	ba_loadspritegfx 0x280E
	ba_createvisualtask AnimTask_BarrageBall, 3
	ba_playsewithpan 0x00C1, SOUND_PAN_ATTACKER
	ba_delay 24
	ba_createsprite 0x08572EBC, ANIM_ATTACKER, 2, 8, 1, 40, 1
	ba_createvisualtask AnimTask_ShakeMon, 3, 1, 0, 4, 20, 1
	ba_createvisualtask AnimTask_ShakeMon, 3, 3, 0, 4, 20, 1
	ba_loopsewithpan 0x00D6, SOUND_PAN_TARGET, 8, 2
	ba_end
Move_SKY_ATTACK:
	ba_choosetwoturnanim BattleAnimScript_0827B711, BattleAnimScript_0827B81A
BattleAnimScript_0827B710: @ 0x0827B710
	ba_end
BattleAnimScript_0827B711: @ 0x0827B711
	ba_monbg ANIM_DEF_PARTNER
	ba_setalpha 12, 11
	ba_createvisualtask AnimTask_GetTargetIsAttackerPartner, 5, 7
	ba_jumpargeq 0x07, 0, BattleAnimScript_0827B72C
	ba_goto BattleAnimScript_0827B7A3
BattleAnimScript_0827B72C: @ 0x0827B72C
	ba_createvisualtask sub_08116E70, 10, 27, 1, 0, 12, 0
	ba_waitforvisualfinish
	ba_delay 12
	ba_createvisualtask sub_08116E70, 10, 2, 1, 8, 0, 0
	ba_createvisualtask sub_08115B2C, 5, 0, 2, 16
	ba_loopsewithpan 0x00EF, SOUND_PAN_ATTACKER, 4, 8
	ba_createvisualtask sub_08116E70, 10, 2, 1, 0, 15, 0x7FFF
	ba_delay 20
	ba_createvisualtask sub_08116E70, 10, 2, 1, 15, 0, 0x7FFF
	ba_waitforvisualfinish
	ba_createvisualtask sub_08116E70, 10, 25, 1, 8, 0, 0
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_goto BattleAnimScript_0827B710
BattleAnimScript_0827B7A3: @ 0x0827B7A3
	ba_createvisualtask sub_08116EB4, 10, 1, 1, 0, 12, 0
	ba_waitforvisualfinish
	ba_delay 12
	ba_createvisualtask sub_08116E70, 10, 2, 1, 8, 0, 0
	ba_createvisualtask sub_08115B2C, 5, 0, 2, 16
	ba_playsewithpan 0x00EF, SOUND_PAN_ATTACKER
	ba_delay 8
	ba_createvisualtask sub_08116E70, 10, 2, 1, 0, 15, 0x7FFF
	ba_delay 20
	ba_createvisualtask sub_08116E70, 10, 2, 1, 15, 0, 0x7FFF
	ba_waitforvisualfinish
	ba_createvisualtask sub_08116EB4, 10, 4, 1, 8, 0, 0
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_goto BattleAnimScript_0827B710
BattleAnimScript_0827B81A: @ 0x0827B81A
	ba_loadspritegfx 0x2797
	ba_loadspritegfx 0x282C
	ba_call BattleAnimScript_0828626C
	ba_monbg ANIM_ATTACKER
	ba_createvisualtask sub_08116E70, 10, 2, 0, 0, 16, 0x7FFF
	ba_delay 4
	ba_createvisualtask sub_08113F38, 5, 0
	ba_waitforvisualfinish
	ba_createvisualtask sub_08159180, 5, 238, -64
	ba_createsprite 0x085720F8, ANIM_TARGET, 2
	ba_delay 14
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 10, 0, 18, 1
	ba_createvisualtask sub_0815914C, 5, 141, 63
	ba_delay 20
	ba_createvisualtask sub_08114034, 5, 1
	ba_delay 2
	ba_createvisualtask sub_08116E70, 10, 2, 0, 15, 0, 0x7FFF
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_ATTACKER
	ba_call BattleAnimScript_0828629C
	ba_goto BattleAnimScript_0827B710
Move_FLASH:
	ba_playsewithpan 0x00C0, SOUND_PAN_ATTACKER
	ba_createvisualtask sub_08117CE4, 2
	ba_waitforvisualfinish
	ba_end
Move_SPLASH:
	ba_createvisualtask AnimTask_Splash, 2, 0, 3
	ba_delay 8
	ba_loopsewithpan 0x00A7, SOUND_PAN_ATTACKER, 38, 3
	ba_waitforvisualfinish
	ba_end
Move_ACID_ARMOR:
	ba_monbg ANIM_ATTACKER
	ba_setalpha 15, 0
	ba_createvisualtask AnimTask_AcidArmor, 2, 0
	ba_playsewithpan 0x00DA, SOUND_PAN_ATTACKER
	ba_waitforvisualfinish
	ba_blendoff
	ba_clearmonbg ANIM_ATTACKER
	ba_delay 1
	ba_end
Move_SHARPEN:
	ba_loadspritegfx 0x27C9
	ba_createsprite gSharpenSpriteTemplate, ANIM_ATTACKER, 2
	ba_waitforvisualfinish
	ba_end
Move_SUPER_FANG:
	ba_loadspritegfx 0x27D0
	ba_createvisualtask AnimTask_ShakeMonInPlace, 2, 0, 1, 0, 20, 1
	ba_playsewithpan 0x00AB, SOUND_PAN_ATTACKER
	ba_waitforvisualfinish
	ba_createvisualtask AnimTask_ShakeMonInPlace, 2, 0, 3, 0, 48, 1
	ba_createvisualtask AnimTask_BlendMonInAndOut, 2, 0, 1247, 12, 4, 1
	ba_waitforvisualfinish
	ba_delay 20
	ba_createsprite 0x0855A958, ANIM_ATTACKER, 2, 4, 4
	ba_delay 4
	ba_createsprite gSuperFangSpriteTemplate, ANIM_TARGET, 2
	ba_playsewithpan 0x00A1, SOUND_PAN_TARGET
	ba_delay 8
	ba_createsprite 0x08572E70, ANIM_ATTACKER, 2, 1, 3, 1, 0x085F, 14, 0x7FFF, 14
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 0, 7, 12, 1
	ba_waitforvisualfinish
	ba_blendoff
	ba_end
Move_SLASH:
	ba_loadspritegfx 0x27C7
	ba_createsprite gSlashSpriteTemplate, ANIM_TARGET, 2, 1, -8, 0
	ba_playsewithpan 0x0088, SOUND_PAN_TARGET
	ba_delay 4
	ba_createsprite gSlashSpriteTemplate, ANIM_TARGET, 2, 1, 8, 0
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 4, 0, 18, 1
	ba_playsewithpan 0x0088, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_end
Move_STRUGGLE:
	ba_loadspritegfx 0x2797
	ba_loadspritegfx 0x27E7
	ba_monbg ANIM_TARGET
	ba_setalpha 12, 8
	ba_createvisualtask AnimTask_ShakeMonInPlace, 2, 0, 3, 0, 12, 4
	ba_createsprite gStruggleSpriteTemplate, ANIM_ATTACKER, 2, 0, 0, 2
	ba_createsprite gStruggleSpriteTemplate, ANIM_ATTACKER, 2, 0, 1, 2
	ba_loopsewithpan 0x00A2, SOUND_PAN_ATTACKER, 12, 4
	ba_waitforvisualfinish
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 3, 0, 0, 1, 2
	ba_createvisualtask AnimTask_ShakeMonInPlace, 2, 1, 3, 0, 6, 1
	ba_playsewithpan 0x008D, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_TARGET
	ba_blendoff
	ba_end
Move_SKETCH:
	ba_loadspritegfx 0x2712
	ba_monbg ANIM_TARGET
	ba_createvisualtask sub_081056C4, 2
	ba_createsprite gSketchSpriteTemplate, ANIM_TARGET, 2
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_TARGET
	ba_createvisualtask AnimTask_Splash, 2, 0, 2
	ba_loopsewithpan 0x00A7, SOUND_PAN_ATTACKER, 38, 2
	ba_end
Move_NIGHTMARE:
	ba_fadetobg BG_GHOST
	ba_waitbgfadein
	ba_jumpifcontest BattleAnimScript_0827BA5B
	ba_monbg ANIM_DEF_PARTNER
	ba_createvisualtask sub_081124A0, 2
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 3, 0, 40, 1
	ba_playsewithpan 0x0079, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_restorebg
	ba_waitbgfadein
	ba_end
BattleAnimScript_0827BA5B: @ 0x0827BA5B
	ba_createvisualtask AnimTask_BlendMonInAndOut, 2, 0, 0x7FFF, 10, 2, 1
	ba_createvisualtask AnimTask_ShakeMon, 2, 0, 3, 0, 32, 1
	ba_playsewithpan 0x0079, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_restorebg
	ba_waitbgfadein
	ba_end
Move_FLAIL:
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_TARGET
	ba_setalpha 12, 8
	ba_createvisualtask AnimTask_FlailMovement, 2, 0
	ba_loopsewithpan 0x00A2, SOUND_PAN_ATTACKER, 8, 2
	ba_waitforvisualfinish
	ba_createsprite gBattleAnimSpriteTemplate_WaterHitRandomOffset, ANIM_TARGET, 3, 1, 3
	ba_createvisualtask sub_080D5C0C, 2, 0, 1, 30, 1, 0
	ba_playsewithpan 0x008D, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_TARGET
	ba_blendoff
	ba_end
Move_SPITE:
	ba_fadetobg BG_GHOST
	ba_playsewithpan 0x00BD, SOUND_PAN_ATTACKER
	ba_waitbgfadein
	ba_monbg ANIM_DEF_PARTNER
	ba_createvisualtask sub_08116254, 2, 2, 2, 6, 0, 8, 0x7FFF
	ba_createvisualtask sub_081126A0, 2
	ba_loopsewithpan 0x00BD, SOUND_PAN_TARGET, 20, 3
	ba_waitforvisualfinish
	ba_restorebg
	ba_waitbgfadein
	ba_clearmonbg ANIM_TARGET
	ba_end
Move_MACH_PUNCH:
	ba_loadspritegfx 0x2797
	ba_loadspritegfx 0x279F
	ba_monbg ANIM_ATK_PARTNER
	ba_createvisualtask AnimTask_GetAttackerSide, 2
	ba_jumpargeq 0x07, 1, BattleAnimScript_0827BB72
	ba_fadetobg BG_HIGHSPEED_OPPONENT
BattleAnimScript_0827BB0A: @ 0x0827BB0A
	ba_waitbgfadeout
	ba_createvisualtask sub_08117EB0, 5, 0xF700, 0, 1, 0xFFFF
	ba_waitbgfadein
	ba_delay 0
	ba_setalpha 9, 8
	ba_createvisualtask sub_080A848C, 2, 0x7128, 10
	ba_playsewithpan 0x008F, SOUND_PAN_ATTACKER
	ba_delay 6
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 3, 0, 0, 1, 1
	ba_createsprite 0x08571A7C, ANIM_TARGET, 4, 0, 0, 8, 1, 0
	ba_playsewithpan 0x008B, SOUND_PAN_TARGET
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 3, 0, 6, 1
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_ATK_PARTNER
	ba_blendoff
	ba_restorebg
	ba_waitbgfadeout
	ba_setarg 0x07, 0xFFFF
	ba_waitbgfadein
	ba_end
BattleAnimScript_0827BB72: @ 0x0827BB72
	ba_fadetobg BG_HIGHSPEED_PLAYER
	ba_goto BattleAnimScript_0827BB0A
Move_FORESIGHT:
	ba_loadspritegfx 0x2812
	ba_monbg ANIM_DEF_PARTNER
	ba_monbgprio_28 ANIM_TARGET
	ba_setalpha 16, 0
	ba_createsprite 0x085AD6CC, ANIM_TARGET, 2, 1
	ba_delay 17
	ba_loopsewithpan 0x00CD, SOUND_PAN_TARGET, 16, 4
	ba_delay 48
	ba_delay 24
	ba_playsewithpan 0x00CD, SOUND_PAN_TARGET
	ba_delay 10
	ba_createvisualtask AnimTask_BlendMonInAndOut, 5, 1, 0x7FFF, 12, 2, 1
	ba_playsewithpan 0x00D1, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_blendoff
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_end
Move_DESTINY_BOND:
	ba_loadspritegfx 0x27CC
	ba_fadetobg BG_GHOST
	ba_playsewithpan 0x00BD, SOUND_PAN_ATTACKER
	ba_waitbgfadein
	ba_createvisualtask sub_08112C14, 5, 0, 48
	ba_playsewithpan 0x00C4, SOUND_PAN_ATTACKER
	ba_delay 48
	ba_createvisualtask AnimTask_ShakeMonInPlace, 2, 0, 2, 0, 24, 1
	ba_createvisualtask sub_08116EB4, 2, 6, 1, 0, 12, 0x77BD
	ba_delay 24
	ba_createvisualtask sub_08116EB4, 2, 6, 1, 12, 0, 0x77BD
	ba_playsewithpan 0x0079, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_restorebg
	ba_waitbgfadein
	ba_blendoff
	ba_clearmonbg 5
	ba_end
Move_ENDURE:
	ba_loadspritegfx 0x27C8
	ba_playsewithpan 0x00AB, SOUND_PAN_ATTACKER
	ba_call BattleAnimScript_0827BC53
	ba_delay 8
	ba_createvisualtask sub_08116254, 2, 2, 2, 2, 0, 11, 31
	ba_createvisualtask AnimTask_ShakeMon2, 2, 0, 1, 0, 32, 1
	ba_call BattleAnimScript_0827BC53
	ba_delay 8
	ba_call BattleAnimScript_0827BC53
	ba_waitforvisualfinish
	ba_end
BattleAnimScript_0827BC53: @ 0x0827BC53
	ba_createsprite gEndureFocusEnergySpriteTemplate, ANIM_ATTACKER, 2, 0, -24, 26, 2
	ba_delay 4
	ba_createsprite gEndureFocusEnergySpriteTemplate, ANIM_ATTACKER, 2, 0, 14, 28, 1
	ba_delay 4
	ba_createsprite gEndureFocusEnergySpriteTemplate, ANIM_ATTACKER, 2, 0, -5, 10, 2
	ba_delay 4
	ba_createsprite gEndureFocusEnergySpriteTemplate, ANIM_ATTACKER, 2, 0, 28, 26, 3
	ba_delay 4
	ba_createsprite gEndureFocusEnergySpriteTemplate, ANIM_ATTACKER, 2, 0, -12, 0, 1
	ba_return
Move_CHARM:
	ba_loadspritegfx 0x27E2
	ba_createvisualtask AnimTask_RockMonBackAndForth, 5, 0, 2, 0
	ba_createsprite gCharmHeartSpriteTemplate, ANIM_ATTACKER, 3, 0, 20
	ba_playsewithpan 0x00D4, SOUND_PAN_ATTACKER
	ba_delay 15
	ba_createsprite gCharmHeartSpriteTemplate, ANIM_ATTACKER, 3, -20, 20
	ba_playsewithpan 0x00D4, SOUND_PAN_ATTACKER
	ba_delay 15
	ba_createsprite gCharmHeartSpriteTemplate, ANIM_ATTACKER, 3, 20, 20
	ba_playsewithpan 0x00D4, SOUND_PAN_ATTACKER
	ba_waitforvisualfinish
	ba_end
Move_ROLLOUT:
	ba_loadspritegfx 0x2797
	ba_loadspritegfx 0x275A
	ba_loadspritegfx 0x274A
	ba_monbg ANIM_DEF_PARTNER
	ba_monbgprio_28 ANIM_TARGET
	ba_setalpha 12, 8
	ba_createvisualtask sub_081117C4, 2
	ba_waitforvisualfinish
	ba_createvisualtask sub_080D5C0C, 2, 0, 1, 30, 1, 0
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 4, 0, 0, 1, 2
	ba_playsewithpan 0x008D, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
Move_FALSE_SWIPE:
	ba_loadspritegfx 0x282E
	ba_loadspritegfx 0x2797
	ba_createsprite gFalseSwipeSlashSpriteTemplate, ANIM_TARGET, 2
	ba_playsewithpan 0x007A, SOUND_PAN_TARGET
	ba_delay 16
	ba_createsprite gFalseSwipeSliceSpriteTemplate, ANIM_TARGET, 2, 0
	ba_playsewithpan 0x0087, SOUND_PAN_TARGET
	ba_delay 2
	ba_createsprite gFalseSwipeSliceSpriteTemplate, ANIM_TARGET, 2, 16
	ba_delay 2
	ba_createsprite gFalseSwipeSliceSpriteTemplate, ANIM_TARGET, 2, 32
	ba_playsewithpan 0x0087, SOUND_PAN_TARGET
	ba_delay 2
	ba_createsprite gFalseSwipeSliceSpriteTemplate, ANIM_TARGET, 2, 48
	ba_delay 2
	ba_createsprite gFalseSwipeSliceSpriteTemplate, ANIM_TARGET, 2, 64
	ba_playsewithpan 0x0087, SOUND_PAN_TARGET
	ba_delay 2
	ba_createsprite gFalseSwipeSliceSpriteTemplate, ANIM_TARGET, 2, 80
	ba_delay 2
	ba_waitforvisualfinish
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 5, 0, 6, 1
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 4, 0, 0, 1, 3
	ba_playsewithpan 0x008B, SOUND_PAN_TARGET
	ba_end
Move_SWAGGER:
	ba_loadspritegfx 0x2766
	ba_loadspritegfx 0x2767
	ba_createvisualtask sub_08105304, 2
	ba_playsewithpan 0x00C1, SOUND_PAN_ATTACKER
	ba_waitforvisualfinish
	ba_createsprite gBreathPuffSpriteTemplate, ANIM_ATTACKER, 2
	ba_loopsewithpan 0x00C1, SOUND_PAN_ATTACKER, 4, 2
	ba_waitforvisualfinish
	ba_delay 24
	ba_createsprite gAngerMarkSpriteTemplate, ANIM_TARGET, 2, 1, -20, -28
	ba_playsewithpan 0x00C2, SOUND_PAN_TARGET
	ba_delay 12
	ba_createsprite gAngerMarkSpriteTemplate, ANIM_TARGET, 2, 1, 20, -28
	ba_playsewithpan 0x00C2, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_end
Move_MILK_DRINK:
	ba_loadspritegfx 0x2773
	ba_loadspritegfx 0x27DB
	ba_loadspritegfx 0x272F
	ba_monbg ANIM_TARGET
	ba_createsprite gMilkDrinkDropletSpriteTemplate, ANIM_ATTACKER, 2
	ba_delay 40
	ba_playsewithpan 0x008E, SOUND_PAN_ATTACKER
	ba_delay 12
	ba_playsewithpan 0x008E, SOUND_PAN_ATTACKER
	ba_delay 20
	ba_playsewithpan 0x008E, SOUND_PAN_ATTACKER
	ba_waitforvisualfinish
	ba_createsprite gThinRingExpandingSpriteTemplate, ANIM_ATTACKER, 3, 0, 0, 1, 0
	ba_playsewithpan 0x00E1, SOUND_PAN_ATTACKER
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_TARGET
	ba_call BattleAnimScript_08285FAF
	ba_waitforvisualfinish
	ba_end
Move_MAGNITUDE:
	ba_createvisualtask AnimTask_IsPowerOver99, 2
	ba_waitforvisualfinish
	ba_jumpargeq 0x0F, 0, BattleAnimScript_0827BE55
	ba_jumpargeq 0x0F, 1, BattleAnimScript_0827BE7A
BattleAnimScript_0827BE54: @ 0x0827BE54
	ba_end
BattleAnimScript_0827BE55: @ 0x0827BE55
	ba_createvisualtask sub_08115B2C, 5, 5, 0, 50
	ba_createvisualtask sub_08115B2C, 5, 4, 0, 50
	ba_loopsewithpan 0x00D6, SOUND_PAN_TARGET, 8, 10
	ba_goto BattleAnimScript_0827BE54
BattleAnimScript_0827BE7A: @ 0x0827BE7A
	ba_createvisualtask sub_08115B2C, 5, 5, 0, 50
	ba_createvisualtask sub_08115B2C, 5, 4, 0, 50
	ba_loopsewithpan 0x00D6, SOUND_PAN_TARGET, 8, 10
	ba_delay 10
	ba_createsprite 0x08572E70, ANIM_ATTACKER, 2, 1, 3, 1, 0, 14, 0x7FFF, 14
	ba_delay 16
	ba_createsprite 0x08572E70, ANIM_ATTACKER, 2, 1, 3, 1, 0, 14, 0x7FFF, 14
	ba_goto BattleAnimScript_0827BE54
Move_RAPID_SPIN:
	ba_loadspritegfx 0x2797
	ba_loadspritegfx 0x27F5
	ba_monbg ANIM_ATTACKER
	ba_createsprite 0x085AD090, ANIM_ATTACKER, 2, 0, 0, 32, -32, 40, -2
	ba_createvisualtask sub_0815ACEC, 2, 0, 2, 0
	ba_loopsewithpan 0x00A0, SOUND_PAN_ATTACKER, 8, 4
	ba_waitforvisualfinish
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 2, 0, 0, 1, 2
	ba_createvisualtask sub_080D5C0C, 2, 0, 1, 10, 1, 0
	ba_playsewithpan 0x0086, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_delay 8
	ba_createvisualtask sub_0815ACEC, 2, 0, 2, 1
	ba_loopsewithpan 0x00A0, SOUND_PAN_ATTACKER, 8, 4
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_ATTACKER
	ba_end
Move_MOONLIGHT:
	ba_loadspritegfx 0x27D2
	ba_loadspritegfx 0x27D3
	ba_loadspritegfx 0x272F
	ba_setalpha 0, 16
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 1, 0, 16, 0
	ba_waitforvisualfinish
	ba_createsprite gBattleAnimSpriteTemplate_MoonlightMoon, ANIM_ATTACKER, 2, 120, 56
	ba_createvisualtask sub_080A733C, 3, 0, 16, 16, 0, 1
	ba_playsewithpan 0x00D3, 0x00
	ba_delay 30
	ba_createsprite gBattleAnimSpriteTemplate_MoonlightSparkle, ANIM_ATTACKER, 40, -12, 0
	ba_delay 30
	ba_createsprite gBattleAnimSpriteTemplate_MoonlightSparkle, ANIM_ATTACKER, 40, -24, 0
	ba_delay 30
	ba_createsprite gBattleAnimSpriteTemplate_MoonlightSparkle, ANIM_ATTACKER, 40, 21, 0
	ba_delay 30
	ba_createsprite gBattleAnimSpriteTemplate_MoonlightSparkle, ANIM_ATTACKER, 40, 0, 0
	ba_delay 30
	ba_createsprite gBattleAnimSpriteTemplate_MoonlightSparkle, ANIM_ATTACKER, 40, 10, 0
	ba_delay 20
	ba_createvisualtask sub_08102E10, 2
	ba_waitforvisualfinish
	ba_call BattleAnimScript_08285F66
	ba_waitforvisualfinish
	ba_end
Move_EXTREME_SPEED:
	ba_loadspritegfx 0x27DF
	ba_loadspritegfx 0x2797
	ba_createvisualtask AnimTask_GetAttackerSide, 2
	ba_jumpargeq 0x07, 1, BattleAnimScript_0827C081
	ba_fadetobg BG_HIGHSPEED_OPPONENT
BattleAnimScript_0827BFE1: @ 0x0827BFE1
	ba_waitbgfadeout
	ba_createvisualtask sub_08117EB0, 5, 0xF700, 0, 1, 0xFFFF
	ba_waitbgfadein
	ba_createvisualtask sub_08105FCC, 2
	ba_loopsewithpan 0x00A0, SOUND_PAN_ATTACKER, 8, 3
	ba_waitforvisualfinish
	ba_delay 1
	ba_createvisualtask sub_081187B0, 2
	ba_monbg ANIM_TARGET
	ba_setalpha 12, 8
	ba_delay 18
	ba_createvisualtask sub_08106060, 2
	ba_delay 2
	ba_playsewithpan 0x008B, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_WaterHitOnBattler, ANIM_TARGET, 2, 1, 0, -12, 3
	ba_delay 10
	ba_playsewithpan 0x008B, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_WaterHitOnBattler, ANIM_TARGET, 2, 1, 0, 12, 3
	ba_delay 10
	ba_playsewithpan 0x007B, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_WaterHitOnBattler, ANIM_TARGET, 2, 1, 0, 0, 3
	ba_waitforvisualfinish
	ba_createvisualtask sub_081062FC, 2
	ba_delay 10
	ba_createvisualtask sub_081061EC, 2
	ba_loopsewithpan 0x0087, SOUND_PAN_ATTACKER, 8, 4
	ba_waitforvisualfinish
	ba_restorebg
	ba_waitbgfadeout
	ba_setarg 0x07, 0xFFFF
	ba_waitbgfadein
	ba_clearmonbg ANIM_TARGET
	ba_blendoff
	ba_delay 1
	ba_setarg 0x07, 0x1000
	ba_delay 1
	ba_end
BattleAnimScript_0827C081: @ 0x0827C081
	ba_fadetobg BG_HIGHSPEED_PLAYER
	ba_goto BattleAnimScript_0827BFE1
Move_UPROAR:
	ba_loadspritegfx 0x27F1
	ba_loadspritegfx 0x27DB
	ba_monbg ANIM_DEF_PARTNER
	ba_createvisualtask sub_081075E0, 2, 0
	ba_createsprite gUproarRingSpriteTemplate, ANIM_ATTACKER, 3, 0, 0, 0, 0, 31, 8
	ba_playsewithpan 0x00F1, SOUND_PAN_ATTACKER
	ba_createsprite gJaggedMusicNoteSpriteTemplate, ANIM_ATTACKER, 2, 0, 29, -12, 0
	ba_createsprite gJaggedMusicNoteSpriteTemplate, ANIM_ATTACKER, 2, 0, -12, -29, 1
	ba_delay 16
	ba_createvisualtask sub_081075E0, 2, 0
	ba_createsprite gUproarRingSpriteTemplate, ANIM_ATTACKER, 3, 0, 0, 0, 0, 31, 8
	ba_playsewithpan 0x00F1, SOUND_PAN_ATTACKER
	ba_createsprite gJaggedMusicNoteSpriteTemplate, ANIM_ATTACKER, 2, 0, 12, -29, 1
	ba_createsprite gJaggedMusicNoteSpriteTemplate, ANIM_ATTACKER, 2, 0, -29, -12, 0
	ba_delay 16
	ba_createvisualtask sub_081075E0, 2, 0
	ba_createsprite gUproarRingSpriteTemplate, ANIM_ATTACKER, 3, 0, 0, 0, 0, 31, 8
	ba_playsewithpan 0x00F1, SOUND_PAN_ATTACKER
	ba_createsprite gJaggedMusicNoteSpriteTemplate, ANIM_ATTACKER, 2, 0, 24, -24, 1
	ba_createsprite gJaggedMusicNoteSpriteTemplate, ANIM_ATTACKER, 2, 0, -24, -24, 0
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_end
Move_HEAT_WAVE:
	ba_loadspritegfx 0x2815
	ba_createvisualtask AnimTask_BlendParticle, 5, 0x2815, 0, 6, 6, 31
	ba_createvisualtask AnimTask_LoadSandstormBackground, 5, 1
	ba_createvisualtask AnimTask_BlendBackground, 6, 6, 31
	ba_panse_1B 0x00F0, SOUND_PAN_ATTACKER, SOUND_PAN_TARGET, 2, 0
	ba_delay 4
	ba_createvisualtask sub_0810A60C, 5
	ba_delay 12
	ba_createsprite 0x08572784, ANIM_ATTACKER, 40, 10, 0x0900, 96, 1
	ba_delay 10
	ba_createsprite 0x08572784, ANIM_ATTACKER, 40, 90, 2048, 96, 1
	ba_delay 10
	ba_createsprite 0x08572784, ANIM_ATTACKER, 40, 50, 0x0A00, 96, 1
	ba_delay 10
	ba_createsprite 0x08572784, ANIM_ATTACKER, 40, 20, 0x0900, 96, 1
	ba_delay 10
	ba_createsprite 0x08572784, ANIM_ATTACKER, 40, 70, 1984, 96, 1
	ba_delay 10
	ba_createsprite 0x08572784, ANIM_ATTACKER, 40, 0, 0x0B00, 96, 1
	ba_delay 10
	ba_createsprite 0x08572784, ANIM_ATTACKER, 40, 60, 0x0A00, 96, 1
	ba_end
Move_HAIL:
BattleAnimScript_0827C202: @ 0x0827C202
	ba_loadspritegfx 0x2817
	ba_loadspritegfx 0x279D
	ba_createvisualtask sub_08116E70, 10, 1, 3, 0, 6, 0
	ba_waitforvisualfinish
	ba_createvisualtask AnimTask_Hail1, 5
	ba_loopsewithpan 0x00F2, 0x00, 8, 10
	ba_waitforvisualfinish
	ba_createvisualtask sub_08116E70, 10, 1, 3, 6, 0, 0
	ba_end
Move_TORMENT:
	ba_loadspritegfx 0x2767
	ba_loadspritegfx 0x27E1
	ba_createvisualtask sub_0815AF2C, 2
	ba_waitforvisualfinish
	ba_createvisualtask AnimTask_BlendMonInAndOut, 2, 1, 31, 10, 1, 1
	ba_createsprite gAngerMarkSpriteTemplate, ANIM_TARGET, 2, 1, -20, -28
	ba_playsewithpan 0x00C2, SOUND_PAN_TARGET
	ba_delay 20
	ba_createsprite gAngerMarkSpriteTemplate, ANIM_TARGET, 2, 1, 20, -28
	ba_playsewithpan 0x00C2, SOUND_PAN_TARGET
	ba_end
Move_MEMENTO:
	ba_setalpha 0, 16
	ba_delay 1
	ba_createvisualtask sub_08114C10, 2
	ba_delay 1
	ba_createvisualtask sub_081143FC, 5
	ba_playsewithpan 0x00BD, SOUND_PAN_ATTACKER
	ba_delay 48
	ba_playsewithpan 0x00C8, SOUND_PAN_ATTACKER
	ba_waitforvisualfinish
	ba_createvisualtask sub_08114CC0, 2
	ba_delay 12
	ba_setalpha 0, 16
	ba_delay 1
	ba_monbg_22 ANIM_TARGET
	ba_createvisualtask sub_081146C8, 5
	ba_playsewithpan 0x00BD, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_clearmonbg_23 ANIM_TARGET
	ba_delay 1
	ba_blendoff
	ba_delay 1
	ba_end
Move_FACADE:
	ba_loadspritegfx 0x2803
	ba_createvisualtask AnimTask_SquishAndSweatDroplets, 2, 0, 3
	ba_createvisualtask AnimTask_FacadeColorBlend, 2, 0, 72
	ba_loopsewithpan 0x00C1, SOUND_PAN_ATTACKER, 24, 3
	ba_end
Move_SMELLING_SALT:
	ba_loadspritegfx 0x2807
	ba_loadspritegfx 0x280F
	ba_createsprite 0x085AD66C, ANIM_TARGET, 2, 1, 0, 2
	ba_createsprite 0x085AD66C, ANIM_TARGET, 2, 1, 1, 2
	ba_delay 32
	ba_createvisualtask AnimTask_SmellingSaltsSquish, 3, 1, 2
	ba_loopsewithpan 0x0086, SOUND_PAN_TARGET, 12, 2
	ba_waitforvisualfinish
	ba_delay 4
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 2, 0, 6, 2
	ba_createsprite 0x085AD69C, ANIM_TARGET, 2, 1, 8, 3
	ba_loopsewithpan 0x00C2, SOUND_PAN_TARGET, 16, 3
	ba_end
Move_FOLLOW_ME:
	ba_loadspritegfx 0x2750
	ba_createsprite gFollowMeHandSpriteTemplate, ANIM_ATTACKER, 2, 0
	ba_playsewithpan 0x00A7, SOUND_PAN_ATTACKER
	ba_delay 18
	ba_playsewithpan 0x00E2, SOUND_PAN_ATTACKER
	ba_delay 71
	ba_loopsewithpan 0x00A7, SOUND_PAN_ATTACKER, 22, 3
	ba_end
Move_CHARGE:
	ba_loadspritegfx 0x27E3
	ba_loadspritegfx 0x27E4
	ba_loadspritegfx 0x27E5
	ba_monbg ANIM_ATTACKER
	ba_setalpha 12, 8
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 2, 0, 4, 0
	ba_waitforvisualfinish
	ba_createvisualtask sub_0810B34C, 2, 0, 60, 2, 12
	ba_playsewithpan 0x00D5, SOUND_PAN_ATTACKER
	ba_delay 30
	ba_playsewithpan 0x00D5, SOUND_PAN_ATTACKER
	ba_delay 30
	ba_playsewithpan 0x00D5, SOUND_PAN_ATTACKER
	ba_createsprite 0x08571540, ANIM_ATTACKER, 2, 0
	ba_delay 25
	ba_playsewithpan 0x00D5, SOUND_PAN_ATTACKER
	ba_delay 20
	ba_playsewithpan 0x00D5, SOUND_PAN_ATTACKER
	ba_delay 15
	ba_playsewithpan 0x00D5, SOUND_PAN_ATTACKER
	ba_delay 10
	ba_delay 6
	ba_loopsewithpan 0x00D5, SOUND_PAN_ATTACKER, 6, 5
	ba_waitforvisualfinish
	ba_createsprite 0x08571570, ANIM_ATTACKER, 2, 0, 16, 16
	ba_delay 2
	ba_createsprite 0x08571570, ANIM_ATTACKER, 2, 0, -16, -16
	ba_playsewithpan 0x0077, SOUND_PAN_ATTACKER
	ba_waitforvisualfinish
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 4, 4, 0, 0
	ba_clearmonbg ANIM_ATTACKER
	ba_blendoff
	ba_end
Move_TAUNT:
	ba_loadspritegfx 0x27E6
	ba_loadspritegfx 0x27E1
	ba_loadspritegfx 0x2767
	ba_createsprite gBattleAnimSpriteTemplate_FingerWag, ANIM_ATTACKER, 11, 0, 45
	ba_playsewithpan 0x00BA, SOUND_PAN_ATTACKER
	ba_delay 6
	ba_createsprite gTauntHandSpriteTemplate, ANIM_ATTACKER, 12, 0
	ba_delay 4
	ba_loopsewithpan 0x00A7, SOUND_PAN_ATTACKER, 16, 2
	ba_waitforvisualfinish
	ba_delay 8
	ba_createsprite gAngerMarkSpriteTemplate, ANIM_TARGET, 2, 1, -20, -28
	ba_playsewithpan 0x00C2, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_delay 12
	ba_createsprite gAngerMarkSpriteTemplate, ANIM_TARGET, 2, 1, 20, -28
	ba_playsewithpan 0x00C2, SOUND_PAN_TARGET
	ba_end
Move_HELPING_HAND:
	ba_loadspritegfx 0x2807
	ba_createvisualtask AnimTask_HelpingHandAttackerMovement, 5
	ba_createsprite 0x085AD6B4, ANIM_ATTACKER, 40, 0
	ba_createsprite 0x085AD6B4, ANIM_ATTACKER, 40, 1
	ba_delay 19
	ba_playsewithpan 0x00DE, 0x00
	ba_createvisualtask AnimTask_ShakeMon2, 2, 2, 2, 0, 5, 1
	ba_delay 14
	ba_playsewithpan 0x00DE, 0x00
	ba_createvisualtask AnimTask_ShakeMon2, 2, 2, 2, 0, 5, 1
	ba_delay 20
	ba_playsewithpan 0x00DE, 0x00
	ba_createvisualtask AnimTask_ShakeMon2, 2, 2, 3, 0, 10, 1
	ba_createvisualtask AnimTask_BlendMonInAndOut, 2, 2, 1023, 12, 1, 1
	ba_end
Move_ASSIST:
	ba_loadspritegfx 0x280C
	ba_createsprite 0x085AD60C, ANIM_ATTACKER, 50, 112, -16, 140, 128, 36
	ba_delay 2
	ba_createsprite 0x085AD60C, ANIM_ATTACKER, 50, 208, 128, -16, 48, 36
	ba_playsewithpan 0x009B, 0x00
	ba_delay 2
	ba_createsprite 0x085AD60C, ANIM_ATTACKER, 50, -16, 112, 256, -16, 36
	ba_playsewithpan 0x009B, 0x00
	ba_delay 2
	ba_createsprite 0x085AD60C, ANIM_ATTACKER, 50, 108, 128, 84, -16, 36
	ba_playsewithpan 0x009B, 0x00
	ba_delay 2
	ba_createsprite 0x085AD60C, ANIM_ATTACKER, 50, -16, 56, 256, 56, 36
	ba_playsewithpan 0x009B, 0x00
	ba_end
Move_SUPERPOWER:
	ba_loadspritegfx 0x27E4
	ba_loadspritegfx 0x2810
	ba_loadspritegfx 0x2811
	ba_monbg ANIM_ATK_PARTNER
	ba_monbgprio_28 ANIM_ATTACKER
	ba_setalpha 12, 8
	ba_createsprite 0x08571BD0, ANIM_TARGET, 2, 0
	ba_playsewithpan 0x008C, SOUND_PAN_ATTACKER
	ba_delay 20
	ba_createsprite 0x08572EBC, ANIM_ATTACKER, 2, 4, 1, 180, 1
	ba_createvisualtask sub_08159180, 5, 234, 0
	ba_delay 40
	ba_createsprite 0x08571BE8, ANIM_ATTACKER, 41, 200, 96, 1, 120
	ba_delay 8
	ba_createsprite 0x08571BE8, ANIM_ATTACKER, 41, 20, 248, 4, 112
	ba_delay 8
	ba_createsprite 0x08571BE8, ANIM_ATTACKER, 41, 130, 160, 2, 104
	ba_delay 8
	ba_createsprite 0x08571BE8, ANIM_ATTACKER, 41, 160, 192, 0, 96
	ba_delay 8
	ba_createsprite 0x08571BE8, ANIM_ATTACKER, 41, 60, 288, 3, 88
	ba_delay 74
	ba_createsprite 0x08571C00, ANIM_TARGET, 3, 0
	ba_playsewithpan 0x00C1, SOUND_PAN_ATTACKER
	ba_delay 16
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 8, 0, 16, 1
	ba_playsewithpan 0x008D, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_ATK_PARTNER
	ba_blendoff
	ba_delay 1
	ba_end
Move_RECYCLE:
	ba_loadspritegfx 0x2826
	ba_monbg ANIM_ATTACKER
	ba_setalpha 0, 16
	ba_delay 1
	ba_createsprite 0x085AD7B8, ANIM_ATTACKER, 2
	ba_loopsewithpan 0x0098, SOUND_PAN_ATTACKER, 24, 3
	ba_waitforvisualfinish
	ba_createvisualtask AnimTask_BlendMonInAndOut, 5, 0, 0x7FFF, 12, 2, 1
	ba_playsewithpan 0x0098, SOUND_PAN_ATTACKER
	ba_waitforvisualfinish
	ba_blendoff
	ba_clearmonbg ANIM_ATTACKER
	ba_delay 1
	ba_end
Move_BRICK_BREAK:
	ba_loadspritegfx 0x27B7
	ba_loadspritegfx 0x2797
	ba_loadspritegfx 0x279F
	ba_loadspritegfx 0x27E0
	ba_choosetwoturnanim BattleAnimScript_0827C633, BattleAnimScript_0827C6E0
BattleAnimScript_0827C633: @ 0x0827C633
	ba_monbg ANIM_TARGET
	ba_setalpha 12, 8
	ba_createsprite 0x0855A958, ANIM_ATTACKER, 2, 3, 8
	ba_delay 4
	ba_delay 1
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 3, -18, -18, 1, 1
	ba_playsewithpan 0x007A, SOUND_PAN_TARGET
	ba_delay 20
	ba_createsprite 0x0855A958, ANIM_ATTACKER, 2, 3, 8
	ba_delay 5
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 3, 18, 18, 1, 1
	ba_playsewithpan 0x007A, SOUND_PAN_TARGET
	ba_delay 20
	ba_createvisualtask AnimTask_WindUpLunge, 2, 0, -24, 0, 24, 10, 24, 3
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 2, 0, 6, 0
	ba_delay 37
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 3, 0, 0, 1, 1
	ba_createsprite 0x08571A7C, ANIM_ATTACKER, 4, 0, 0, 10, 1, 0
	ba_playsewithpan 0x007B, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 2, 6, 0, 0
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_TARGET
	ba_end
BattleAnimScript_0827C6E0: @ 0x0827C6E0
	ba_monbg ANIM_TARGET
	ba_setalpha 12, 8
	ba_createsprite 0x0855A958, ANIM_ATTACKER, 2, 3, 8
	ba_delay 4
	ba_createsprite 0x08571B74, ANIM_ATTACKER, 3, 1, 0, 0, 90, 10
	ba_delay 1
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 3, -18, -18, 1, 1
	ba_playsewithpan 0x007A, SOUND_PAN_TARGET
	ba_delay 20
	ba_createsprite 0x0855A958, ANIM_ATTACKER, 2, 3, 8
	ba_delay 5
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 3, 18, 18, 1, 1
	ba_playsewithpan 0x007A, SOUND_PAN_TARGET
	ba_delay 20
	ba_createvisualtask AnimTask_WindUpLunge, 2, 0, -24, 0, 24, 10, 24, 3
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 2, 0, 6, 0
	ba_delay 37
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 3, 0, 0, 1, 1
	ba_createsprite 0x08571A7C, ANIM_ATTACKER, 4, 0, 0, 10, 1, 0
	ba_playsewithpan 0x007B, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_createsprite 0x08571B8C, ANIM_ATTACKER, 2, 1, 0, -8, -12
	ba_createsprite 0x08571B8C, ANIM_ATTACKER, 2, 1, 1, 8, -12
	ba_createsprite 0x08571B8C, ANIM_ATTACKER, 2, 1, 2, -8, 12
	ba_createsprite 0x08571B8C, ANIM_ATTACKER, 2, 1, 3, 8, 12
	ba_playsewithpan 0x00C6, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 2, 6, 0, 0
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_TARGET
	ba_end
Move_YAWN:
	ba_loadspritegfx 0x2802
	ba_createvisualtask AnimTask_DeepInhale, 2, 0
	ba_playsewithpan 0x00ED, SOUND_PAN_ATTACKER
	ba_waitforvisualfinish
	ba_createsprite 0x085AD494, ANIM_TARGET, 5, 2
	ba_playsewithpan 0x00E8, SOUND_PAN_ATTACKER
	ba_delay 4
	ba_createsprite 0x085AD494, ANIM_TARGET, 5, 1
	ba_delay 4
	ba_createsprite 0x085AD494, ANIM_TARGET, 5, 0
	ba_waitforvisualfinish
	ba_createvisualtask AnimTask_DeepInhale, 2, 1
	ba_playsewithpan 0x00ED, SOUND_PAN_TARGET
	ba_end
Move_ENDEAVOR:
	ba_loadspritegfx 0x2803
	ba_loadspritegfx 0x2797
	ba_createvisualtask AnimTask_SquishAndSweatDroplets, 2, 0, 2
	ba_loopsewithpan 0x00A7, SOUND_PAN_ATTACKER, 24, 2
	ba_createvisualtask AnimTask_BlendMonInAndOut, 5, 0, 703, 12, 1, 2
	ba_delay 6
	ba_createvisualtask sub_080D5C0C, 5, 0, 1, 8, 1, 0
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 2, 12, -12, 1, 2
	ba_playsewithpan 0x0086, SOUND_PAN_TARGET
	ba_delay 24
	ba_createvisualtask sub_080D5C0C, 5, 0, 1, 8, 1, 0
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 2, -12, 12, 1, 2
	ba_playsewithpan 0x008B, SOUND_PAN_TARGET
	ba_end
Move_ERUPTION:
	ba_loadspritegfx 0x27D9
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 31, 2, 0, 4, 31
	ba_waitforvisualfinish
	ba_createvisualtask sub_08109CB0, 2
	ba_waitplaysewithpan 0x00B2, SOUND_PAN_ATTACKER, 60
	ba_waitforvisualfinish
	ba_createvisualtask sub_08109CB0, 2
	ba_waitplaysewithpan 0x00B2, SOUND_PAN_ATTACKER, 60
	ba_waitforvisualfinish
	ba_delay 30
	ba_createsprite 0x085711CC, ANIM_ATTACKER, 40, 200, -32, 0, 100, 0
	ba_createsprite 0x085711CC, ANIM_ATTACKER, 40, 30, -32, 16, 90, 1
	ba_createsprite 0x085711CC, ANIM_ATTACKER, 40, 150, -32, 32, 60, 2
	ba_createsprite 0x085711CC, ANIM_ATTACKER, 40, 90, -32, 48, 80, 3
	ba_createsprite 0x085711CC, ANIM_ATTACKER, 40, 110, -32, 64, 50, 0
	ba_createsprite 0x085711CC, ANIM_ATTACKER, 40, 60, -32, 80, 70, 1
	ba_delay 22
	ba_createvisualtask sub_08115B2C, 5, 5, 8, 60
	ba_createvisualtask sub_08115B2C, 5, 4, 8, 60
	ba_loopsewithpan 0x0083, SOUND_PAN_TARGET, 16, 12
	ba_delay 80
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 40, 31, 4, 4, 0, 31
	ba_end
Move_SKILL_SWAP:
	ba_loadspritegfx 0x280B
	ba_call BattleAnimScript_08286258
	ba_createvisualtask sub_08110440, 3, 1
	ba_createvisualtask AnimTask_BlendMonInAndOut, 5, 1, 0x7FFF, 12, 3, 1
	ba_loopsewithpan 0x00D9, SOUND_PAN_ATTACKER, 24, 3
	ba_delay 16
	ba_createvisualtask sub_08110440, 3, 0
	ba_createvisualtask AnimTask_BlendMonInAndOut, 5, 0, 0x7FFF, 12, 3, 1
	ba_waitforvisualfinish
	ba_call BattleAnimScript_08286264
	ba_end
Move_IMPRISON:
	ba_loadspritegfx 0x2809
	ba_loadspritegfx 0x280A
	ba_call BattleAnimScript_08286258
	ba_monbg ANIM_DEF_PARTNER
	ba_createvisualtask sub_08110190, 5
	ba_delay 8
	ba_loopsewithpan 0x00A6, SOUND_PAN_ATTACKER, 8, 5
	ba_waitforvisualfinish
	ba_delay 4
	ba_createsprite 0x08572390, ANIM_ATTACKER, 5, 0, 40
	ba_createvisualtask sub_08115B2C, 5, 4, 1, 10
	ba_playsewithpan 0x00D7, SOUND_PAN_ATTACKER
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_call BattleAnimScript_08286264
	ba_end
Move_GRUDGE:
	ba_loadspritegfx 0x280D
	ba_monbg ANIM_ATTACKER
	ba_monbgprio_29
	ba_fadetobg BG_GHOST
	ba_playsewithpan 0x00BD, SOUND_PAN_ATTACKER
	ba_waitbgfadein
	ba_createvisualtask sub_081134BC, 3
	ba_loopsewithpan 0x0097, SOUND_PAN_ATTACKER, 16, 4
	ba_delay 10
	ba_delay 80
	ba_playsewithpan 0x0079, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_restorebg
	ba_waitbgfadein
	ba_clearmonbg ANIM_ATTACKER
	ba_end
Move_CAMOUFLAGE:
	ba_monbg ANIM_ATK_PARTNER
	ba_monbgprio_28 ANIM_ATTACKER
	ba_setalpha 16, 0
	ba_createvisualtask AnimTask_SetCamouflageBlend, 5, 2, 3, 0, 14
	ba_delay 16
	ba_createvisualtask sub_08113F38, 2, 4
	ba_playsewithpan 0x00BE, SOUND_PAN_ATTACKER
	ba_waitforvisualfinish
	ba_delay 8
	ba_createvisualtask AnimTask_SetCamouflageBlend, 5, 2, 0, 0, 0
	ba_waitforvisualfinish
	ba_createvisualtask sub_08114034, 2, 1
	ba_waitforvisualfinish
	ba_blendoff
	ba_clearmonbg ANIM_ATK_PARTNER
	ba_end
Move_TAIL_GLOW:
	ba_loadspritegfx 0x27E4
	ba_monbg ANIM_ATTACKER
	ba_setalpha 12, 8
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 2, 0, 4, 0
	ba_waitforvisualfinish
	ba_createsprite 0x085726AC, ANIM_ATTACKER, 66, 0
	ba_delay 18
	ba_loopsewithpan 0x00E4, SOUND_PAN_ATTACKER, 16, 6
	ba_waitforvisualfinish
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 4, 4, 0, 0
	ba_clearmonbg ANIM_ATTACKER
	ba_blendoff
	ba_delay 1
	ba_end
Move_LUSTER_PURGE:
	ba_loadspritegfx 0x281B
	ba_loadspritegfx 0x2797
	ba_fadetobg BG_PSYCHIC
	ba_waitbgfadeout
	ba_createvisualtask sub_0815A504, 5
	ba_waitbgfadein
	ba_monbg ANIM_ATTACKER
	ba_setalpha 12, 8
	ba_playsewithpan 0x00C9, SOUND_PAN_ATTACKER
	ba_createsprite 0x0857247C, ANIM_ATTACKER, 41, 0, 0, 0, 0
	ba_delay 20
	ba_createvisualtask sub_08116EB4, 5, 5, 2, 0, 16, 0xFFFF
	ba_createvisualtask AnimTask_BlendParticle, 5, 0x281B, 2, 0, 16, 0xFFFF
	ba_waitforvisualfinish
	ba_createvisualtask AnimTask_BlendParticle, 5, 0x2797, 0, 12, 12, 0x5C00
	ba_waitforvisualfinish
	ba_createsprite gBattleAnimSpriteTemplate_WaterHitRandomOffset, ANIM_TARGET, 3, 1, 2
	ba_createvisualtask sub_0815914C, 5, 215, 63
	ba_delay 3
	ba_createsprite gBattleAnimSpriteTemplate_WaterHitRandomOffset, ANIM_TARGET, 3, 1, 2
	ba_createvisualtask sub_0815914C, 5, 215, 63
	ba_delay 3
	ba_createsprite gBattleAnimSpriteTemplate_WaterHitRandomOffset, ANIM_TARGET, 3, 1, 2
	ba_createvisualtask sub_0815914C, 5, 215, 63
	ba_delay 3
	ba_createsprite gBattleAnimSpriteTemplate_WaterHitRandomOffset, ANIM_TARGET, 3, 1, 2
	ba_createvisualtask sub_0815914C, 5, 215, 63
	ba_delay 3
	ba_createsprite gBattleAnimSpriteTemplate_WaterHitRandomOffset, ANIM_TARGET, 3, 1, 2
	ba_createvisualtask sub_0815914C, 5, 215, 63
	ba_delay 3
	ba_createsprite gBattleAnimSpriteTemplate_WaterHitRandomOffset, ANIM_TARGET, 3, 1, 2
	ba_createvisualtask sub_0815914C, 5, 215, 63
	ba_waitforvisualfinish
	ba_createvisualtask sub_08116EB4, 5, 5, 2, 16, 0, 0xFFFF
	ba_createvisualtask sub_08115B2C, 5, 1, 5, 14
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_ATTACKER
	ba_blendoff
	ba_call BattleAnimScript_08286264
	ba_end
Move_MIST_BALL:
	ba_loadspritegfx 0x27AB
	ba_loadspritegfx 0x281E
	ba_delay 0
	ba_playsewithpan 0x0081, SOUND_PAN_ATTACKER
	ba_createsprite 0x08571854, ANIM_TARGET, 0, 0, 0, 0, 0, 30, 0
	ba_waitforvisualfinish
	ba_playsewithpan 0x009F, SOUND_PAN_TARGET
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 5, 0, 10, 0
	ba_createsprite 0x08572E70, ANIM_ATTACKER, 0, 1, 1, 1, 0x7E17, 16, 0x7FFF, 16
	ba_delay 0
	ba_playsewithpan 0x00F6, 0x00
	ba_createvisualtask AnimTask_LoadMistTiles, 5
	ba_createvisualtask sub_08116E70, 10, 4, 3, 0, 16, 0x7FFF
	ba_delay 8
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 4, 0, 70, 0
	ba_delay 70
	ba_createvisualtask sub_08116E70, 10, 4, 2, 16, 0, 0x7FFF
	ba_end
Move_FEATHER_DANCE:
	ba_loadspritegfx 0x281E
	ba_monbg ANIM_DEF_PARTNER
	ba_monbgprio_29
	ba_playsewithpan 0x00CA, SOUND_PAN_TARGET
	ba_delay 0
	ba_createsprite 0x08571F6C, ANIM_TARGET, 0, 0, -16, 64, 2, 104, 0x2C28, 32, 1
	ba_delay 6
	ba_createsprite 0x08571F6C, ANIM_TARGET, 0, 0, -16, 32, 2, 104, 0x2C28, 32, 1
	ba_createsprite 0x08571F6C, ANIM_TARGET, 0, 0, -16, 0, 2, 104, 0x2C28, 32, 1
	ba_delay 6
	ba_createsprite 0x08571F6C, ANIM_TARGET, 0, 0, -16, 224, 2, 104, 0x2C28, 32, 1
	ba_createsprite 0x08571F6C, ANIM_TARGET, 0, 0, -16, 128, 2, 104, 0x2C28, 32, 1
	ba_delay 6
	ba_createsprite 0x08571F6C, ANIM_TARGET, 0, 0, -16, 192, 2, 104, 0x2C28, 32, 1
	ba_createsprite 0x08571F6C, ANIM_TARGET, 0, 0, -16, 160, 2, 104, 0x2C28, 32, 1
	ba_delay 6
	ba_createsprite 0x08571F6C, ANIM_TARGET, 0, 0, -16, 96, 2, 104, 0x2C28, 32, 1
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_end
Move_TEETER_DANCE:
	ba_loadspritegfx 0x2758
	ba_loadspritegfx 0x2759
	ba_createvisualtask AnimTask_TeeterDanceMovement, 5
	ba_createsprite gTeeterDanceMusicNoteSpriteTemplate, ANIM_ATTACKER, 2, 0, 16, -2
	ba_playsewithpan 0x00F4, SOUND_PAN_ATTACKER
	ba_delay 24
	ba_createsprite gTeeterDanceMusicNoteSpriteTemplate, ANIM_ATTACKER, 2, 0, 0, -2
	ba_playsewithpan 0x00F4, SOUND_PAN_ATTACKER
	ba_delay 24
	ba_createsprite gTeeterDanceMusicNoteSpriteTemplate, ANIM_ATTACKER, 2, 0, -16, -2
	ba_playsewithpan 0x00F4, SOUND_PAN_ATTACKER
	ba_delay 24
	ba_createsprite gTeeterDanceMusicNoteSpriteTemplate, ANIM_ATTACKER, 2, 1, -8, -2
	ba_playsewithpan 0x00F4, SOUND_PAN_ATTACKER
	ba_delay 24
	ba_createsprite gTeeterDanceMusicNoteSpriteTemplate, ANIM_ATTACKER, 2, 2, 8, -2
	ba_playsewithpan 0x00F4, SOUND_PAN_ATTACKER
	ba_end
Move_MUD_SPORT:
	ba_loadspritegfx 0x275A
	ba_createvisualtask AnimTask_Splash, 2, 0, 6
	ba_delay 24
	ba_createsprite 0x08572DC8, ANIM_TARGET, 2, 0, -4, -16
	ba_createsprite 0x08572DC8, ANIM_TARGET, 2, 0, 4, -12
	ba_playsewithpan 0x00AF, SOUND_PAN_ATTACKER
	ba_delay 32
	ba_createsprite 0x08572DC8, ANIM_TARGET, 2, 0, -3, -12
	ba_createsprite 0x08572DC8, ANIM_TARGET, 2, 0, 5, -14
	ba_playsewithpan 0x00AF, SOUND_PAN_ATTACKER
	ba_delay 32
	ba_createsprite 0x08572DC8, ANIM_TARGET, 2, 0, -5, -18
	ba_createsprite 0x08572DC8, ANIM_TARGET, 2, 0, 3, -14
	ba_playsewithpan 0x00AF, SOUND_PAN_ATTACKER
	ba_delay 16
	ba_createsprite 0x08572DC8, ANIM_TARGET, 2, 1, 220, 60
	ba_waitplaysewithpan 0x007D, 0x00, 15
	ba_delay 2
	ba_createsprite 0x08572DC8, ANIM_TARGET, 2, 1, 60, 100
	ba_waitplaysewithpan 0x007D, 0x00, 25
	ba_delay 2
	ba_createsprite 0x08572DC8, ANIM_TARGET, 2, 1, 140, 55
	ba_waitplaysewithpan 0x007D, 0x00, 14
	ba_delay 2
	ba_createsprite 0x08572DC8, ANIM_TARGET, 2, 1, 180, 50
	ba_waitplaysewithpan 0x007D, 0x00, 10
	ba_delay 2
	ba_createsprite 0x08572DC8, ANIM_TARGET, 2, 1, 20, 90
	ba_waitplaysewithpan 0x007D, 0x00, 22
	ba_delay 2
	ba_createsprite 0x08572DC8, ANIM_TARGET, 2, 1, 90, 90
	ba_waitplaysewithpan 0x007D, 0x00, 22
	ba_delay 2
	ba_createsprite 0x08572DC8, ANIM_TARGET, 2, 1, 160, 60
	ba_waitplaysewithpan 0x007D, 0x00, 15
	ba_delay 2
	ba_createsprite 0x08572DC8, ANIM_TARGET, 2, 1, 30, 90
	ba_waitplaysewithpan 0x007D, 0x00, 22
	ba_delay 2
	ba_createsprite 0x08572DC8, ANIM_TARGET, 2, 1, 120, 60
	ba_waitplaysewithpan 0x007D, 0x00, 15
	ba_delay 2
	ba_createsprite 0x08572DC8, ANIM_TARGET, 2, 1, 200, 40
	ba_waitplaysewithpan 0x007D, 0x00, 10
	ba_end
Move_NEEDLE_ARM:
BattleAnimScript_0827CEBB: @ 0x0827CEBB
	ba_loadspritegfx 0x281A
	ba_loadspritegfx 0x2797
	ba_loadspritegfx 0x279F
	ba_loopsewithpan 0x00A6, SOUND_PAN_TARGET, 2, 16
	ba_createsprite 0x0856E46C, ANIM_TARGET, 2, 1, 0, 0, -32, 16
	ba_delay 2
	ba_createsprite 0x0856E46C, ANIM_TARGET, 2, 1, 0, 22, -22, 16
	ba_delay 2
	ba_createsprite 0x0856E46C, ANIM_TARGET, 2, 1, 0, 30, 0, 16
	ba_delay 2
	ba_createsprite 0x0856E46C, ANIM_TARGET, 2, 1, 0, 20, 20, 16
	ba_delay 2
	ba_createsprite 0x0856E46C, ANIM_TARGET, 2, 1, 0, 0, 28, 16
	ba_delay 2
	ba_createsprite 0x0856E46C, ANIM_TARGET, 2, 1, 0, -19, 19, 16
	ba_delay 2
	ba_createsprite 0x0856E46C, ANIM_TARGET, 2, 1, 0, -27, 0, 16
	ba_delay 2
	ba_createsprite 0x0856E46C, ANIM_TARGET, 2, 1, 0, -18, -18, 16
	ba_delay 2
	ba_createsprite 0x0856E46C, ANIM_TARGET, 2, 1, 0, 0, -25, 16
	ba_delay 2
	ba_createsprite 0x0856E46C, ANIM_TARGET, 2, 1, 0, 17, -17, 16
	ba_delay 2
	ba_createsprite 0x0856E46C, ANIM_TARGET, 2, 1, 0, 23, 0, 16
	ba_delay 2
	ba_createsprite 0x0856E46C, ANIM_TARGET, 2, 1, 0, 16, 16, 16
	ba_waitforvisualfinish
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 4, 0, 18, 1
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 3, 0, 0, 1, 1
	ba_createsprite 0x08571A7C, ANIM_TARGET, 4, 0, 0, 8, 1, 0
	ba_playsewithpan 0x007B, SOUND_PAN_TARGET
	ba_createsprite 0x0856E46C, ANIM_TARGET, 2, 1, 1, 0, -24, 10
	ba_createsprite 0x0856E46C, ANIM_TARGET, 2, 1, 1, 17, -17, 10
	ba_createsprite 0x0856E46C, ANIM_TARGET, 2, 1, 1, 24, 0, 10
	ba_createsprite 0x0856E46C, ANIM_TARGET, 2, 1, 1, 17, 17, 10
	ba_createsprite 0x0856E46C, ANIM_TARGET, 2, 1, 1, 0, 24, 10
	ba_createsprite 0x0856E46C, ANIM_TARGET, 2, 1, 1, -17, 17, 10
	ba_createsprite 0x0856E46C, ANIM_TARGET, 2, 1, 1, -24, 0, 10
	ba_createsprite 0x0856E46C, ANIM_TARGET, 2, 1, 1, -17, -17, 10
	ba_end
Move_SLACK_OFF:
	ba_loadspritegfx 0x272F
	ba_createvisualtask AnimTask_SlackOffSquish, 2, 0
	ba_playsewithpan 0x00ED, SOUND_PAN_ATTACKER
	ba_waitforvisualfinish
	ba_call BattleAnimScript_08285F66
	ba_waitforvisualfinish
	ba_end
Move_CRUSH_CLAW:
	ba_loadspritegfx 0x27B7
	ba_loadspritegfx 0x2737
	ba_loadspritegfx 0x27E0
	ba_monbg ANIM_TARGET
	ba_setalpha 12, 8
	ba_createsprite 0x0855A958, ANIM_ATTACKER, 2, 6, 4
	ba_delay 4
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 2, 0, 18, 1
	ba_createsprite 0x08572D1C, ANIM_TARGET, 2, -10, -10, 0
	ba_createsprite 0x08572D1C, ANIM_TARGET, 2, -10, 10, 0
	ba_playsewithpan 0x0088, SOUND_PAN_TARGET
	ba_delay 12
	ba_createsprite 0x08572D1C, ANIM_TARGET, 2, 10, -10, 1
	ba_createsprite 0x08572D1C, ANIM_TARGET, 2, 10, 10, 1
	ba_playsewithpan 0x0088, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_blendoff
	ba_clearmonbg ANIM_TARGET
	ba_end
Move_AROMATHERAPY:
	ba_playsewithpan 0x00CA, 0x00
	ba_loadspritegfx 0x27AF
	ba_loadspritegfx 0x27DB
	ba_loadspritegfx 0x2741
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 0, 1, 0, 0, 7, 0x33ED
	ba_delay 1
	ba_monbg ANIM_ATTACKER
	ba_delay 1
	ba_createsprite 0x0856E390, ANIM_ATTACKER, 0, 24, 16, 0, 2, 2, 0, 0
	ba_createsprite 0x0856E390, ANIM_ATTACKER, 66, 64, 24, 0, 3, 1, 1, 0
	ba_createsprite 0x0856E3A8, ANIM_ATTACKER, 0, 16, 24, 0, 2, 1, 0, 0
	ba_delay 20
	ba_createsprite 0x0856E390, ANIM_ATTACKER, 66, 48, 12, 0, 4, 3, 1, 0
	ba_createsprite 0x0856E390, ANIM_ATTACKER, 0, 100, 16, 0, 3, 2, 0, 0
	ba_createsprite 0x0856E390, ANIM_ATTACKER, 0, 74, 24, 180, 3, 2, 0, 0
	ba_delay 10
	ba_createsprite 0x0856E390, ANIM_ATTACKER, 66, 80, 30, 0, 4, 1, 1, 0
	ba_createsprite 0x0856E390, ANIM_ATTACKER, 0, 128, 12, 0, 3, 3, 0, 0
	ba_createsprite 0x0856E3A8, ANIM_ATTACKER, 0, 90, 16, 0, 2, 1, 0, 0
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_ATTACKER
	ba_delay 1
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 0, 1, 0, 7, 0, 0x33ED
	ba_delay 1
	ba_playsewithpan 0x00EF, SOUND_PAN_ATTACKER
	ba_createvisualtask sub_0815DF08, 2, 1
	ba_waitforvisualfinish
	ba_playsewithpan 0x00E4, SOUND_PAN_ATTACKER
	ba_createsprite gAromatherapySparkleSpriteTemplate, ANIM_ATTACKER, 16, -15, 0, 0, 0, 32, 60, 1
	ba_delay 8
	ba_createsprite gAromatherapySparkleSpriteTemplate, ANIM_ATTACKER, 16, 12, -5, 0, 0, 32, 60, 1
	ba_waitforvisualfinish
	ba_playsewithpan 0x0066, SOUND_PAN_ATTACKER
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 0, 43, 3, 10, 0, 0x33ED
	ba_createsprite gBlendThinRingExpandingSpriteTemplate, ANIM_ATTACKER, 16, 0, 0, 0, 1
	ba_waitforvisualfinish
	ba_end
Move_FAKE_TEARS:
	ba_loadspritegfx 0x27AB
	ba_loadspritegfx 0x27E1
	ba_loadspritegfx 0x2758
	ba_createvisualtask AnimTask_BlendParticle, 5, 0x27AB, 0, 4, 4, 0x7D6C
	ba_waitforvisualfinish
	ba_createvisualtask AnimTask_RockMonBackAndForth, 5, 0, 2, 1
	ba_loopsewithpan 0x00A7, SOUND_PAN_ATTACKER, 12, 4
	ba_delay 8
	ba_createsprite 0x08572CCC, ANIM_ATTACKER, 2, 0, 0
	ba_createsprite 0x08572CCC, ANIM_ATTACKER, 2, 0, 1
	ba_delay 8
	ba_createsprite 0x08572CCC, ANIM_ATTACKER, 2, 0, 2
	ba_createsprite 0x08572CCC, ANIM_ATTACKER, 2, 0, 3
	ba_delay 8
	ba_createsprite 0x08572CCC, ANIM_ATTACKER, 2, 0, 0
	ba_createsprite 0x08572CCC, ANIM_ATTACKER, 2, 0, 1
	ba_delay 8
	ba_createsprite 0x08572CCC, ANIM_ATTACKER, 2, 0, 2
	ba_createsprite 0x08572CCC, ANIM_ATTACKER, 2, 0, 3
	ba_waitforvisualfinish
	ba_end
Move_AIR_CUTTER:
	ba_loadspritegfx 0x2713
	ba_loadspritegfx 0x279A
	ba_loadspritegfx 0x2797
	ba_delay 0
	ba_monbg ANIM_DEF_PARTNER
	ba_setalpha 12, 8
	ba_delay 0
	ba_createvisualtask sub_08104540, 2, 32, -24, 1536, 2, 128
	ba_waitforvisualfinish
	ba_playsewithpan 0x0080, SOUND_PAN_TARGET
	ba_createsprite gAirCutterSliceSpriteTemplate, ANIM_ATTACKER, 2, 40, -32, 0, 2
	ba_delay 5
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 2, 0, 8, 1
	ba_createvisualtask AnimTask_ShakeMon2, 2, 3, 2, 0, 8, 1
	ba_waitforvisualfinish
	ba_blendoff
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_delay 0
	ba_end
Move_ODOR_SLEUTH:
	ba_monbg ANIM_TARGET
	ba_createvisualtask AnimTask_OdorSleuthMovement, 5
	ba_delay 24
	ba_createsprite 0x0855A958, ANIM_ATTACKER, 2, 3, 4
	ba_playsewithpan 0x00C1, SOUND_PAN_ATTACKER
	ba_delay 6
	ba_createsprite 0x0855A958, ANIM_ATTACKER, 2, 3, 4
	ba_playsewithpan 0x00C1, SOUND_PAN_ATTACKER
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_TARGET
	ba_delay 1
	ba_createsprite 0x08572E70, ANIM_ATTACKER, 2, 1, 3, 1, 0xFFFF, 16, 0xFFFF, 0
	ba_playsewithpan 0x00C0, SOUND_PAN_ATTACKER
	ba_end
Move_GRASS_WHISTLE:
	ba_loadspritegfx 0x2758
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 2, 0, 4, 0x33F2
	ba_waitforvisualfinish
	ba_createvisualtask sub_08103438, 2
	ba_waitforvisualfinish
	ba_panse_1B 0x00E7, SOUND_PAN_ATTACKER, SOUND_PAN_TARGET, 2, 0
	ba_createsprite gSingMusicNoteSpriteTemplate, ANIM_TARGET, 2, 7, 1, 0
	ba_delay 5
	ba_createsprite gSingMusicNoteSpriteTemplate, ANIM_TARGET, 2, 6, 1, 0
	ba_delay 5
	ba_createsprite gSingMusicNoteSpriteTemplate, ANIM_TARGET, 2, 1, 1, 0
	ba_delay 5
	ba_createsprite gSingMusicNoteSpriteTemplate, ANIM_TARGET, 2, 2, 1, 0
	ba_delay 5
	ba_createsprite gSingMusicNoteSpriteTemplate, ANIM_TARGET, 2, 3, 1, 0
	ba_delay 4
	ba_createsprite gSingMusicNoteSpriteTemplate, ANIM_TARGET, 2, 2, 1, 0
	ba_delay 4
	ba_createsprite gSingMusicNoteSpriteTemplate, ANIM_TARGET, 2, 5, 1, 0
	ba_delay 4
	ba_createsprite gSingMusicNoteSpriteTemplate, ANIM_TARGET, 2, 6, 1, 0
	ba_delay 4
	ba_createsprite gSingMusicNoteSpriteTemplate, ANIM_TARGET, 2, 2, 1, 0
	ba_delay 4
	ba_createsprite gSingMusicNoteSpriteTemplate, ANIM_TARGET, 2, 2, 1, 0
	ba_delay 4
	ba_createsprite gSingMusicNoteSpriteTemplate, ANIM_TARGET, 2, 1, 1, 0
	ba_delay 4
	ba_createsprite gSingMusicNoteSpriteTemplate, ANIM_TARGET, 2, 5, 1, 0
	ba_delay 4
	ba_waitforvisualfinish
	ba_createvisualtask sub_081034F0, 2
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 4, 4, 0, 0x33F2
	ba_waitforvisualfinish
	ba_end
Move_TICKLE:
	ba_loadspritegfx 0x27EA
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 2, 0, 0, 16, 0
	ba_waitforvisualfinish
	ba_createsprite gGlareEyeSpriteTemplate, ANIM_ATTACKER, 0, -16, -8
	ba_createsprite gGlareEyeSpriteTemplate, ANIM_ATTACKER, 0, 16, -8
	ba_playsewithpan 0x00D1, SOUND_PAN_ATTACKER
	ba_waitforvisualfinish
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 2, 0, 16, 0, 0
	ba_waitforvisualfinish
	ba_delay 20
	ba_createvisualtask AnimTask_SwayMon, 3, 0, 6, 1280, 3, 0
	ba_delay 12
	ba_createvisualtask AnimTask_RockMonBackAndForth, 3, 1, 6, 2
	ba_loopsewithpan 0x00A7, SOUND_PAN_TARGET, 8, 8
	ba_waitforvisualfinish
	ba_end
Move_WATER_SPOUT:
	ba_loadspritegfx 0x281C
	ba_loadspritegfx 0x27A4
	ba_monbg ANIM_DEF_PARTNER
	ba_setalpha 12, 8
	ba_createvisualtask sub_08108934, 5
	ba_playsewithpan 0x00A2, SOUND_PAN_ATTACKER
	ba_delay 44
	ba_playsewithpan 0x00E9, SOUND_PAN_ATTACKER
	ba_waitforvisualfinish
	ba_delay 16
	ba_createvisualtask sub_08108E18, 5
	ba_playsewithpan 0x00A3, SOUND_PAN_TARGET
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
Move_SHADOW_PUNCH:
	ba_loadspritegfx 0x2797
	ba_loadspritegfx 0x279F
	ba_fadetobg BG_GHOST
	ba_waitbgfadein
	ba_monbg ANIM_ATK_PARTNER
	ba_setalpha 9, 8
	ba_createvisualtask sub_080A848C, 2, 0, 13
	ba_playsewithpan 0x008F, SOUND_PAN_ATTACKER
	ba_delay 6
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 3, 0, 0, 1, 1
	ba_createsprite 0x08571A7C, ANIM_TARGET, 4, 0, 0, 8, 1, 0
	ba_playsewithpan 0x008B, SOUND_PAN_TARGET
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 3, 0, 6, 1
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_ATK_PARTNER
	ba_blendoff
	ba_restorebg
	ba_waitbgfadein
	ba_end
Move_EXTRASENSORY:
	ba_call BattleAnimScript_08286258
	ba_monbg ANIM_DEF_PARTNER
	ba_setalpha 12, 8
	ba_createvisualtask AnimTask_BlendMonInAndOut, 5, 0, 891, 12, 1, 1
	ba_createvisualtask sub_08110664, 5, 0
	ba_playsewithpan 0x00AA, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_createvisualtask AnimTask_BlendMonInAndOut, 5, 0, 891, 12, 1, 1
	ba_createvisualtask sub_08110664, 5, 1
	ba_playsewithpan 0x00AA, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_createvisualtask sub_08110884, 5, 0
	ba_createvisualtask sub_08110664, 5, 2
	ba_playsewithpan 0x00C0, SOUND_PAN_ATTACKER
	ba_waitforvisualfinish
	ba_blendoff
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_call BattleAnimScript_08286264
	ba_end
Move_AERIAL_ACE:
	ba_loadspritegfx 0x279A
	ba_monbg ANIM_TARGET
	ba_setalpha 12, 8
	ba_createvisualtask AnimTask_TranslateMonEllipticalRespectSide, 2, 0, 24, 6, 1, 5
	ba_createvisualtask sub_08117210, 2, 0, 4, 7, 3
	ba_createsprite gCuttingSliceSpriteTemplate, ANIM_ATTACKER, 2, 40, -32, 0
	ba_playsewithpan 0x00A0, SOUND_PAN_ATTACKER
	ba_delay 5
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 0, 3, 10, 1
	ba_createsprite 0x08572E70, ANIM_ATTACKER, 2, 31, 3, 1, 0, 10, 0, 0
	ba_playsewithpan 0x0088, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_TARGET
	ba_blendoff
	ba_end
Move_IRON_DEFENSE:
	ba_loopsewithpan 0x0066, SOUND_PAN_ATTACKER, 28, 2
	ba_createvisualtask AnimTask_MetallicShine, 5, 0, 0, 0
	ba_createsprite 0x08572E70, ANIM_ATTACKER, 2, 1, 8, 2, 0xFFFF, 14, 0xFFFF, 0
	ba_waitforvisualfinish
	ba_end
Move_BLOCK:
	ba_loadspritegfx 0x280A
	ba_createsprite 0x085AD714, ANIM_TARGET, 66
	ba_playsewithpan 0x00C1, SOUND_PAN_TARGET
	ba_end
Move_HOWL:
	ba_loadspritegfx 0x2745
	ba_createvisualtask AnimTask_DeepInhale, 2, 0
	ba_delay 12
	ba_call BattleAnimScript_0827E457
	ba_createvisualtask sub_08158CC8, 2, 0, 3
	ba_waitforvisualfinish
	ba_delay 30
	ba_end
Move_BULK_UP:
	ba_loadspritegfx 0x2766
	ba_createvisualtask sub_08105304, 2
	ba_playsewithpan 0x00C1, SOUND_PAN_ATTACKER
	ba_waitforvisualfinish
	ba_createsprite gBreathPuffSpriteTemplate, ANIM_ATTACKER, 2
	ba_loopsewithpan 0x00C1, SOUND_PAN_ATTACKER, 4, 2
	ba_waitforvisualfinish
	ba_end
Move_COVET:
	ba_loadspritegfx 0x27E2
	ba_loadspritegfx 0x27F0
	ba_createvisualtask AnimTask_RockMonBackAndForth, 5, 0, 2, 0
	ba_createsprite gCharmHeartSpriteTemplate, ANIM_ATTACKER, 3, 0, 20
	ba_playsewithpan 0x00D4, SOUND_PAN_ATTACKER
	ba_delay 15
	ba_createsprite gCharmHeartSpriteTemplate, ANIM_ATTACKER, 3, -20, 20
	ba_playsewithpan 0x00D4, SOUND_PAN_ATTACKER
	ba_delay 15
	ba_createsprite gCharmHeartSpriteTemplate, ANIM_ATTACKER, 3, 20, 20
	ba_playsewithpan 0x00D4, SOUND_PAN_ATTACKER
	ba_waitforvisualfinish
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 2, 0, 8, 1
	ba_loopsewithpan 0x00B0, SOUND_PAN_TARGET, 4, 3
	ba_end
Move_VOLT_TACKLE:
	ba_loadspritegfx 0x2711
	ba_loadspritegfx 0x27E4
	ba_loadspritegfx 0x27E5
	ba_monbg ANIM_ATTACKER
	ba_setalpha 12, 8
	ba_createvisualtask sub_08116E70, 10, 1, 0, 0, 8, 0
	ba_waitforvisualfinish
	ba_createsprite 0x08571588, ANIM_ATTACKER, 1
	ba_playsewithpan 0x00D5, SOUND_PAN_ATTACKER
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_ATTACKER
	ba_blendoff
	ba_delay 8
	ba_createvisualtask sub_0810B81C, 5, 0
	ba_playsewithpan 0x0076, SOUND_PAN_ATTACKER
	ba_waitforvisualfinish
	ba_createvisualtask sub_0810B81C, 5, 1
	ba_playsewithpan 0x0076, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_createvisualtask sub_0810B81C, 5, 2
	ba_playsewithpan 0x0076, SOUND_PAN_ATTACKER
	ba_waitforvisualfinish
	ba_createvisualtask sub_0810B81C, 5, 3
	ba_playsewithpan 0x0076, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_createvisualtask sub_0810B81C, 5, 4
	ba_playsewithpan 0x0076, SOUND_PAN_ATTACKER
	ba_delay 8
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 10, 0, 18, 1
	ba_playsewithpan 0x00B1, SOUND_PAN_TARGET
	ba_createsprite 0x08571570, ANIM_ATTACKER, 2, 1, 16, 16
	ba_delay 2
	ba_createsprite 0x08571570, ANIM_ATTACKER, 2, 1, -16, -16
	ba_delay 8
	ba_createvisualtask sub_0810B6AC, 5
	ba_waitforvisualfinish
	ba_createvisualtask AnimTask_ShakeMon2, 2, 0, 3, 0, 9, 1
	ba_playsewithpan 0x0077, SOUND_PAN_ATTACKER
	ba_createsprite 0x08571570, ANIM_ATTACKER, 2, 0, 16, 16
	ba_delay 2
	ba_createsprite 0x08571570, ANIM_ATTACKER, 2, 0, -16, -16
	ba_waitforvisualfinish
	ba_createvisualtask sub_08116E70, 10, 1, 0, 8, 0, 0
	ba_waitforvisualfinish
	ba_end
Move_WATER_SPORT:
	ba_loadspritegfx 0x281C
	ba_createvisualtask sub_08109134, 5
	ba_delay 8
	ba_playsewithpan 0x00A3, SOUND_PAN_ATTACKER
	ba_delay 44
	ba_playsewithpan 0x00A3, SOUND_PAN_ATTACKER
	ba_delay 44
	ba_playsewithpan 0x00A3, SOUND_PAN_ATTACKER
	ba_delay 44
	ba_panse_1B 0x00A3, SOUND_PAN_ATTACKER, SOUND_PAN_TARGET, 2, 0
	ba_end
Move_CALM_MIND:
	ba_loadspritegfx 0x27DB
	ba_monbg ANIM_ATK_PARTNER
	ba_createvisualtask sub_08116EB4, 5, 0, 0, 0, 16, 0
	ba_waitforvisualfinish
	ba_createvisualtask sub_08118034, 5, 1
	ba_waitforvisualfinish
	ba_createsprite gThinRingShrinkingSpriteTemplate, ANIM_ATTACKER, 40, 0, 0, 0, 0
	ba_playsewithpan 0x00B8, SOUND_PAN_ATTACKER
	ba_delay 14
	ba_createsprite gThinRingShrinkingSpriteTemplate, ANIM_ATTACKER, 40, 0, 0, 0, 0
	ba_playsewithpan 0x00B8, SOUND_PAN_ATTACKER
	ba_delay 14
	ba_createsprite gThinRingShrinkingSpriteTemplate, ANIM_ATTACKER, 40, 0, 0, 0, 0
	ba_playsewithpan 0x00B8, SOUND_PAN_ATTACKER
	ba_waitforvisualfinish
	ba_createvisualtask sub_08118034, 5, 0
	ba_waitforvisualfinish
	ba_createvisualtask sub_08116EB4, 5, 0, 0, 16, 0, 0
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_ATK_PARTNER
	ba_end
Move_LEAF_BLADE:
	ba_loadspritegfx 0x274F
	ba_loadspritegfx 0x282D
	ba_createvisualtask sub_08100810, 5
	ba_delay 2
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 2, 0, 8, 1
	ba_playsewithpan 0x0080, SOUND_PAN_TARGET
	ba_delay 50
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 2, 0, 8, 1
	ba_playsewithpan 0x0080, SOUND_PAN_TARGET
	ba_delay 50
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 2, 0, 8, 1
	ba_playsewithpan 0x0080, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_monbg ANIM_TARGET
	ba_setalpha 12, 8
	ba_delay 12
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 8, 0, 18, 1
	ba_createsprite 0x08572FB4, ANIM_TARGET, 2, 0, 0, 1, 36
	ba_playsewithpan 0x00C0, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_TARGET
	ba_blendoff
	ba_end
Move_DRAGON_DANCE:
	ba_loadspritegfx 0x2809
	ba_monbg ANIM_ATTACKER
	ba_monbgprio_28 ANIM_ATTACKER
	ba_delay 1
	ba_createvisualtask sub_08113C38, 5
	ba_playsewithpan 0x00CB, SOUND_PAN_ATTACKER
	ba_delay 8
	ba_createvisualtask sub_080A757C, 5, 0x2809, 0x4C00, 14, 0, 3
	ba_createsprite 0x08572B7C, ANIM_ATTACKER, 2, 0
	ba_createsprite 0x08572B7C, ANIM_ATTACKER, 2, 43
	ba_createsprite 0x08572B7C, ANIM_ATTACKER, 2, 85
	ba_createsprite 0x08572B7C, ANIM_ATTACKER, 2, 128
	ba_createsprite 0x08572B7C, ANIM_ATTACKER, 2, 170
	ba_createsprite 0x08572B7C, ANIM_ATTACKER, 2, 213
	ba_delay 30
	ba_playsewithpan 0x00CB, SOUND_PAN_ATTACKER
	ba_delay 30
	ba_playsewithpan 0x00CB, SOUND_PAN_ATTACKER
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_ATTACKER
	ba_delay 1
	ba_end
Move_SHOCK_WAVE:
	ba_loadspritegfx 0x27E3
	ba_loadspritegfx 0x27E4
	ba_loadspritegfx 0x2711
	ba_loadspritegfx 0x2735
	ba_monbg ANIM_ATTACKER
	ba_setalpha 12, 8
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 2, 0, 4, 0
	ba_waitforvisualfinish
	ba_createvisualtask sub_0810B34C, 2, 0, 20, 0, 2
	ba_playsewithpan 0x00D5, SOUND_PAN_ATTACKER
	ba_delay 12
	ba_createsprite 0x085715FC, ANIM_ATTACKER, 2
	ba_delay 30
	ba_createvisualtask sub_0810BAEC, 5
	ba_delay 12
	ba_waitforvisualfinish
	ba_createvisualtask sub_0810BDAC, 5
	ba_playsewithpan 0x00DD, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 0, 6, 18, 1
	ba_createvisualtask sub_08116E70, 5, 1, 3, 16, 0, 0x7FFF
	ba_createvisualtask sub_08116E70, 5, 4, 0, 16, 16, 0
	ba_delay 4
	ba_createvisualtask sub_08116E70, 5, 4, 0, 0, 0, 0
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_ATTACKER
	ba_blendoff
	ba_end
Move_HARDEN:
	ba_loopsewithpan 0x0078, SOUND_PAN_ATTACKER, 28, 2
	ba_createvisualtask AnimTask_MetallicShine, 5, 0, 0, 0
	ba_waitforvisualfinish
	ba_end
Move_BELLY_DRUM:
	ba_loadspritegfx 0x2758
	ba_loadspritegfx 0x27D1
	ba_createvisualtask sub_08103438, 2
	ba_waitforvisualfinish
	ba_call BattleAnimScript_0827DB32
	ba_createsprite gBellyDrumMusicNoteSpriteTemplate, ANIM_ATTACKER, 2, 0, 0, 0, 0
	ba_playsewithpan 0x00B9, SOUND_PAN_ATTACKER
	ba_delay 15
	ba_call BattleAnimScript_0827DB17
	ba_createsprite gBellyDrumMusicNoteSpriteTemplate, ANIM_ATTACKER, 2, 1, 1, 1, 0
	ba_playsewithpan 0x00B9, SOUND_PAN_ATTACKER
	ba_delay 15
	ba_call BattleAnimScript_0827DB32
	ba_createsprite gBellyDrumMusicNoteSpriteTemplate, ANIM_ATTACKER, 2, 0, 3, 3, 128
	ba_playsewithpan 0x00B9, SOUND_PAN_ATTACKER
	ba_delay 7
	ba_call BattleAnimScript_0827DB17
	ba_createsprite gBellyDrumMusicNoteSpriteTemplate, ANIM_ATTACKER, 2, 1, 2, 0, 128
	ba_playsewithpan 0x00B9, SOUND_PAN_ATTACKER
	ba_delay 7
	ba_call BattleAnimScript_0827DB32
	ba_createsprite gBellyDrumMusicNoteSpriteTemplate, ANIM_ATTACKER, 2, 0, 1, 1, 0
	ba_playsewithpan 0x00B9, SOUND_PAN_ATTACKER
	ba_delay 7
	ba_call BattleAnimScript_0827DB17
	ba_createsprite gBellyDrumMusicNoteSpriteTemplate, ANIM_ATTACKER, 2, 1, 0, 3, 0
	ba_playsewithpan 0x00B9, SOUND_PAN_ATTACKER
	ba_waitforvisualfinish
	ba_createvisualtask sub_081034F0, 2
	ba_waitforvisualfinish
	ba_end
BattleAnimScript_0827DB17: @ 0x0827DB17
	ba_createsprite gBellyDrumImpactSpriteTemplate, ANIM_ATTACKER, 3, 0
	ba_createvisualtask AnimTask_ShakeMon, 2, 0, 0, 8, 2, 1
	ba_return
BattleAnimScript_0827DB32: @ 0x0827DB32
	ba_createsprite gBellyDrumImpactSpriteTemplate, ANIM_ATTACKER, 3, 1
	ba_createvisualtask AnimTask_ShakeMon, 2, 0, 0, 8, 2, 1
	ba_return
Move_MIND_READER:
	ba_loadspritegfx 0x27CD
	ba_loadspritegfx 0x27CE
	ba_loadspritegfx 0x27CF
	ba_monbg ANIM_DEF_PARTNER
	ba_playsewithpan 0x00C4, SOUND_PAN_TARGET
	ba_createsprite 0x085ACE84, ANIM_ATTACKER, 5, 0, 0, 1, 0
	ba_createsprite 0x085ACE9C, ANIM_ATTACKER, 5
	ba_delay 40
	ba_playsewithpan 0x00C0, SOUND_PAN_TARGET
	ba_createvisualtask sub_08116254, 2, 1, 1, 2, 0, 10, 0
	ba_call BattleAnimScript_0827DB94
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_end
BattleAnimScript_0827DB94: @ 0x0827DB94
	ba_createsprite 0x085ACEB4, ANIM_ATTACKER, 4, 70, 0, 6
	ba_createsprite 0x085ACEB4, ANIM_ATTACKER, 4, 40, 40, 6
	ba_createsprite 0x085ACEB4, ANIM_ATTACKER, 4, 10, -60, 6
	ba_createsprite 0x085ACEB4, ANIM_ATTACKER, 4, -50, -40, 6
	ba_createsprite 0x085ACEB4, ANIM_ATTACKER, 4, -40, 40, 6
	ba_createsprite 0x085ACEB4, ANIM_ATTACKER, 4, 50, -50, 6
	ba_delay 2
	ba_createsprite 0x085ACEB4, ANIM_ATTACKER, 4, 50, -30, 6
	ba_createsprite 0x085ACEB4, ANIM_ATTACKER, 4, 60, 10, 6
	ba_createsprite 0x085ACEB4, ANIM_ATTACKER, 4, 0, 60, 6
	ba_createsprite 0x085ACEB4, ANIM_ATTACKER, 4, 0, -40, 6
	ba_createsprite 0x085ACEB4, ANIM_ATTACKER, 4, -60, 20, 6
	ba_createsprite 0x085ACEB4, ANIM_ATTACKER, 4, -60, -30, 6
	ba_delay 2
	ba_createsprite 0x085ACEB4, ANIM_ATTACKER, 4, -50, 50, 6
	ba_createsprite 0x085ACEB4, ANIM_ATTACKER, 4, -60, 20, 6
	ba_createsprite 0x085ACEB4, ANIM_ATTACKER, 4, -40, -40, 6
	ba_createsprite 0x085ACEB4, ANIM_ATTACKER, 4, 20, -60, 6
	ba_createsprite 0x085ACEB4, ANIM_ATTACKER, 4, 50, -50, 6
	ba_createsprite 0x085ACEB4, ANIM_ATTACKER, 4, 35, 40, 6
	ba_delay 2
	ba_return
Move_ICE_PUNCH:
	ba_monbg ANIM_DEF_PARTNER
	ba_setalpha 12, 8
	ba_loadspritegfx 0x279D
	ba_loadspritegfx 0x2797
	ba_loadspritegfx 0x279F
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 1, 0, 7, 0
	ba_createvisualtask sub_08116E70, 10, 4, 2, 0, 9, 0x7F4C
	ba_delay 20
	ba_playsewithpan 0x0081, SOUND_PAN_TARGET
	ba_createsprite 0x085716CC, ANIM_ATTACKER, 2, 0
	ba_createsprite 0x085716CC, ANIM_ATTACKER, 2, 64
	ba_createsprite 0x085716CC, ANIM_ATTACKER, 2, 128
	ba_createsprite 0x085716CC, ANIM_ATTACKER, 2, 192
	ba_delay 5
	ba_createsprite 0x085716B4, ANIM_ATTACKER, 2, 32
	ba_createsprite 0x085716B4, ANIM_ATTACKER, 2, 96
	ba_createsprite 0x085716B4, ANIM_ATTACKER, 2, 160
	ba_createsprite 0x085716B4, ANIM_ATTACKER, 2, 224
	ba_delay 17
	ba_createsprite 0x08571A7C, ANIM_ATTACKER, 4, 0, -10, 8, 1, 0
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 3, 0, -10, 1, 1
	ba_playsewithpan 0x008B, SOUND_PAN_TARGET
	ba_delay 2
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 0, 5, 3, 1
	ba_waitforvisualfinish
	ba_delay 15
	ba_call BattleAnimScript_08285CA7
	ba_delay 5
	ba_createvisualtask sub_08116E70, 10, 4, 2, 9, 0, 0x7F4C
	ba_waitforvisualfinish
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 0, 7, 0, 0
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
Move_REST:
	ba_playsewithpan 0x00C5, SOUND_PAN_ATTACKER
	ba_loadspritegfx 0x27F4
	ba_createsprite gSleepZSpriteTemplate, ANIM_ATTACKER, 2, 4, -10, 16, 0, 0
	ba_delay 20
	ba_createsprite gSleepZSpriteTemplate, ANIM_ATTACKER, 2, 4, -10, 16, 0, 0
	ba_delay 20
	ba_createsprite gSleepZSpriteTemplate, ANIM_ATTACKER, 2, 4, -10, 16, 0, 0
	ba_waitforvisualfinish
	ba_end
Move_CONFUSION:
	ba_monbg ANIM_DEF_PARTNER
	ba_call BattleAnimScript_08286258
	ba_setalpha 8, 8
	ba_createvisualtask AnimTask_ShakeMon2, 2, 0, 1, 0, 10, 1
	ba_createvisualtask sub_08116254, 2, 2, 0, 2, 0, 8, 0x7FFF
	ba_waitforvisualfinish
	ba_playsewithpan 0x00B8, SOUND_PAN_TARGET
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 3, 0, 15, 1
	ba_createvisualtask AnimTask_ScaleMonAndRestore, 5, -4, -4, 15, 1, 1
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_delay 1
	ba_call BattleAnimScript_08286264
	ba_end
Move_PSYCHIC:
	ba_monbg ANIM_DEF_PARTNER
	ba_call BattleAnimScript_08286258
	ba_setalpha 8, 8
	ba_createvisualtask AnimTask_ShakeMon2, 2, 0, 1, 0, 10, 1
	ba_createvisualtask sub_08116254, 2, 2, 0, 2, 0, 8, 767
	ba_waitforvisualfinish
	ba_loopsewithpan 0x00B8, SOUND_PAN_TARGET, 10, 3
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 5, 0, 15, 1
	ba_createvisualtask AnimTask_ScaleMonAndRestore, 5, -6, -6, 15, 1, 1
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_delay 1
	ba_call BattleAnimScript_08286264
	ba_end
Move_FUTURE_SIGHT:
	ba_goto BattleAnimScript_0827DE82
BattleAnimScript_0827DE79: @ 0x0827DE79
	ba_waitforvisualfinish
	ba_delay 1
	ba_call BattleAnimScript_08286264
	ba_end
BattleAnimScript_0827DE82: @ 0x0827DE82
	ba_monbg ANIM_ATK_PARTNER
	ba_playsewithpan 0x00BD, SOUND_PAN_ATTACKER
	ba_call BattleAnimScript_08286258
	ba_setalpha 8, 8
	ba_playsewithpan 0x00B8, SOUND_PAN_ATTACKER
	ba_createvisualtask sub_08116254, 2, 2, 0, 2, 0, 8, 0x7FFF
	ba_createvisualtask AnimTask_ScaleMonAndRestore, 5, -4, -4, 15, 0, 1
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_ATK_PARTNER
	ba_blendoff
	ba_goto BattleAnimScript_0827DE79
Move_THUNDER:
	ba_loadspritegfx 0x2735
	ba_fadetobg BG_THUNDER
	ba_waitbgfadeout
	ba_createvisualtask sub_08117EB0, 5, -256, 0, 1, 0xFFFF
	ba_waitbgfadein
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 2, 0, 16, 0
	ba_delay 16
	ba_createvisualtask sub_08116760, 2, 257, 257, 257
	ba_playsewithpan 0x008A, SOUND_PAN_TARGET
	ba_delay 1
	ba_createsprite gBattleAnimSpriteTemplate_ElectricSpark, ANIM_TARGET, 2, 16, -36
	ba_delay 1
	ba_createsprite gBattleAnimSpriteTemplate_ElectricSpark, ANIM_TARGET, 2, 16, -20
	ba_delay 1
	ba_createsprite gBattleAnimSpriteTemplate_ElectricSpark, ANIM_TARGET, 2, 16, 12
	ba_delay 20
	ba_createsprite gBattleAnimSpriteTemplate_ElectricSpark, ANIM_TARGET, 6, -16, -32
	ba_playsewithpan 0x008A, SOUND_PAN_TARGET
	ba_delay 1
	ba_createsprite gBattleAnimSpriteTemplate_ElectricSpark, ANIM_TARGET, 6, -16, -16
	ba_delay 1
	ba_createsprite gBattleAnimSpriteTemplate_ElectricSpark, ANIM_TARGET, 6, -16, 16
	ba_playsewithpan 0x008A, SOUND_PAN_TARGET
	ba_delay 5
	ba_createvisualtask sub_08116760, 2, 257, 257, 257
	ba_delay 1
	ba_createsprite gBattleAnimSpriteTemplate_ElectricSpark, ANIM_TARGET, 2, 24, -32
	ba_delay 1
	ba_createsprite gBattleAnimSpriteTemplate_ElectricSpark, ANIM_TARGET, 2, 24, -16
	ba_delay 1
	ba_createsprite gBattleAnimSpriteTemplate_ElectricSpark, ANIM_TARGET, 2, 24, 16
	ba_delay 30
	ba_createvisualtask sub_08116760, 2, 257, 257, 257
	ba_delay 5
	ba_createvisualtask sub_08116760, 2, 257, 257, 257
	ba_delay 1
	ba_createsprite gBattleAnimSpriteTemplate_ElectricSpark, ANIM_TARGET, 2, 0, -32
	ba_playsewithpan 0x00DD, SOUND_PAN_TARGET
	ba_delay 1
	ba_createsprite gBattleAnimSpriteTemplate_ElectricSpark, ANIM_TARGET, 2, 0, -16
	ba_delay 1
	ba_createsprite gBattleAnimSpriteTemplate_ElectricSpark, ANIM_TARGET, 2, 0, 16
	ba_delay 10
	ba_createvisualtask sub_08116760, 2, 257, 257, 257
	ba_delay 1
	ba_createvisualtask sub_0810A8E4, 2, 30, 3, 1, 0
	ba_delay 2
	ba_createvisualtask sub_08116760, 2, 257, 257, 257
	ba_delay 1
	ba_createsprite 0x08572E58, ANIM_TARGET, 2, 1, 2, 16, 0, 0
	ba_waitforvisualfinish
	ba_restorebg
	ba_waitbgfadeout
	ba_setarg 0x07, 0xFFFF
	ba_waitbgfadein
	ba_end
Move_THUNDER_PUNCH:
	ba_loadspritegfx 0x2797
	ba_loadspritegfx 0x279F
	ba_loadspritegfx 0x2735
	ba_monbg ANIM_TARGET
	ba_setalpha 12, 8
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 2, 0, 16, 0
	ba_waitforvisualfinish
	ba_playsewithpan 0x008B, SOUND_PAN_TARGET
	ba_createsprite 0x08571A7C, ANIM_TARGET, 4, 0, 0, 8, 1, 0
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 3, 0, 0, 1, 1
	ba_delay 1
	ba_createvisualtask sub_08116760, 2, 257, 257, 257
	ba_delay 1
	ba_createsprite gBattleAnimSpriteTemplate_ElectricSpark, ANIM_TARGET, 2, 0, -48
	ba_delay 1
	ba_createsprite gBattleAnimSpriteTemplate_ElectricSpark, ANIM_ATTACKER, 2, 0, -16
	ba_delay 1
	ba_createsprite gBattleAnimSpriteTemplate_ElectricSpark, ANIM_ATTACKER, 2, 0, 16
	ba_delay 1
	ba_playsewithpan 0x00DD, SOUND_PAN_TARGET
	ba_createvisualtask sub_08116760, 2, 257, 257, 257
	ba_delay 2
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 0, 3, 15, 1
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 3, 0, 0, 1, 2
	ba_delay 1
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 2, 16, 0, 0
	ba_delay 20
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_TARGET
	ba_blendoff
	ba_end
Move_SACRED_FIRE:
	ba_loadspritegfx 0x2731
	ba_loadspritegfx 0x2733
	ba_loopsewithpan 0x0095, SOUND_PAN_ATTACKER, 7, 5
	ba_createsprite 0x0857100C, ANIM_ATTACKER, 2, -32, 0, 50, 5, -2, 0
	ba_delay 1
	ba_createsprite 0x0857100C, ANIM_ATTACKER, 66, -20, -10, 50, 5, 0xFFFF, 0xFFFF
	ba_delay 1
	ba_createsprite 0x0857100C, ANIM_ATTACKER, 66, 0, -16, 50, 5, 0, 0xFFFF
	ba_delay 1
	ba_createsprite 0x0857100C, ANIM_ATTACKER, 66, 20, -10, 50, 5, 1, 0xFFFF
	ba_delay 1
	ba_createsprite 0x0857100C, ANIM_ATTACKER, 2, 32, 0, 50, 5, 2, 0
	ba_delay 1
	ba_createsprite 0x0857100C, ANIM_ATTACKER, 2, 20, 10, 50, 5, 1, 1
	ba_delay 1
	ba_createvisualtask sub_08116760, 2, 257, 257, 257
	ba_delay 1
	ba_createsprite 0x0857100C, ANIM_ATTACKER, 2, 0, 16, 50, 5, 0, 1
	ba_delay 1
	ba_createsprite 0x0857100C, ANIM_ATTACKER, 2, -20, 10, 50, 5, 0xFFFF, 1
	ba_createvisualtask sub_08116760, 2, 257, 257, 257
	ba_delay 1
	ba_waitforvisualfinish
	ba_playsewithpan 0x0096, SOUND_PAN_TARGET
	ba_createsprite 0x08570FDC, ANIM_TARGET, 2, -16, 0, 70, 16, 0, 1
	ba_delay 10
	ba_playsewithpan 0x0096, SOUND_PAN_TARGET
	ba_createsprite 0x08570FDC, ANIM_TARGET, 2, 0, 0, 70, 16, 0, 1
	ba_delay 10
	ba_playsewithpan 0x0096, SOUND_PAN_TARGET
	ba_createsprite 0x08570FDC, ANIM_TARGET, 2, 16, 0, 80, 16, 0, 1
	ba_delay 1
	ba_createvisualtask sub_08116760, 2, 257, 257, 257
	ba_delay 1
	ba_waitforvisualfinish
	ba_createvisualtask sub_08116760, 2, 257, 257, 257
	ba_delay 1
	ba_playsewithpan 0x0091, SOUND_PAN_TARGET
	ba_createsprite 0x08570FF4, ANIM_TARGET, 2, 0, 0, 30, 30, 0xFFFF, 0
	ba_delay 1
	ba_createsprite 0x08570FF4, ANIM_TARGET, 2, 0, 0, 30, 30, 0, 1
	ba_delay 1
	ba_createsprite 0x08570FF4, ANIM_TARGET, 2, 0, 0, 30, 30, 0xFFFF, 0xFFFF
	ba_delay 1
	ba_createsprite 0x08570FF4, ANIM_TARGET, 2, 0, 0, 30, 30, 2, 1
	ba_delay 1
	ba_createsprite 0x08570FF4, ANIM_TARGET, 2, 0, 0, 30, 30, 1, 0xFFFF
	ba_delay 1
	ba_createsprite 0x08570FF4, ANIM_TARGET, 2, 0, 0, 30, 30, 0xFFFF, 1
	ba_delay 1
	ba_createsprite 0x08570FF4, ANIM_TARGET, 2, 0, 0, 30, 30, 1, -2
	ba_delay 1
	ba_createsprite 0x08570FF4, ANIM_TARGET, 2, 0, 0, 30, 30, 3, 1
	ba_waitforvisualfinish
	ba_end
Move_SCRATCH:
	ba_loadspritegfx 0x2799
	ba_monbg ANIM_TARGET
	ba_setalpha 12, 8
	ba_playsewithpan 0x009B, SOUND_PAN_TARGET
	ba_createsprite 0x085ACE28, ANIM_ATTACKER, 2, 0, 0, 1, 0
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 3, 0, 6, 1
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_TARGET
	ba_blendoff
	ba_waitforvisualfinish
	ba_end
Move_DRAGON_BREATH:
	ba_loadspritegfx 0x272D
	ba_monbg ANIM_DEF_PARTNER
	ba_monbgprio_28 ANIM_TARGET
	ba_loopsewithpan 0x0090, SOUND_PAN_ATTACKER, 7, 7
	ba_createsprite 0x08572AD8, ANIM_TARGET, 2, 0, 0, 0, 0, 20
	ba_delay 2
	ba_createsprite 0x08572AD8, ANIM_TARGET, 2, 0, 0, 0, 0, 20
	ba_delay 2
	ba_createvisualtask sub_08116E70, 10, 4, 1, 0, 9, 31
	ba_createsprite 0x08572AD8, ANIM_TARGET, 2, 0, 0, 0, 0, 20
	ba_delay 2
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 2, 0, 21, 1
	ba_createsprite 0x08572AD8, ANIM_TARGET, 2, 0, 0, 0, 0, 20
	ba_delay 2
	ba_createsprite 0x08572AD8, ANIM_TARGET, 2, 0, 0, 0, 0, 20
	ba_delay 2
	ba_createsprite 0x08572AD8, ANIM_TARGET, 2, 0, 0, 0, 0, 20
	ba_delay 2
	ba_createsprite 0x08572AD8, ANIM_TARGET, 2, 0, 0, 0, 0, 20
	ba_delay 2
	ba_createsprite 0x08572AD8, ANIM_TARGET, 2, 0, 0, 0, 0, 20
	ba_delay 2
	ba_createsprite 0x08572AD8, ANIM_TARGET, 2, 0, 0, 0, 0, 20
	ba_delay 2
	ba_createsprite 0x08572AD8, ANIM_TARGET, 2, 0, 0, 0, 0, 20
	ba_delay 2
	ba_createsprite 0x08572AD8, ANIM_TARGET, 2, 0, 0, 0, 0, 20
	ba_waitforvisualfinish
	ba_createvisualtask sub_08116E70, 10, 4, 1, 9, 0, 31
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_end
Move_ROAR:
	ba_loadspritegfx 0x2745
	ba_monbg ANIM_ATTACKER
	ba_monbgprio_28 ANIM_ATTACKER
	ba_setalpha 8, 8
	ba_createvisualtask sub_08158DD8, 2, 0, 2
	ba_createvisualtask AnimTask_ScaleMonAndRestore, 5, -5, -5, 10, 0, 1
	ba_call BattleAnimScript_0827E457
	ba_delay 20
	ba_createvisualtask sub_080D5634, 5, 1, 2
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_ATTACKER
	ba_blendoff
	ba_waitforvisualfinish
	ba_createvisualtask sub_08158FB4, 5
	ba_waitforvisualfinish
	ba_end
BattleAnimScript_0827E457: @ 0x0827E457
	ba_createsprite 0x085AD5DC, ANIM_ATTACKER, 2, 24, -8, 0
	ba_createsprite 0x085AD5DC, ANIM_ATTACKER, 2, 24, 0, 2
	ba_createsprite 0x085AD5DC, ANIM_ATTACKER, 2, 24, 8, 1
	ba_delay 15
	ba_createsprite 0x085AD5DC, ANIM_ATTACKER, 2, 24, -8, 0
	ba_createsprite 0x085AD5DC, ANIM_ATTACKER, 2, 24, 0, 2
	ba_createsprite 0x085AD5DC, ANIM_ATTACKER, 2, 24, 8, 1
	ba_return
Move_GROWL:
	ba_loadspritegfx 0x2745
	ba_createvisualtask sub_08158DD8, 2, 0, 255
	ba_call BattleAnimScript_0827E457
	ba_delay 10
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 1, 0, 9, 1
	ba_createvisualtask AnimTask_ShakeMon2, 2, 3, 1, 0, 9, 1
	ba_waitforvisualfinish
	ba_createvisualtask sub_08158FB4, 5
	ba_waitforvisualfinish
	ba_end
Move_SNORE:
	ba_loadspritegfx 0x27D5
	ba_monbg ANIM_ATK_PARTNER
	ba_setalpha 8, 8
	ba_call BattleAnimScript_0827E502
	ba_delay 30
	ba_call BattleAnimScript_0827E502
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_ATK_PARTNER
	ba_blendoff
	ba_end
BattleAnimScript_0827E502: @ 0x0827E502
	ba_playsewithpan 0x00C5, SOUND_PAN_ATTACKER
	ba_createvisualtask AnimTask_ScaleMonAndRestore, 5, -7, -7, 7, 0, 1
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 4, 0, 7, 1
	ba_createsprite 0x08572EBC, ANIM_ATTACKER, 2, 6, 1, 14, 0, 0
	ba_createsprite gSnoreZSpriteTemplate, ANIM_ATTACKER, 2, 0, 0, -42, -38, 24, 0, 0
	ba_createsprite gSnoreZSpriteTemplate, ANIM_ATTACKER, 2, 0, 0, 0, -42, 24, 0, 0
	ba_createsprite gSnoreZSpriteTemplate, ANIM_ATTACKER, 2, 0, 0, 42, -38, 24, 0, 0
	ba_return
Move_LIGHT_SCREEN:
	ba_loadspritegfx 0x2756
	ba_loadspritegfx 0x27B6
	ba_setalpha 0, 16
	ba_waitplaysewithpan 0x00CF, SOUND_PAN_ATTACKER, 15
	ba_createsprite 0x08572144, ANIM_ATTACKER, 1, 40, 0, 0x27B6
	ba_delay 10
	ba_call BattleAnimScript_0827E5A0
	ba_waitforvisualfinish
	ba_delay 1
	ba_blendoff
	ba_end
BattleAnimScript_0827E5A0: @ 0x0827E5A0
	ba_createsprite 0x08572208, ANIM_ATTACKER, 2, 23, 0, 0, 1
	ba_delay 6
	ba_createsprite 0x08572208, ANIM_ATTACKER, 2, 31, -8, 0, 1
	ba_delay 5
	ba_createsprite 0x08572208, ANIM_ATTACKER, 2, 30, 20, 0, 1
	ba_delay 7
	ba_createsprite 0x08572208, ANIM_ATTACKER, 2, 10, -15, 0, 1
	ba_delay 6
	ba_createsprite 0x08572208, ANIM_ATTACKER, 2, 20, 10, 0, 1
	ba_delay 6
	ba_createsprite 0x08572208, ANIM_ATTACKER, 2, 10, 18, 0, 1
	ba_return
Move_MIRROR_COAT:
	ba_loadspritegfx 0x2756
	ba_loadspritegfx 0x27B8
	ba_setalpha 0, 16
	ba_createsprite 0x08572174, ANIM_ATTACKER, 1, 40, 0, 0x27B8
	ba_delay 10
	ba_playsewithpan 0x00CF, SOUND_PAN_ATTACKER
	ba_call BattleAnimScript_0827E5A0
	ba_waitforvisualfinish
	ba_delay 1
	ba_blendoff
	ba_end
Move_REFLECT:
	ba_loadspritegfx 0x2757
	ba_loadspritegfx 0x27B7
	ba_setalpha 0, 16
	ba_waitplaysewithpan 0x00CF, SOUND_PAN_ATTACKER, 15
	ba_createsprite 0x0857215C, ANIM_ATTACKER, 1, 40, 0, 0x27B7
	ba_delay 20
	ba_createsprite 0x085721D8, ANIM_ATTACKER, 2, 30, 0, 0, 1
	ba_delay 7
	ba_createsprite 0x085721D8, ANIM_ATTACKER, 2, 19, -12, 0, 1
	ba_delay 7
	ba_createsprite 0x085721D8, ANIM_ATTACKER, 2, 10, 20, 0, 1
	ba_waitforvisualfinish
	ba_delay 1
	ba_blendoff
	ba_end
Move_BARRIER:
	ba_loadspritegfx 0x27B9
	ba_setalpha 0, 16
	ba_waitplaysewithpan 0x00D0, SOUND_PAN_ATTACKER, 15
	ba_createsprite 0x0857218C, ANIM_ATTACKER, 3, 40, 0, 0x27B9
	ba_waitforvisualfinish
	ba_delay 1
	ba_blendoff
	ba_end
Move_BUBBLE:
	ba_loadspritegfx 0x27A2
	ba_loadspritegfx 0x27AB
	ba_monbg ANIM_TARGET
	ba_setalpha 12, 8
	ba_delay 1
	ba_createsprite gBubbleSpriteTemplate, ANIM_ATTACKER, 2, 18, 0, 15, -15, 10, 128, 100
	ba_playsewithpan 0x007C, SOUND_PAN_ATTACKER
	ba_waitplaysewithpan 0x007D, SOUND_PAN_TARGET, 100
	ba_delay 6
	ba_createsprite gBubbleSpriteTemplate, ANIM_ATTACKER, 2, 18, 0, 35, 37, 40, 128, 100
	ba_playsewithpan 0x007C, SOUND_PAN_ATTACKER
	ba_waitplaysewithpan 0x007D, SOUND_PAN_TARGET, 100
	ba_delay 6
	ba_createsprite gBubbleSpriteTemplate, ANIM_ATTACKER, 2, 18, 0, 10, -37, 30, 128, 100
	ba_playsewithpan 0x007C, SOUND_PAN_ATTACKER
	ba_waitplaysewithpan 0x007D, SOUND_PAN_TARGET, 100
	ba_delay 6
	ba_createsprite gBubbleSpriteTemplate, ANIM_ATTACKER, 2, 18, 0, 30, 10, 15, 128, 100
	ba_playsewithpan 0x007C, SOUND_PAN_ATTACKER
	ba_waitplaysewithpan 0x007D, SOUND_PAN_TARGET, 100
	ba_delay 6
	ba_createsprite gBubbleSpriteTemplate, ANIM_ATTACKER, 2, 18, 0, 20, 33, 20, 128, 100
	ba_playsewithpan 0x007C, SOUND_PAN_ATTACKER
	ba_waitplaysewithpan 0x007D, SOUND_PAN_TARGET, 100
	ba_delay 6
	ba_createsprite gBubbleSpriteTemplate, ANIM_ATTACKER, 2, 18, 0, 25, -30, 10, 128, 100
	ba_playsewithpan 0x007C, SOUND_PAN_ATTACKER
	ba_waitplaysewithpan 0x007D, SOUND_PAN_TARGET, 100
	ba_waitforvisualfinish
	ba_call BattleAnimScript_082860DA
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_TARGET
	ba_blendoff
	ba_end
Move_SMOG:
	ba_loadspritegfx 0x27BC
	ba_monbg ANIM_DEF_PARTNER
	ba_monbgprio_29
	ba_setalpha 12, 8
	ba_loopsewithpan 0x00A8, SOUND_PAN_TARGET, 17, 10
	ba_call BattleAnimScript_0827E7D6
	ba_call BattleAnimScript_0827E7D6
	ba_call BattleAnimScript_0827E7D6
	ba_call BattleAnimScript_0827E7D6
	ba_call BattleAnimScript_0827E7D6
	ba_call BattleAnimScript_0827E7D6
	ba_call BattleAnimScript_0827E7D6
	ba_delay 120
	ba_loopsewithpan 0x0094, SOUND_PAN_TARGET, 18, 2
	ba_createvisualtask sub_08116254, 2, 4, 2, 2, 0, 12, 0x681A
	ba_delay 10
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 2, 0, 15, 1
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
BattleAnimScript_0827E7D6: @ 0x0827E7D6
	ba_createsprite 0x08571828, ANIM_ATTACKER, 2, 0, -24, 48, 240, 1, 0
	ba_delay 7
	ba_return
Move_FAINT_ATTACK:
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_ATTACKER
	ba_fadetobg BG_DARK
	ba_waitbgfadein
	ba_delay 0
	ba_playsewithpan 0x00BE, SOUND_PAN_ATTACKER
	ba_createvisualtask AnimTask_TranslateMonEllipticalRespectSide, 2, 0, 18, 6, 1, 3
	ba_createvisualtask sub_08113F38, 2, 1
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_ATTACKER
	ba_invisible ANIM_ATTACKER
	ba_delay 1
	ba_createvisualtask sub_081187B0, 2
	ba_setalpha 12, 8
	ba_monbg ANIM_TARGET
	ba_delay 1
	ba_playsewithpan 0x007B, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, 0, 0, 1, 1
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 2, 0, 9, 1
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_TARGET
	ba_blendoff
	ba_delay 1
	ba_setarg 0x07, 0x1000
	ba_delay 32
	ba_createvisualtask sub_081140D8, 2
	ba_monbg ANIM_ATTACKER
	ba_createvisualtask sub_08114034, 2, 1
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_ATTACKER
	ba_delay 1
	ba_restorebg
	ba_waitbgfadein
	ba_end
Move_SAND_ATTACK:
	ba_loadspritegfx 0x275A
	ba_monbg ANIM_ATK_PARTNER
	ba_monbgprio_28 ANIM_ATTACKER
	ba_setalpha 12, 8
	ba_playsewithpan 0x009F, SOUND_PAN_ATTACKER
	ba_createsprite 0x0855A9A0, ANIM_ATTACKER, 2, 0, -10, 0, 0, 3
	ba_waitforvisualfinish
	ba_createsprite 0x0855A988, ANIM_ATTACKER, 2, 0, 0, 2
	ba_call BattleAnimScript_0827E8C3
	ba_call BattleAnimScript_0827E8C3
	ba_call BattleAnimScript_0827E8C3
	ba_call BattleAnimScript_0827E8C3
	ba_call BattleAnimScript_0827E8C3
	ba_call BattleAnimScript_0827E8C3
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_ATK_PARTNER
	ba_blendoff
	ba_end
BattleAnimScript_0827E8C3: @ 0x0827E8C3
	ba_createsprite 0x08572D8C, ANIM_TARGET, 2, 15, 15, 20, 0, 0
	ba_createsprite 0x08572D8C, ANIM_TARGET, 2, 15, 15, 20, 10, 10
	ba_createsprite 0x08572D8C, ANIM_TARGET, 2, 15, 15, 20, -10, -10
	ba_createsprite 0x08572D8C, ANIM_TARGET, 2, 15, 15, 20, 20, 5
	ba_createsprite 0x08572D8C, ANIM_TARGET, 2, 15, 15, 20, -20, -5
	ba_delay 2
	ba_return
Move_MUD_SLAP:
	ba_loadspritegfx 0x275A
	ba_playsewithpan 0x009F, SOUND_PAN_ATTACKER
	ba_createsprite 0x0855A9A0, ANIM_ATTACKER, 2, 0, -10, 0, 0, 3
	ba_waitforvisualfinish
	ba_createsprite 0x0855A988, ANIM_ATTACKER, 2, 0, 0, 2
	ba_call BattleAnimScript_0827E961
	ba_call BattleAnimScript_0827E961
	ba_call BattleAnimScript_0827E961
	ba_call BattleAnimScript_0827E961
	ba_call BattleAnimScript_0827E961
	ba_call BattleAnimScript_0827E961
	ba_waitforvisualfinish
	ba_end
BattleAnimScript_0827E961: @ 0x0827E961
	ba_createsprite 0x08572DB0, ANIM_TARGET, 2, 15, 15, 20, 0, 0
	ba_createsprite 0x08572DB0, ANIM_TARGET, 2, 15, 15, 20, 10, 5
	ba_createsprite 0x08572DB0, ANIM_TARGET, 2, 15, 15, 20, -10, -5
	ba_createsprite 0x08572DB0, ANIM_TARGET, 2, 15, 15, 20, 20, 10
	ba_createsprite 0x08572DB0, ANIM_TARGET, 2, 15, 15, 20, -20, -10
	ba_delay 2
	ba_return
Move_DRAGON_RAGE:
	ba_loadspritegfx 0x272D
	ba_loadspritegfx 0x2733
	ba_playsewithpan 0x00AB, SOUND_PAN_ATTACKER
	ba_createvisualtask AnimTask_ShakeMon, 5, 0, 0, 2, 40, 1
	ba_waitforvisualfinish
	ba_createsprite 0x0855A9A0, ANIM_TARGET, 2, 0, 15, 0, 0, 4
	ba_waitforvisualfinish
	ba_createsprite 0x08572B64, ANIM_TARGET, 2, 30, 15, 0, 10, 10
	ba_waitforvisualfinish
	ba_loopsewithpan 0x0091, SOUND_PAN_TARGET, 11, 3
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 0, 3, 25, 1
	ba_createsprite 0x08572B0C, ANIM_TARGET, 66, 1, 5, 0
	ba_delay 1
	ba_createsprite 0x08572B0C, ANIM_TARGET, 66, 1, -10, -15
	ba_delay 1
	ba_createsprite 0x08572B0C, ANIM_TARGET, 2, 1, 0, 25
	ba_delay 1
	ba_createsprite 0x08572B0C, ANIM_TARGET, 66, 1, 15, 5
	ba_delay 1
	ba_createsprite 0x08572B0C, ANIM_TARGET, 66, 1, -25, 0
	ba_delay 1
	ba_createsprite 0x08572B0C, ANIM_TARGET, 2, 1, 30, 30
	ba_delay 1
	ba_createsprite 0x08572B0C, ANIM_TARGET, 2, 1, -27, 25
	ba_delay 1
	ba_createsprite 0x08572B0C, ANIM_TARGET, 66, 1, 0, 8
	ba_waitforvisualfinish
	ba_createsprite 0x0855A988, ANIM_TARGET, 66, 0, 0, 4
	ba_waitforvisualfinish
	ba_end
Move_RAIN_DANCE:
	ba_loadspritegfx 0x2783
	ba_playsewithpan 0x007F, SOUND_PAN_ATTACKER
	ba_createvisualtask sub_08116E70, 10, 1921, 2, 0, 4, 0
	ba_waitforvisualfinish
	ba_createvisualtask AnimTask_CreateRaindrops, 2, 0, 3, 120
	ba_createvisualtask AnimTask_CreateRaindrops, 2, 0, 3, 120
	ba_delay 120
	ba_delay 30
	ba_waitforvisualfinish
	ba_createvisualtask sub_08116E70, 10, 1921, 2, 4, 0, 0
	ba_waitforvisualfinish
	ba_end
Move_BITE:
BattleAnimScript_0827EAE1: @ 0x0827EAE1
	ba_loadspritegfx 0x279B
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_TARGET
	ba_setalpha 12, 8
	ba_playsewithpan 0x00A1, SOUND_PAN_TARGET
	ba_createsprite 0x08572C64, ANIM_ATTACKER, 2, 0, -32, 0, 0, 819, 10
	ba_createsprite 0x08572C64, ANIM_ATTACKER, 2, 0, 32, 4, 0, -819, 10
	ba_delay 10
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, 0, 0, 1, 2
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 0, 4, 7, 1
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_TARGET
	ba_blendoff
	ba_delay 1
	ba_end
Move_CRUNCH:
	ba_loadspritegfx 0x279B
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_TARGET
	ba_fadetobg BG_DARK
	ba_waitbgfadein
	ba_setalpha 12, 8
	ba_playsewithpan 0x00A1, SOUND_PAN_TARGET
	ba_createsprite 0x08572C64, ANIM_ATTACKER, 2, -32, -32, 1, 819, 819, 10
	ba_createsprite 0x08572C64, ANIM_ATTACKER, 2, 32, 32, 5, -819, -819, 10
	ba_delay 10
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, -8, 0, 1, 1
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 0, 7, 5, 2
	ba_waitforvisualfinish
	ba_playsewithpan 0x00A1, SOUND_PAN_TARGET
	ba_createsprite 0x08572C64, ANIM_ATTACKER, 2, 32, -32, 7, -819, 819, 10
	ba_createsprite 0x08572C64, ANIM_ATTACKER, 2, -32, 32, 3, 819, -819, 10
	ba_delay 10
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, 8, 0, 1, 1
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 0, 8, 4, 2
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_TARGET
	ba_blendoff
	ba_delay 1
	ba_restorebg
	ba_waitbgfadein
	ba_end
Move_CLAMP:
	ba_loadspritegfx 0x27A1
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_TARGET
	ba_setalpha 12, 8
	ba_playsewithpan 0x009C, SOUND_PAN_TARGET
	ba_createsprite 0x08572C7C, ANIM_ATTACKER, 2, -32, 0, 2, 819, 0, 10
	ba_createsprite 0x08572C7C, ANIM_ATTACKER, 2, 32, 0, 6, -819, 0, 10
	ba_delay 10
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, 0, 0, 1, 2
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 3, 0, 5, 1
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_TARGET
	ba_blendoff
	ba_waitforvisualfinish
	ba_end
Move_ICE_BEAM:
	ba_monbg ANIM_TARGET
	ba_monbgprio_28 ANIM_TARGET
	ba_setalpha 12, 8
	ba_loadspritegfx 0x279D
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 1, 0, 7, 0
	ba_waitforvisualfinish
	ba_createsoundtask sub_08158B94, 183, -64, 63, 4, 4, 0, 10
	ba_createsprite 0x08571710, ANIM_ATTACKER, 2, 20, 12, 0, 12, 20
	ba_createsprite 0x08571710, ANIM_ATTACKER, 2, 20, -12, 0, -12, 20
	ba_delay 1
	ba_call BattleAnimScript_0827ED4D
	ba_call BattleAnimScript_0827ED4D
	ba_call BattleAnimScript_0827ED4D
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 4, -31, 0, 7, 0x7E80
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 2, 0, 25, 1
	ba_call BattleAnimScript_0827ED4D
	ba_call BattleAnimScript_0827ED4D
	ba_call BattleAnimScript_0827ED4D
	ba_call BattleAnimScript_0827ED4D
	ba_call BattleAnimScript_0827ED4D
	ba_call BattleAnimScript_0827ED4D
	ba_call BattleAnimScript_0827ED4D
	ba_call BattleAnimScript_0827ED4D
	ba_createsprite 0x085716F8, ANIM_ATTACKER, 2, 20, 0, 0, 0, 11
	ba_delay 1
	ba_createsprite 0x085716F8, ANIM_ATTACKER, 2, 20, 0, 0, 0, 11
	ba_waitforvisualfinish
	ba_delay 20
	ba_call BattleAnimScript_08285CA7
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 4, 5, 7, 0, 0x7E80
	ba_waitforvisualfinish
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 0, 7, 0, 0
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_TARGET
	ba_blendoff
	ba_end
BattleAnimScript_0827ED4D: @ 0x0827ED4D
	ba_createsprite 0x08571710, ANIM_ATTACKER, 2, 20, 12, 0, 12, 20
	ba_createsprite 0x08571710, ANIM_ATTACKER, 2, 20, -12, 0, -12, 20
	ba_createsprite 0x085716F8, ANIM_ATTACKER, 2, 20, 0, 0, 0, 11
	ba_delay 1
	ba_return
Move_WITHDRAW:
	ba_playsewithpan 0x00A2, SOUND_PAN_ATTACKER
	ba_createvisualtask AnimTask_Withdraw, 5
	ba_waitforvisualfinish
	ba_end
Move_AURORA_BEAM:
	ba_loadspritegfx 0x279C
	ba_fadetobg BG_AURORA
	ba_waitbgfadein
	ba_playsewithpan 0x00B6, SOUND_PAN_ATTACKER
	ba_setarg 0x07, 0
	ba_createvisualtask sub_08107D78, 10, 130
	ba_call BattleAnimScript_0827EE17
	ba_createvisualtask AnimTask_ShakeMon2, 5, 1, 1, 0, 17, 1
	ba_call BattleAnimScript_0827EE17
	ba_call BattleAnimScript_0827EE17
	ba_call BattleAnimScript_0827EE17
	ba_setarg 0x07, 0xFFFF
	ba_createsoundtask sub_08158B94, 183, -64, 63, 3, 6, 0, 10
	ba_createvisualtask AnimTask_ShakeMon2, 5, 1, 2, 0, 40, 1
	ba_call BattleAnimScript_0827EE17
	ba_call BattleAnimScript_0827EE17
	ba_call BattleAnimScript_0827EE17
	ba_call BattleAnimScript_0827EE17
	ba_call BattleAnimScript_0827EE17
	ba_call BattleAnimScript_0827EE17
	ba_waitforvisualfinish
	ba_restorebg
	ba_waitbgfadein
	ba_end
BattleAnimScript_0827EE17: @ 0x0827EE17
	ba_createsprite 0x08570C98, ANIM_TARGET, 2, 20, 0, 0, 0, 17
	ba_delay 1
	ba_createsprite 0x08570C98, ANIM_TARGET, 2, 20, 0, 0, 0, 17
	ba_delay 1
	ba_createsprite 0x08570C98, ANIM_TARGET, 2, 20, 0, 0, 0, 17
	ba_delay 1
	ba_createsprite 0x08570C98, ANIM_TARGET, 2, 20, 0, 0, 0, 17
	ba_delay 1
	ba_return
Move_SOLAR_BEAM:
	ba_loadspritegfx 0x27A3
	ba_choosetwoturnanim BattleAnimScript_0827EE72, BattleAnimScript_0827EF6F
BattleAnimScript_0827EE70: @ 0x0827EE70
	ba_waitforvisualfinish
	ba_end
BattleAnimScript_0827EE72: @ 0x0827EE72
	ba_monbg ANIM_ATK_PARTNER
	ba_setalpha 12, 8
	ba_createvisualtask sub_08116254, 2, 2, 1, 4, 0, 11, 0x2FFF
	ba_playsewithpan 0x008C, SOUND_PAN_ATTACKER
	ba_call BattleAnimScript_0827EE9C
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_ATK_PARTNER
	ba_blendoff
	ba_goto BattleAnimScript_0827EE70
BattleAnimScript_0827EE9C: @ 0x0827EE9C
	ba_createsprite 0x0856DDC4, ANIM_ATTACKER, 2, 40, 40, 16
	ba_delay 2
	ba_createsprite 0x0856DDC4, ANIM_ATTACKER, 2, -40, -40, 16
	ba_delay 2
	ba_createsprite 0x0856DDC4, ANIM_ATTACKER, 2, 0, 40, 16
	ba_delay 2
	ba_createsprite 0x0856DDC4, ANIM_ATTACKER, 2, 0, -40, 16
	ba_delay 2
	ba_createsprite 0x0856DDC4, ANIM_ATTACKER, 2, 40, -20, 16
	ba_delay 2
	ba_createsprite 0x0856DDC4, ANIM_ATTACKER, 2, 40, 20, 16
	ba_delay 2
	ba_createsprite 0x0856DDC4, ANIM_ATTACKER, 2, -40, -20, 16
	ba_delay 2
	ba_createsprite 0x0856DDC4, ANIM_ATTACKER, 2, -40, 20, 16
	ba_delay 2
	ba_createsprite 0x0856DDC4, ANIM_ATTACKER, 2, -20, 30, 16
	ba_delay 2
	ba_createsprite 0x0856DDC4, ANIM_ATTACKER, 2, 20, -30, 16
	ba_delay 2
	ba_createsprite 0x0856DDC4, ANIM_ATTACKER, 2, -20, -30, 16
	ba_delay 2
	ba_createsprite 0x0856DDC4, ANIM_ATTACKER, 2, 20, 30, 16
	ba_delay 2
	ba_createsprite 0x0856DDC4, ANIM_ATTACKER, 2, -40, 0, 16
	ba_delay 2
	ba_createsprite 0x0856DDC4, ANIM_ATTACKER, 2, 40, 0, 16
	ba_delay 2
	ba_return
BattleAnimScript_0827EF6F: @ 0x0827EF6F
	ba_call BattleAnimScript_082862A4
	ba_panse_1B 0x00C9, SOUND_PAN_ATTACKER, SOUND_PAN_TARGET, 2, 0
	ba_createvisualtask AnimTask_CreateSmallSolarbeamOrbs, 5
	ba_createsprite 0x0856DDDC, ANIM_TARGET, 3, 15, 0, 20, 0
	ba_delay 4
	ba_createsprite 0x0856DDDC, ANIM_TARGET, 3, 15, 0, 20, 1
	ba_delay 4
	ba_createvisualtask sub_08116E70, 10, 4, 1, 0, 10, 1017
	ba_createsprite 0x0856DDDC, ANIM_TARGET, 3, 15, 0, 20, 2
	ba_delay 4
	ba_createvisualtask AnimTask_ShakeMon2, 5, 1, 2, 0, 65, 1
	ba_createsprite 0x0856DDDC, ANIM_TARGET, 3, 15, 0, 20, 3
	ba_delay 4
	ba_createsprite 0x0856DDDC, ANIM_TARGET, 3, 15, 0, 20, 4
	ba_delay 4
	ba_createsprite 0x0856DDDC, ANIM_TARGET, 3, 15, 0, 20, 5
	ba_delay 4
	ba_createsprite 0x0856DDDC, ANIM_TARGET, 3, 15, 0, 20, 6
	ba_delay 4
	ba_call BattleAnimScript_0827F041
	ba_call BattleAnimScript_0827F041
	ba_waitforvisualfinish
	ba_createvisualtask sub_08116E70, 10, 4, 1, 10, 0, 1017
	ba_call BattleAnimScript_082862DE
	ba_goto BattleAnimScript_0827EE70
BattleAnimScript_0827F041: @ 0x0827F041
	ba_createsprite 0x0856DDDC, ANIM_TARGET, 3, 15, 0, 20, 0
	ba_delay 4
	ba_createsprite 0x0856DDDC, ANIM_TARGET, 3, 15, 0, 20, 1
	ba_delay 4
	ba_createsprite 0x0856DDDC, ANIM_TARGET, 3, 15, 0, 20, 2
	ba_delay 4
	ba_createsprite 0x0856DDDC, ANIM_TARGET, 3, 15, 0, 20, 3
	ba_delay 4
	ba_createsprite 0x0856DDDC, ANIM_TARGET, 3, 15, 0, 20, 4
	ba_delay 4
	ba_createsprite 0x0856DDDC, ANIM_TARGET, 3, 15, 0, 20, 5
	ba_delay 4
	ba_createsprite 0x0856DDDC, ANIM_TARGET, 3, 15, 0, 20, 6
	ba_delay 4
	ba_return
Move_BLIZZARD:
	ba_loadspritegfx 0x279D
	ba_monbg ANIM_DEF_PARTNER
	ba_createvisualtask AnimTask_GetAttackerSide, 2
	ba_jumpargeq 0x07, 1, BattleAnimScript_0827F23E
	ba_fadetobg BG_HIGHSPEED_OPPONENT
BattleAnimScript_0827F0CF: @ 0x0827F0CF
	ba_waitbgfadeout
	ba_createvisualtask sub_08117EB0, 5, 0xF700, 0, 1, 0xFFFF
	ba_waitbgfadein
	ba_waitforvisualfinish
	ba_panse_1B 0x0099, SOUND_PAN_ATTACKER, SOUND_PAN_TARGET, 2, 0
	ba_call BattleAnimScript_0827F109
	ba_call BattleAnimScript_0827F109
	ba_playsewithpan 0x009A, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_call BattleAnimScript_08285D2B
	ba_waitforvisualfinish
	ba_delay 20
	ba_restorebg
	ba_waitbgfadeout
	ba_setarg 0x07, 0xFFFF
	ba_waitbgfadein
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_end
BattleAnimScript_0827F109: @ 0x0827F109
	ba_createsprite 0x0857177C, ANIM_ATTACKER, 40, 0, -10, 0, -10, 72, 1
	ba_createsprite 0x08571794, ANIM_ATTACKER, 40, 0, 0, 0, 0, 80, 0, 0, 1
	ba_delay 3
	ba_createsprite 0x0857177C, ANIM_ATTACKER, 40, 0, -15, 0, -15, 72, 1
	ba_createsprite 0x08571794, ANIM_ATTACKER, 40, 0, -10, 0, -10, 80, 0, 0, 1
	ba_delay 3
	ba_createsprite 0x0857177C, ANIM_ATTACKER, 40, 0, -5, 0, -5, 72, 1
	ba_createsprite 0x08571794, ANIM_ATTACKER, 40, 0, 10, 0, 10, 80, 0, 0, 1
	ba_delay 3
	ba_createsprite 0x0857177C, ANIM_ATTACKER, 40, 0, -10, 0, -10, 72, 1
	ba_createsprite 0x08571794, ANIM_ATTACKER, 40, 0, -20, 0, -20, 80, 0, 0, 1
	ba_delay 3
	ba_createsprite 0x0857177C, ANIM_ATTACKER, 40, 0, -20, 0, -20, 72, 1
	ba_createsprite 0x08571794, ANIM_ATTACKER, 40, 0, 15, 0, 15, 80, 0, 0, 1
	ba_delay 3
	ba_createsprite 0x0857177C, ANIM_ATTACKER, 40, 0, -15, 0, -15, 72, 1
	ba_createsprite 0x08571794, ANIM_ATTACKER, 40, 0, -20, 0, -20, 80, 0, 0, 1
	ba_delay 3
	ba_createsprite 0x0857177C, ANIM_ATTACKER, 40, 0, -25, 0, -25, 72, 1
	ba_createsprite 0x08571794, ANIM_ATTACKER, 40, 0, 20, 0, 20, 80, 0, 0, 1
	ba_delay 3
	ba_return
BattleAnimScript_0827F23E: @ 0x0827F23E
	ba_fadetobg BG_HIGHSPEED_PLAYER
	ba_goto BattleAnimScript_0827F0CF
Move_POWDER_SNOW:
	ba_loadspritegfx 0x279D
	ba_monbg ANIM_DEF_PARTNER
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 31, 1, 0, 3, 0
	ba_waitforvisualfinish
	ba_panse_1B 0x0084, SOUND_PAN_ATTACKER, SOUND_PAN_TARGET, 2, 0
	ba_call BattleAnimScript_0827F28F
	ba_call BattleAnimScript_0827F28F
	ba_playsewithpan 0x0085, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_waitsound
	ba_call BattleAnimScript_08285D2B
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_delay 20
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 31, 1, 3, 0, 0
	ba_end
BattleAnimScript_0827F28F: @ 0x0827F28F
	ba_createsprite 0x085717AC, ANIM_ATTACKER, 40, 0, 0, 0, 0, 56, 4, 4, 1
	ba_delay 3
	ba_createsprite 0x085717AC, ANIM_ATTACKER, 40, 0, -10, 0, -10, 56, 4, 4, 1
	ba_delay 3
	ba_createsprite 0x085717AC, ANIM_ATTACKER, 40, 0, 10, 0, 10, 56, -4, 3, 1
	ba_delay 3
	ba_createsprite 0x085717AC, ANIM_ATTACKER, 40, 0, -20, 0, -20, 56, -4, 5, 1
	ba_delay 3
	ba_createsprite 0x085717AC, ANIM_ATTACKER, 40, 0, 15, 0, 15, 56, 4, 4, 1
	ba_delay 3
	ba_createsprite 0x085717AC, ANIM_ATTACKER, 40, 0, -20, 0, -20, 56, 4, 4, 1
	ba_delay 3
	ba_createsprite 0x085717AC, ANIM_ATTACKER, 40, 0, 20, 0, 20, 56, 4, 4, 1
	ba_delay 3
	ba_return
Move_HYDRO_PUMP:
	ba_loadspritegfx 0x27A5
	ba_loadspritegfx 0x27A4
	ba_monbg ANIM_DEF_PARTNER
	ba_monbgprio_28 ANIM_TARGET
	ba_setalpha 12, 8
	ba_createvisualtask AnimTask_ShakeMon, 5, 0, 0, 2, 40, 1
	ba_delay 6
	ba_panse_1B 0x00A4, SOUND_PAN_ATTACKER, SOUND_PAN_TARGET, 2, 0
	ba_createvisualtask sub_08107F18, 5, 100
	ba_call BattleAnimScript_0827F3DE
	ba_call BattleAnimScript_0827F3DE
	ba_call BattleAnimScript_0827F3DE
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 3, 0, 37, 1
	ba_call BattleAnimScript_0827F41F
	ba_call BattleAnimScript_0827F3DE
	ba_call BattleAnimScript_0827F3DE
	ba_call BattleAnimScript_0827F41F
	ba_call BattleAnimScript_0827F3DE
	ba_call BattleAnimScript_0827F3DE
	ba_call BattleAnimScript_0827F41F
	ba_call BattleAnimScript_0827F3DE
	ba_call BattleAnimScript_0827F3DE
	ba_call BattleAnimScript_0827F41F
	ba_call BattleAnimScript_0827F3DE
	ba_call BattleAnimScript_0827F3DE
	ba_call BattleAnimScript_0827F41F
	ba_delay 1
	ba_delay 1
	ba_call BattleAnimScript_0827F41F
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
BattleAnimScript_0827F3DE: @ 0x0827F3DE
	ba_createsprite 0x08570CC8, ANIM_ATTACKER, 3, 10, 10, 0, 16
	ba_createsprite 0x08570CC8, ANIM_ATTACKER, 3, 10, 10, 0, -16
	ba_delay 1
	ba_createsprite 0x08570CC8, ANIM_ATTACKER, 3, 10, 10, 0, 16
	ba_createsprite 0x08570CC8, ANIM_ATTACKER, 3, 10, 10, 0, -16
	ba_delay 1
	ba_return
BattleAnimScript_0827F41F: @ 0x0827F41F
	ba_createsprite gBattleAnimSpriteTemplate_WaterHit, ANIM_ATTACKER, 4, 0, 15, 1, 1
	ba_createsprite gBattleAnimSpriteTemplate_WaterHit, ANIM_ATTACKER, 4, 0, -15, 1, 1
	ba_return
Move_SIGNAL_BEAM:
	ba_loadspritegfx 0x2818
	ba_loadspritegfx 0x2819
	ba_loadspritegfx 0x2759
	ba_createvisualtask AnimTask_ShakeMon, 5, 0, 0, 2, 25, 1
	ba_delay 6
	ba_panse_1B 0x00B6, SOUND_PAN_ATTACKER, SOUND_PAN_TARGET, 1, 0
	ba_createvisualtask sub_08107F18, 5, 100
	ba_call BattleAnimScript_0827F505
	ba_call BattleAnimScript_0827F505
	ba_call BattleAnimScript_0827F505
	ba_call BattleAnimScript_0827F505
	ba_call BattleAnimScript_0827F505
	ba_call BattleAnimScript_0827F505
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 3, 0, 25, 1
	ba_createsprite 0x08572E70, ANIM_ATTACKER, 2, 4, 8, 5, 31, 8, 961, 8
	ba_call BattleAnimScript_0827F505
	ba_call BattleAnimScript_0827F505
	ba_call BattleAnimScript_0827F505
	ba_call BattleAnimScript_0827F505
	ba_call BattleAnimScript_0827F505
	ba_call BattleAnimScript_0827F505
	ba_call BattleAnimScript_0827F505
	ba_call BattleAnimScript_0827F505
	ba_call BattleAnimScript_0827F505
	ba_call BattleAnimScript_0827F505
	ba_call BattleAnimScript_0827F505
	ba_call BattleAnimScript_0827F505
	ba_call BattleAnimScript_0827F505
	ba_call BattleAnimScript_0827F505
	ba_call BattleAnimScript_0827F505
	ba_call BattleAnimScript_0827F505
	ba_call BattleAnimScript_0827F505
	ba_waitforvisualfinish
	ba_end
BattleAnimScript_0827F505: @ 0x0827F505
	ba_createsprite 0x08570CF8, ANIM_TARGET, 3, 10, 10, 0, 16
	ba_createsprite 0x08570D10, ANIM_TARGET, 3, 10, 10, 0, -16
	ba_delay 1
	ba_return
Move_ABSORB:
BattleAnimScript_0827F526: @ 0x0827F526
	ba_loadspritegfx 0x27A3
	ba_loadspritegfx 0x272F
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_DEF_PARTNER
	ba_monbgprio_2A ANIM_TARGET
	ba_setalpha 12, 8
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 1, 0, 4, 0x33ED
	ba_waitforvisualfinish
	ba_playsewithpan 0x00B4, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, 0, 0, 1, 2
	ba_delay 2
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 0, 5, 5, 1
	ba_waitforvisualfinish
	ba_delay 3
	ba_call BattleAnimScript_0827F595
	ba_waitforvisualfinish
	ba_delay 15
	ba_call BattleAnimScript_08285F66
	ba_waitforvisualfinish
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 1, 4, 0, 0x33ED
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
BattleAnimScript_0827F595: @ 0x0827F595
	ba_playsewithpan 0x008E, SOUND_PAN_TARGET
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 0, 5, 8, 26
	ba_delay 4
	ba_playsewithpan 0x008E, SOUND_PAN_TARGET
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 10, -5, -8, 26
	ba_delay 4
	ba_playsewithpan 0x008E, SOUND_PAN_TARGET
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, -5, 15, 16, 33
	ba_delay 4
	ba_playsewithpan 0x008E, SOUND_PAN_TARGET
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 0, -15, -16, 36
	ba_delay 4
	ba_playsewithpan 0x008E, SOUND_PAN_TARGET
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 0, 5, 8, 26
	ba_delay 4
	ba_playsewithpan 0x008E, SOUND_PAN_TARGET
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 10, -5, -8, 26
	ba_delay 4
	ba_playsewithpan 0x008E, SOUND_PAN_TARGET
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, -10, 20, 20, 39
	ba_delay 4
	ba_playsewithpan 0x008E, SOUND_PAN_TARGET
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 5, -18, -20, 35
	ba_delay 4
	ba_return
Move_MEGA_DRAIN:
	ba_loadspritegfx 0x27A3
	ba_loadspritegfx 0x272F
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_DEF_PARTNER
	ba_monbgprio_2A ANIM_TARGET
	ba_setalpha 12, 8
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 1, 0, 8, 0x33ED
	ba_waitforvisualfinish
	ba_playsewithpan 0x00B4, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, 0, 0, 1, 1
	ba_delay 2
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 0, 5, 5, 1
	ba_waitforvisualfinish
	ba_delay 3
	ba_call BattleAnimScript_0827F6AD
	ba_waitforvisualfinish
	ba_delay 15
	ba_call BattleAnimScript_08285F66
	ba_waitforvisualfinish
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 1, 8, 0, 0x33ED
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
BattleAnimScript_0827F6AD: @ 0x0827F6AD
	ba_playsewithpan 0x007E, SOUND_PAN_TARGET
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 0, 5, 8, 26
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 5, -18, -20, 35
	ba_delay 4
	ba_playsewithpan 0x007E, SOUND_PAN_TARGET
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 10, -5, -8, 26
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, -10, 20, 20, 39
	ba_delay 4
	ba_playsewithpan 0x007E, SOUND_PAN_TARGET
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, -5, 15, 16, 33
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 10, -5, -8, 26
	ba_delay 4
	ba_playsewithpan 0x007E, SOUND_PAN_TARGET
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 0, -15, -16, 36
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 0, 5, 8, 26
	ba_delay 4
	ba_playsewithpan 0x007E, SOUND_PAN_TARGET
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 0, 5, 8, 26
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 0, -15, -16, 36
	ba_delay 4
	ba_playsewithpan 0x007E, SOUND_PAN_TARGET
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 10, -5, -8, 26
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, -5, 15, 16, 33
	ba_delay 4
	ba_playsewithpan 0x007E, SOUND_PAN_TARGET
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, -10, 20, 20, 39
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 10, -5, -8, 26
	ba_delay 4
	ba_playsewithpan 0x007E, SOUND_PAN_TARGET
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 0, 5, 8, 26
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 5, -18, -20, 35
	ba_delay 4
	ba_return
Move_GIGA_DRAIN:
	ba_loadspritegfx 0x27A3
	ba_loadspritegfx 0x272F
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_DEF_PARTNER
	ba_monbgprio_2A ANIM_TARGET
	ba_setalpha 12, 8
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 1, 0, 12, 0x33ED
	ba_waitforvisualfinish
	ba_playsewithpan 0x00B4, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, 0, 0, 1, 0
	ba_delay 2
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 0, 5, 5, 1
	ba_waitforvisualfinish
	ba_delay 3
	ba_call BattleAnimScript_0827F83D
	ba_waitforvisualfinish
	ba_delay 15
	ba_call BattleAnimScript_08285F66
	ba_waitforvisualfinish
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 1, 12, 0, 0x33ED
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
BattleAnimScript_0827F83D: @ 0x0827F83D
	ba_playsewithpan 0x00C7, SOUND_PAN_TARGET
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 0, 5, 8, 26
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 5, -18, -40, 35
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, -10, 20, 20, 39
	ba_delay 4
	ba_playsewithpan 0x00C7, SOUND_PAN_TARGET
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 0, 5, 28, 26
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 10, -5, -8, 26
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, -10, 20, 40, 39
	ba_delay 4
	ba_playsewithpan 0x00C7, SOUND_PAN_TARGET
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 10, -5, -8, 26
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, -5, 15, 16, 33
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 10, -5, -32, 26
	ba_delay 4
	ba_playsewithpan 0x00C7, SOUND_PAN_TARGET
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 0, -15, -16, 36
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 0, 5, 8, 26
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 10, -5, -8, 26
	ba_delay 4
	ba_playsewithpan 0x00C7, SOUND_PAN_TARGET
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, -5, 15, 16, 33
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 0, -15, -16, 36
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 0, 5, 8, 26
	ba_delay 4
	ba_playsewithpan 0x00C7, SOUND_PAN_TARGET
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 0, 5, 8, 26
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, -5, 15, 16, 33
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 10, -5, -40, 26
	ba_delay 4
	ba_playsewithpan 0x00C7, SOUND_PAN_TARGET
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, -5, 15, 36, 33
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 10, -5, -8, 26
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, -10, 20, 20, 39
	ba_delay 4
	ba_playsewithpan 0x00C7, SOUND_PAN_TARGET
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 0, 5, 8, 26
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 0, 5, 8, 26
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 5, -18, -20, 35
	ba_delay 4
	ba_return
Move_LEECH_LIFE:
	ba_loadspritegfx 0x27B1
	ba_loadspritegfx 0x27A3
	ba_delay 1
	ba_loadspritegfx 0x272F
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_DEF_PARTNER
	ba_monbgprio_2A ANIM_TARGET
	ba_setalpha 12, 8
	ba_delay 1
	ba_createsprite 0x085725AC, ANIM_ATTACKER, 2, -20, 15, 12
	ba_waitforvisualfinish
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, 0, 0, 1, 2
	ba_playsewithpan 0x00B4, SOUND_PAN_TARGET
	ba_delay 2
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 0, 5, 5, 1
	ba_waitforvisualfinish
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 1, 0, 7, 0
	ba_waitforvisualfinish
	ba_call BattleAnimScript_0827F595
	ba_waitforvisualfinish
	ba_delay 15
	ba_call BattleAnimScript_08285F66
	ba_waitforvisualfinish
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 1, 7, 0, 0
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
Move_SYNTHESIS:
	ba_loadspritegfx 0x272F
	ba_loadspritegfx 0x2741
	ba_createvisualtask sub_08116254, 2, 2, 2, 2, 0, 16, 0x4BFB
	ba_playsewithpan 0x008C, SOUND_PAN_ATTACKER
	ba_call BattleAnimScript_08285F3B
	ba_waitforvisualfinish
	ba_call BattleAnimScript_08285F66
	ba_waitforvisualfinish
	ba_end
Move_TOXIC:
	ba_loadspritegfx 0x27A7
	ba_loadspritegfx 0x27A6
	ba_call BattleAnimScript_0827FA9C
	ba_call BattleAnimScript_0827FA9C
	ba_waitforvisualfinish
	ba_delay 15
	ba_call BattleAnimScript_08285FF8
	ba_waitforvisualfinish
	ba_end
BattleAnimScript_0827FA9C: @ 0x0827FA9C
	ba_createsprite 0x08571D18, ANIM_TARGET, 2, -24, 16, 1, 1
	ba_playsewithpan 0x0094, SOUND_PAN_TARGET
	ba_delay 15
	ba_createsprite 0x08571D18, ANIM_TARGET, 2, 8, 16, 1, 1
	ba_playsewithpan 0x0094, SOUND_PAN_TARGET
	ba_delay 15
	ba_createsprite 0x08571D18, ANIM_TARGET, 2, -8, 16, 1, 1
	ba_playsewithpan 0x0094, SOUND_PAN_TARGET
	ba_delay 15
	ba_createsprite 0x08571D18, ANIM_TARGET, 2, 24, 16, 1, 1
	ba_playsewithpan 0x0094, SOUND_PAN_TARGET
	ba_delay 15
	ba_return
Move_SLUDGE:
	ba_loadspritegfx 0x27A6
	ba_playsewithpan 0x007E, SOUND_PAN_ATTACKER
	ba_createsprite 0x08571D8C, ANIM_TARGET, 2, 20, 0, 40, 0
	ba_waitforvisualfinish
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 3, 0, 5, 1
	ba_createvisualtask sub_08116254, 2, 4, 1, 2, 0, 12, 0x7C1E
	ba_call BattleAnimScript_08285FF8
	ba_waitforvisualfinish
	ba_end
Move_SLUDGE_BOMB:
	ba_loadspritegfx 0x27A6
	ba_call BattleAnimScript_0827FC43
	ba_call BattleAnimScript_0827FC43
	ba_call BattleAnimScript_0827FC43
	ba_call BattleAnimScript_0827FC43
	ba_call BattleAnimScript_0827FC43
	ba_call BattleAnimScript_0827FC43
	ba_call BattleAnimScript_0827FC43
	ba_call BattleAnimScript_0827FC43
	ba_call BattleAnimScript_0827FC43
	ba_call BattleAnimScript_0827FC43
	ba_createvisualtask AnimTask_ShakeMon2, 5, 1, 3, 0, 15, 1
	ba_createvisualtask sub_08116254, 2, 4, 1, 2, 0, 12, 0x7C1E
	ba_createsprite 0x08571DBC, ANIM_TARGET, 2, 42, 27, 20
	ba_createsprite 0x08571DBC, ANIM_TARGET, 2, -27, 44, 20
	ba_createsprite 0x08571DBC, ANIM_TARGET, 2, 39, -28, 20
	ba_createsprite 0x08571DBC, ANIM_TARGET, 2, -42, -42, 20
	ba_playsewithpan 0x00AF, SOUND_PAN_TARGET
	ba_delay 5
	ba_createsprite 0x08571DBC, ANIM_TARGET, 2, 0, 40, 20
	ba_createsprite 0x08571DBC, ANIM_TARGET, 2, -8, -44, 20
	ba_createsprite 0x08571DBC, ANIM_TARGET, 2, -46, -28, 20
	ba_createsprite 0x08571DBC, ANIM_TARGET, 2, 46, 9, 20
	ba_playsewithpan 0x00AF, SOUND_PAN_TARGET
	ba_delay 5
	ba_createsprite 0x08571DBC, ANIM_TARGET, 2, 42, 0, 20
	ba_createsprite 0x08571DBC, ANIM_TARGET, 2, -43, -12, 20
	ba_createsprite 0x08571DBC, ANIM_TARGET, 2, 16, -46, 20
	ba_createsprite 0x08571DBC, ANIM_TARGET, 2, -16, 44, 20
	ba_playsewithpan 0x00AF, SOUND_PAN_TARGET
	ba_delay 0
	ba_waitsound
	ba_waitforvisualfinish
	ba_call BattleAnimScript_08285FF8
	ba_waitforvisualfinish
	ba_end
BattleAnimScript_0827FC43: @ 0x0827FC43
	ba_playsewithpan 0x007E, SOUND_PAN_ATTACKER
	ba_createsprite 0x08571D8C, ANIM_TARGET, 2, 20, 0, 40, 0
	ba_delay 3
	ba_return
Move_ACID:
	ba_loadspritegfx 0x27A6
	ba_monbg ANIM_DEF_PARTNER
	ba_createsprite 0x08571DA4, ANIM_TARGET, 2, 20, 0, 40, 1, 0, 0
	ba_playsewithpan 0x007E, SOUND_PAN_ATTACKER
	ba_delay 5
	ba_createsprite 0x08571DA4, ANIM_TARGET, 2, 20, 0, 40, 1, 24, 0
	ba_playsewithpan 0x007E, SOUND_PAN_ATTACKER
	ba_delay 5
	ba_createsprite 0x08571DA4, ANIM_TARGET, 2, 20, 0, 40, 1, -24, 0
	ba_playsewithpan 0x007E, SOUND_PAN_ATTACKER
	ba_delay 15
	ba_createvisualtask AnimTask_ShakeMon2, 5, 1, 2, 0, 10, 1
	ba_createvisualtask AnimTask_ShakeMon2, 5, 3, 2, 0, 10, 1
	ba_createvisualtask sub_08116254, 2, 20, 2, 2, 0, 12, 0x7C1E
	ba_createsprite 0x08571DF0, ANIM_TARGET, 2, 0, -22, 0, 15, 55
	ba_playsewithpan 0x007C, SOUND_PAN_TARGET
	ba_delay 10
	ba_createsprite 0x08571DF0, ANIM_TARGET, 2, -26, -24, 0, 15, 55
	ba_playsewithpan 0x007C, SOUND_PAN_TARGET
	ba_delay 10
	ba_createsprite 0x08571DF0, ANIM_TARGET, 2, 15, -27, 0, 15, 50
	ba_playsewithpan 0x007C, SOUND_PAN_TARGET
	ba_delay 10
	ba_createsprite 0x08571DF0, ANIM_TARGET, 2, -15, -17, 0, 10, 45
	ba_playsewithpan 0x007C, SOUND_PAN_TARGET
	ba_delay 10
	ba_createsprite 0x08571DF0, ANIM_TARGET, 2, 27, -22, 0, 15, 50
	ba_playsewithpan 0x007C, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_end
Move_BONEMERANG:
	ba_loadspritegfx 0x2710
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_DEF_PARTNER
	ba_monbgprio_28 ANIM_TARGET
	ba_setalpha 12, 8
	ba_playsewithpan 0x00BB, SOUND_PAN_ATTACKER
	ba_createsprite 0x08572D5C, ANIM_ATTACKER, 2
	ba_delay 20
	ba_playsewithpan 0x00A6, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, 0, 0, 1, 1
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 5, 0, 5, 1
	ba_delay 17
	ba_playsewithpan 0x007A, SOUND_PAN_ATTACKER
	ba_createsprite 0x0855A958, ANIM_ATTACKER, 2, 6, -4
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
Move_BONE_CLUB:
	ba_loadspritegfx 0x2710
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_DEF_PARTNER
	ba_monbgprio_28 ANIM_TARGET
	ba_setalpha 12, 8
	ba_playsewithpan 0x00BB, SOUND_PAN_TARGET
	ba_createsprite 0x08572D74, ANIM_ATTACKER, 2, -42, -25, 0, 0, 15
	ba_delay 12
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, 0, 0, 1, 1
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 0, 5, 5, 1
	ba_createsprite 0x08572E70, ANIM_ATTACKER, 2, 7, 5, 1, 0, 10, 0, 0
	ba_playsewithpan 0x007B, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
Move_BONE_RUSH:
	ba_loadspritegfx 0x2710
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_DEF_PARTNER
	ba_setalpha 12, 8
	ba_playsewithpan 0x00BB, SOUND_PAN_TARGET
	ba_createsprite 0x08572D74, ANIM_ATTACKER, 2, -42, -25, 0, 0, 15
	ba_delay 12
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, 0, 0, 1, 2
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 0, 3, 5, 1
	ba_playsewithpan 0x00A6, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
Move_SPIKES:
	ba_loadspritegfx 0x27A8
	ba_monbg ANIM_DEF_PARTNER
	ba_playsewithpan 0x008F, SOUND_PAN_ATTACKER
	ba_waitplaysewithpan 0x00A6, SOUND_PAN_TARGET, 28
	ba_createsprite 0x085ACF24, ANIM_TARGET, 2, 20, 0, 0, 24, 30
	ba_delay 10
	ba_playsewithpan 0x008F, SOUND_PAN_ATTACKER
	ba_waitplaysewithpan 0x00A6, SOUND_PAN_TARGET, 28
	ba_createsprite 0x085ACF24, ANIM_TARGET, 2, 20, 0, -24, 24, 30
	ba_delay 10
	ba_waitplaysewithpan 0x00A6, SOUND_PAN_TARGET, 28
	ba_createsprite 0x085ACF24, ANIM_TARGET, 2, 20, 0, 24, 24, 30
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_end
Move_MEGAHORN:
	ba_loadspritegfx 0x27A9
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_DEF_PARTNER
	ba_playsewithpan 0x00AB, SOUND_PAN_ATTACKER
	ba_jumpifcontest BattleAnimScript_0827FF81
	ba_fadetobg BG_DRILL
	ba_waitbgfadeout
	ba_createvisualtask sub_08117EB0, 5, 0xF700, 768, 1, 0xFFFF
BattleAnimScript_0827FECE: @ 0x0827FECE
	ba_waitbgfadein
	ba_setalpha 12, 8
	ba_createvisualtask AnimTask_ShakeMon, 5, 0, 2, 0, 15, 1
	ba_waitforvisualfinish
	ba_delay 10
	ba_createsprite 0x0855A9A0, ANIM_ATTACKER, 2, 0, 24, 0, 0, 6
	ba_delay 3
	ba_createsprite 0x08572558, ANIM_ATTACKER, 3, -42, 25, 0, 0, 6
	ba_delay 4
	ba_playsewithpan 0x009C, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, 0, 0, 1, 0
	ba_createsprite 0x0855A9A0, ANIM_ATTACKER, 2, 1, -16, 4, 1, 4
	ba_waitforvisualfinish
	ba_createvisualtask AnimTask_ShakeMonInPlace, 2, 1, -4, 1, 12, 1
	ba_createsprite 0x08572E70, ANIM_ATTACKER, 2, 7, 5, 1, 0x7FFF, 10, 0, 0
	ba_delay 10
	ba_createsprite 0x0855A988, ANIM_ATTACKER, 2, 0, 0, 11
	ba_delay 3
	ba_createsprite 0x0855A988, ANIM_ATTACKER, 2, 1, 0, 7
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_restorebg
	ba_waitbgfadeout
	ba_setarg 0x07, 0xFFFF
	ba_waitbgfadein
	ba_end
BattleAnimScript_0827FF81: @ 0x0827FF81
	ba_fadetobg BG_DRILL_CONTESTS
	ba_waitbgfadeout
	ba_createvisualtask sub_08117EB0, 5, 0x0900, 768, 0, 0xFFFF
	ba_goto BattleAnimScript_0827FECE
Move_GUST:
	ba_loadspritegfx 0x2719
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_DEF_PARTNER
	ba_monbgprio_28 ANIM_TARGET
	ba_setalpha 12, 8
	ba_playsewithpan 0x0084, SOUND_PAN_TARGET
	ba_createsprite 0x08571E54, ANIM_ATTACKER, 2, 0, -16
	ba_createvisualtask sub_0810E728, 5, 1, 70
	ba_waitforvisualfinish
	ba_createvisualtask AnimTask_ShakeMon2, 5, 1, 1, 0, 7, 1
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, 0, 0, 1, 2
	ba_playsewithpan 0x0085, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
Move_WING_ATTACK:
	ba_loadspritegfx 0x2719
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_DEF_PARTNER
	ba_monbgprio_28 ANIM_TARGET
	ba_setalpha 12, 8
	ba_loopsewithpan 0x009D, SOUND_PAN_ATTACKER, 20, 2
	ba_createvisualtask AnimTask_TranslateMonElliptical, 2, 0, 12, 4, 1, 4
	ba_createvisualtask sub_0810E728, 5, 1, 70
	ba_createsprite 0x08571E88, ANIM_ATTACKER, 2, -25, 0, 0, 0, 20
	ba_createsprite 0x08571E88, ANIM_ATTACKER, 2, 25, 0, 0, 0, 20
	ba_delay 24
	ba_createsprite 0x0855A9A0, ANIM_ATTACKER, 2, 0, 24, 0, 0, 9
	ba_delay 17
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, 16, 0, 1, 1
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, -16, 0, 1, 1
	ba_loopsewithpan 0x0086, SOUND_PAN_TARGET, 5, 2
	ba_waitforvisualfinish
	ba_createsprite 0x0855A988, ANIM_ATTACKER, 2, 0, 0, 11
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
Move_PECK:
	ba_loadspritegfx 0x2797
	ba_playsewithpan 0x00A6, SOUND_PAN_TARGET
	ba_createvisualtask sub_080D5AB0, 2, 3, -768, 1, 2
	ba_createsprite gBattleAnimSpriteTemplate_PiercingHit, ANIM_TARGET, 3, -12, 0, 1, 3
	ba_waitforvisualfinish
	ba_end
Move_AEROBLAST:
	ba_loadspritegfx 0x27AA
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_DEF_PARTNER
	ba_call BattleAnimScript_0828626C
	ba_monbgprio_28 ANIM_TARGET
	ba_setalpha 12, 8
	ba_call BattleAnimScript_08280109
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 5, 0, 50, 1
	ba_call BattleAnimScript_08280109
	ba_call BattleAnimScript_08280109
	ba_call BattleAnimScript_08280109
	ba_call BattleAnimScript_08280109
	ba_waitforvisualfinish
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, 0, 0, 1, 0
	ba_playsewithpan 0x0088, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_delay 0
	ba_call BattleAnimScript_0828629C
	ba_end
BattleAnimScript_08280109: @ 0x08280109
	ba_playsewithpan 0x008F, SOUND_PAN_ATTACKER
	ba_createsprite 0x08571EB8, ANIM_ATTACKER, 2, 14, -12, 0, -12, 15, 0, 0
	ba_createsprite 0x08571EB8, ANIM_ATTACKER, 2, 26, 8, 12, 8, 15, 0, 0
	ba_delay 3
	ba_playsewithpan 0x008F, SOUND_PAN_ATTACKER
	ba_createsprite 0x08571EB8, ANIM_ATTACKER, 2, 14, -12, 0, -12, 15, 1, 0
	ba_createsprite 0x08571EB8, ANIM_ATTACKER, 2, 26, 8, 12, 8, 15, 1, 0
	ba_delay 3
	ba_playsewithpan 0x008F, SOUND_PAN_ATTACKER
	ba_createsprite 0x08571EB8, ANIM_ATTACKER, 2, 14, -12, 0, -12, 15, 2, 0
	ba_createsprite 0x08571EB8, ANIM_ATTACKER, 2, 26, 8, 12, 8, 15, 2, 0
	ba_delay 3
	ba_playsewithpan 0x008F, SOUND_PAN_ATTACKER
	ba_createsprite 0x08571EB8, ANIM_ATTACKER, 2, 14, -12, 0, -12, 15, 3, 0
	ba_createsprite 0x08571EB8, ANIM_ATTACKER, 2, 26, 8, 12, 8, 15, 3, 0
	ba_delay 3
	ba_return
Move_WATER_GUN:
	ba_loadspritegfx 0x27AB
	ba_loadspritegfx 0x27A4
	ba_monbg ANIM_DEF_PARTNER
	ba_monbgprio_28 ANIM_TARGET
	ba_setalpha 12, 8
	ba_createsprite 0x08570DEC, ANIM_ATTACKER, 2, 20, 0, 0, 0, 40, -25
	ba_playsewithpan 0x007C, SOUND_PAN_ATTACKER
	ba_waitforvisualfinish
	ba_createvisualtask AnimTask_ShakeMon2, 5, 1, 1, 0, 8, 1
	ba_createsprite gBattleAnimSpriteTemplate_WaterHit, ANIM_ATTACKER, 4, 0, 0, 1, 2
	ba_createsprite 0x08570E04, ANIM_ATTACKER, 2, 0, -15, 0, 15, 55
	ba_playsewithpan 0x008E, SOUND_PAN_TARGET
	ba_delay 10
	ba_createsprite 0x08570E04, ANIM_ATTACKER, 2, 15, -20, 0, 15, 50
	ba_playsewithpan 0x008E, SOUND_PAN_TARGET
	ba_delay 10
	ba_createsprite 0x08570E04, ANIM_ATTACKER, 2, -15, -10, 0, 10, 45
	ba_playsewithpan 0x008E, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
Move_CRABHAMMER:
	ba_loadspritegfx 0x279D
	ba_loadspritegfx 0x27A4
	ba_monbg ANIM_DEF_PARTNER
	ba_setalpha 12, 8
	ba_createsprite gBattleAnimSpriteTemplate_WaterHit, ANIM_ATTACKER, 4, 0, 0, 1, 0
	ba_playsewithpan 0x007B, SOUND_PAN_TARGET
	ba_delay 1
	ba_createsprite 0x08572E70, ANIM_ATTACKER, 2, 31, 3, 1, 0x7EAD, 10, 0, 0
	ba_createsprite 0x0855A9A0, ANIM_ATTACKER, 2, 1, -24, 0, 0, 4
	ba_waitforvisualfinish
	ba_delay 8
	ba_waitforvisualfinish
	ba_createsprite 0x0855A988, ANIM_ATTACKER, 2, 1, 0, 4
	ba_waitforvisualfinish
	ba_loopsewithpan 0x008E, SOUND_PAN_TARGET, 20, 3
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 0, 4, 8, 1
	ba_createsprite 0x08570E1C, ANIM_ATTACKER, 2, 10, 10, 20, 1
	ba_delay 4
	ba_createsprite 0x08570E1C, ANIM_ATTACKER, 2, 20, -20, 20, 1
	ba_delay 4
	ba_createsprite 0x08570E1C, ANIM_ATTACKER, 2, -15, 15, 20, 1
	ba_delay 4
	ba_createsprite 0x08570E1C, ANIM_ATTACKER, 2, 0, 0, 20, 1
	ba_delay 4
	ba_createsprite 0x08570E1C, ANIM_ATTACKER, 2, -10, -20, 20, 1
	ba_delay 4
	ba_createsprite 0x08570E1C, ANIM_ATTACKER, 2, 16, -8, 20, 1
	ba_delay 4
	ba_createsprite 0x08570E1C, ANIM_ATTACKER, 2, 5, 8, 20, 1
	ba_delay 4
	ba_createsprite 0x08570E1C, ANIM_ATTACKER, 2, -16, 0, 20, 1
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
Move_SURF:
BattleAnimScript_08280351: @ 0x08280351
	ba_createvisualtask AnimTask_CreateSurfWave, 2, 0
	ba_delay 24
	ba_panse_1B 0x00A3, SOUND_PAN_ATTACKER, SOUND_PAN_TARGET, 2, 0
	ba_waitforvisualfinish
	ba_end
Move_FLAMETHROWER:
	ba_loadspritegfx 0x272D
	ba_monbg ANIM_DEF_PARTNER
	ba_monbgprio_28 ANIM_TARGET
	ba_setalpha 12, 8
	ba_createvisualtask AnimTask_ShakeMon, 5, 0, 0, 2, 46, 1
	ba_delay 6
	ba_createvisualtask sub_08107F18, 5, 100
	ba_panse_1B 0x0092, SOUND_PAN_ATTACKER, SOUND_PAN_TARGET, 2, 0
	ba_call BattleAnimScript_082803DF
	ba_call BattleAnimScript_082803DF
	ba_call BattleAnimScript_082803DF
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 3, 0, 43, 1
	ba_call BattleAnimScript_082803DF
	ba_call BattleAnimScript_082803DF
	ba_call BattleAnimScript_082803DF
	ba_call BattleAnimScript_082803DF
	ba_call BattleAnimScript_082803DF
	ba_call BattleAnimScript_082803DF
	ba_call BattleAnimScript_082803DF
	ba_call BattleAnimScript_082803DF
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
BattleAnimScript_082803DF: @ 0x082803DF
	ba_createsprite 0x08570D3C, ANIM_ATTACKER, 3, 10, 10, 0, 16
	ba_delay 2
	ba_createsprite 0x08570D3C, ANIM_ATTACKER, 3, 10, 10, 0, 16
	ba_delay 2
	ba_return
Move_SANDSTORM:
BattleAnimScript_08280402: @ 0x08280402
	ba_loadspritegfx 0x2815
	ba_playsewithpan 0x00DB, 0x00
	ba_createvisualtask AnimTask_LoadSandstormBackground, 5, 0
	ba_delay 16
	ba_createsprite 0x08572784, ANIM_ATTACKER, 40, 10, 0x0900, 96, 0
	ba_delay 10
	ba_createsprite 0x08572784, ANIM_ATTACKER, 40, 90, 2048, 96, 0
	ba_delay 10
	ba_createsprite 0x08572784, ANIM_ATTACKER, 40, 50, 0x0A00, 96, 0
	ba_delay 10
	ba_createsprite 0x08572784, ANIM_ATTACKER, 40, 20, 0x0900, 96, 0
	ba_delay 10
	ba_createsprite 0x08572784, ANIM_ATTACKER, 40, 70, 1984, 96, 0
	ba_delay 10
	ba_createsprite 0x08572784, ANIM_ATTACKER, 40, 0, 0x0B00, 96, 0
	ba_delay 10
	ba_createsprite 0x08572784, ANIM_ATTACKER, 40, 60, 0x0A00, 96, 0
	ba_end
Move_WHIRLPOOL:
	ba_loadspritegfx 0x27A5
	ba_monbg ANIM_DEF_PARTNER
	ba_monbgprio_28 ANIM_TARGET
	ba_setalpha 12, 8
	ba_delay 0
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 0, 4, 2, 0, 7, 0x5DA0
	ba_playsewithpan 0x00A5, SOUND_PAN_TARGET
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 0, 2, 50, 1
	ba_call BattleAnimScript_082804E2
	ba_call BattleAnimScript_082804E2
	ba_call BattleAnimScript_082804E2
	ba_delay 12
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 0, 4, 2, 7, 0, 0x5DA0
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_end
BattleAnimScript_082804E2: @ 0x082804E2
	ba_createsprite 0x08572754, ANIM_TARGET, 2, 0, 28, 384, 50, 8, 50, 1
	ba_delay 2
	ba_createsprite 0x08572754, ANIM_TARGET, 2, 0, 32, 240, 40, 11, -46, 1
	ba_delay 2
	ba_createsprite 0x08572754, ANIM_TARGET, 2, 0, 33, 416, 40, 4, 42, 1
	ba_delay 2
	ba_createsprite 0x08572754, ANIM_TARGET, 2, 0, 31, 288, 45, 6, -42, 1
	ba_delay 2
	ba_createsprite 0x08572754, ANIM_TARGET, 2, 0, 28, 448, 45, 11, 46, 1
	ba_delay 2
	ba_createsprite 0x08572754, ANIM_TARGET, 2, 0, 33, 464, 50, 10, -50, 1
	ba_delay 2
	ba_return
Move_FLY:
	ba_loadspritegfx 0x27AC
	ba_loadspritegfx 0x2797
	ba_choosetwoturnanim BattleAnimScript_0828057E, BattleAnimScript_08280596
BattleAnimScript_0828057C: @ 0x0828057C
	ba_waitforvisualfinish
	ba_end
BattleAnimScript_0828057E: @ 0x0828057E
	ba_playsewithpan 0x009E, SOUND_PAN_ATTACKER
	ba_createsprite 0x08571F24, ANIM_ATTACKER, 2, 0, 0, 13, 336
	ba_goto BattleAnimScript_0828057C
BattleAnimScript_08280596: @ 0x08280596
	ba_monbg ANIM_DEF_PARTNER
	ba_setalpha 12, 8
	ba_playsewithpan 0x0087, SOUND_PAN_ATTACKER
	ba_createsprite 0x08571F3C, ANIM_ATTACKER, 2, 20
	ba_delay 20
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, 0, 0, 1, 0
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 6, 0, 8, 1
	ba_playsewithpan 0x0088, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_goto BattleAnimScript_0828057C
Move_BOUNCE:
	ba_loadspritegfx 0x27AC
	ba_loadspritegfx 0x2797
	ba_choosetwoturnanim BattleAnimScript_082805E7, BattleAnimScript_082805FB
BattleAnimScript_082805E6: @ 0x082805E6
	ba_end
BattleAnimScript_082805E7: @ 0x082805E7
	ba_playsewithpan 0x00CB, SOUND_PAN_ATTACKER
	ba_createsprite 0x08572004, ANIM_ATTACKER, 2, 0, 0
	ba_goto BattleAnimScript_082805E6
BattleAnimScript_082805FB: @ 0x082805FB
	ba_monbg ANIM_DEF_PARTNER
	ba_setalpha 12, 8
	ba_playsewithpan 0x00C1, SOUND_PAN_TARGET
	ba_createsprite 0x08572030, ANIM_TARGET, 3
	ba_delay 7
	ba_playsewithpan 0x008D, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 2, 0, 0, 1, 0
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 0, 5, 11, 1
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_goto BattleAnimScript_082805E6
Move_KARATE_CHOP:
	ba_loadspritegfx 0x279F
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_DEF_PARTNER
	ba_monbgprio_28 ANIM_TARGET
	ba_setalpha 12, 8
	ba_playsewithpan 0x0087, SOUND_PAN_TARGET
	ba_createsprite 0x08571A4C, ANIM_ATTACKER, 2, -16, 0, 0, 0, 10, 1, 3, 0
	ba_waitforvisualfinish
	ba_playsewithpan 0x008B, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 3, 0, 0, 1, 2
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 4, 0, 6, 1
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
Move_CROSS_CHOP:
	ba_loadspritegfx 0x279F
	ba_loadspritegfx 0x282D
	ba_monbg ANIM_DEF_PARTNER
	ba_setalpha 12, 8
	ba_playsewithpan 0x008C, SOUND_PAN_TARGET
	ba_createsprite 0x08571AAC, ANIM_ATTACKER, 2, 0, 0, 0
	ba_createsprite 0x08571AAC, ANIM_ATTACKER, 2, 0, 0, 1
	ba_delay 40
	ba_playsewithpan 0x0088, SOUND_PAN_TARGET
	ba_createsprite 0x08572E70, ANIM_ATTACKER, 2, 31, 3, 1, 0x7FFF, 10, 0, 10
	ba_createsprite 0x08572FB4, ANIM_ATTACKER, 3, 0, 0, 1, 20
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 7, 0, 9, 1
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
Move_JUMP_KICK:
	ba_loadspritegfx 0x279F
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_DEF_PARTNER
	ba_setalpha 12, 8
	ba_createsprite 0x0855A958, ANIM_ATTACKER, 2, 4, 4
	ba_delay 3
	ba_createsprite 0x08571A64, ANIM_ATTACKER, 2, -16, 8, 0, 0, 10, 1, 1, 1
	ba_playsewithpan 0x008F, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 1, 0, 0, 1, 1
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 5, 0, 7, 1
	ba_playsewithpan 0x008B, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
Move_HI_JUMP_KICK:
	ba_loadspritegfx 0x279F
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_DEF_PARTNER
	ba_setalpha 12, 8
	ba_createsprite 0x0855A9A0, ANIM_ATTACKER, 2, 0, -24, 0, 0, 8
	ba_waitforvisualfinish
	ba_delay 10
	ba_createsprite 0x0855A988, ANIM_ATTACKER, 2, 0, 0, 3
	ba_delay 2
	ba_createsprite 0x08571A64, ANIM_ATTACKER, 2, -16, 8, 0, 0, 10, 1, 1, 1
	ba_playsewithpan 0x008F, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, 0, 0, 1, 1
	ba_playsewithpan 0x007B, SOUND_PAN_TARGET
	ba_createsprite 0x0855A9A0, ANIM_ATTACKER, 2, 1, -28, 0, 0, 3
	ba_delay 3
	ba_createvisualtask AnimTask_ShakeMonInPlace, 2, 1, 3, 0, 11, 1
	ba_waitforvisualfinish
	ba_delay 5
	ba_createsprite 0x0855A988, ANIM_ATTACKER, 2, 1, 0, 6
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
Move_DOUBLE_KICK:
	ba_loadspritegfx 0x279F
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_DEF_PARTNER
	ba_setalpha 12, 8
	ba_createsprite 0x08571A94, ANIM_ATTACKER, 3, 1, 20, 1
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 4, 0, 6, 1
	ba_playsewithpan 0x007B, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
Move_TRIPLE_KICK:
	ba_loadspritegfx 0x279F
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_DEF_PARTNER
	ba_setalpha 12, 8
	ba_playsewithpan 0x007B, SOUND_PAN_TARGET
	ba_jumpifmoveturn 0, BattleAnimScript_0828083F
	ba_jumpifmoveturn 1, BattleAnimScript_08280875
	ba_goto BattleAnimScript_082808AB
BattleAnimScript_0828083A: @ 0x0828083A
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
BattleAnimScript_0828083F: @ 0x0828083F
	ba_createsprite 0x08571A7C, ANIM_TARGET, 4, -16, -8, 20, 1, 1
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 3, -16, -16, 1, 2
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 4, 0, 6, 1
	ba_goto BattleAnimScript_0828083A
BattleAnimScript_08280875: @ 0x08280875
	ba_createsprite 0x08571A7C, ANIM_TARGET, 4, 8, 8, 20, 1, 1
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 3, 8, 0, 1, 2
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 4, 0, 6, 1
	ba_goto BattleAnimScript_0828083A
BattleAnimScript_082808AB: @ 0x082808AB
	ba_createsprite 0x08571A7C, ANIM_TARGET, 4, 0, 0, 20, 1, 1
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 3, 0, -8, 1, 1
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 6, 0, 8, 1
	ba_goto BattleAnimScript_0828083A
Move_DYNAMIC_PUNCH:
	ba_loadspritegfx 0x279F
	ba_loadspritegfx 0x2797
	ba_loadspritegfx 0x27D6
	ba_loadspritegfx 0x2717
	ba_delay 1
	ba_monbg ANIM_DEF_PARTNER
	ba_setalpha 12, 8
	ba_playsewithpan 0x007B, SOUND_PAN_TARGET
	ba_createsprite 0x08571A7C, ANIM_TARGET, 3, 0, 0, 20, 1, 0
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 2, 0, 0, 1, 0
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 5, 0, 7, 1
	ba_delay 1
	ba_waitsound
	ba_playsewithpan 0x00B1, SOUND_PAN_TARGET
	ba_createvisualtask AnimTask_ShakeMon2, 5, 1, 5, 0, 28, 1
	ba_createsprite gExplosionSpriteTemplate, ANIM_ATTACKER, 3, 0, 0, 1, 1
	ba_delay 6
	ba_playsewithpan 0x00B1, SOUND_PAN_TARGET
	ba_createsprite gExplosionSpriteTemplate, ANIM_ATTACKER, 3, 24, -24, 1, 1
	ba_delay 6
	ba_playsewithpan 0x00B1, SOUND_PAN_TARGET
	ba_createsprite gExplosionSpriteTemplate, ANIM_ATTACKER, 3, -16, 16, 1, 1
	ba_delay 6
	ba_playsewithpan 0x00B1, SOUND_PAN_TARGET
	ba_createsprite gExplosionSpriteTemplate, ANIM_ATTACKER, 3, -24, -12, 1, 1
	ba_delay 6
	ba_playsewithpan 0x00B1, SOUND_PAN_TARGET
	ba_createsprite gExplosionSpriteTemplate, ANIM_ATTACKER, 3, 16, 16, 1, 1
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
Move_COUNTER:
	ba_loadspritegfx 0x2797
	ba_loadspritegfx 0x279F
	ba_monbg ANIM_DEF_PARTNER
	ba_setalpha 12, 8
	ba_createvisualtask AnimTask_TranslateMonEllipticalRespectSide, 2, 0, 18, 6, 1, 4
	ba_playsewithpan 0x007A, SOUND_PAN_ATTACKER
	ba_waitforvisualfinish
	ba_createsprite 0x0855A9A0, ANIM_ATTACKER, 2, 0, 20, 0, 0, 4
	ba_delay 4
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, -15, 18, 1, 0
	ba_playsewithpan 0x007B, SOUND_PAN_TARGET
	ba_delay 1
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 5, 0, 25, 1
	ba_createsprite 0x08571A7C, ANIM_ATTACKER, 3, -15, 18, 8, 1, 0
	ba_delay 3
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, 0, -4, 1, 0
	ba_playsewithpan 0x007B, SOUND_PAN_TARGET
	ba_delay 1
	ba_createsprite 0x08571A7C, ANIM_ATTACKER, 3, 0, -4, 8, 1, 0
	ba_delay 3
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, 15, 9, 1, 0
	ba_playsewithpan 0x007B, SOUND_PAN_TARGET
	ba_delay 1
	ba_createsprite 0x08571A7C, ANIM_ATTACKER, 3, 15, 9, 8, 1, 0
	ba_delay 5
	ba_createsprite 0x0855A988, ANIM_ATTACKER, 2, 0, 0, 5
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
Move_VITAL_THROW:
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_DEF_PARTNER
	ba_setalpha 12, 8
	ba_playsewithpan 0x007A, SOUND_PAN_ATTACKER
	ba_createvisualtask AnimTask_TranslateMonEllipticalRespectSide, 2, 0, 12, 4, 1, 2
	ba_waitforvisualfinish
	ba_createsprite 0x0855A9A0, ANIM_ATTACKER, 2, 0, 20, 0, 0, 4
	ba_delay 2
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 3, 0, 0, 1, 1
	ba_playsewithpan 0x007B, SOUND_PAN_TARGET
	ba_delay 1
	ba_createsprite 0x0855A9A0, ANIM_ATTACKER, 2, 1, -24, 0, 0, 4
	ba_waitforvisualfinish
	ba_delay 3
	ba_createsprite 0x0855A988, ANIM_ATTACKER, 2, 0, 0, 7
	ba_delay 11
	ba_createsprite 0x0855A988, ANIM_ATTACKER, 2, 1, 0, 10
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
Move_ROCK_SMASH:
	ba_loadspritegfx 0x274A
	ba_loadspritegfx 0x2797
	ba_loadspritegfx 0x279F
	ba_monbg ANIM_DEF_PARTNER
	ba_setalpha 12, 8
	ba_delay 1
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 3, 0, 0, 1, 1
	ba_createsprite 0x08571A7C, ANIM_ATTACKER, 2, 0, 0, 8, 1, 0
	ba_playsewithpan 0x007B, SOUND_PAN_TARGET
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 3, 0, 5, 1
	ba_waitforvisualfinish
	ba_playsewithpan 0x0083, SOUND_PAN_TARGET
	ba_createsprite 0x08572700, ANIM_ATTACKER, 2, 0, 0, 20, 24, 14, 2
	ba_createsprite 0x08572700, ANIM_ATTACKER, 2, 5, 0, -20, 24, 14, 1
	ba_createsprite 0x08572700, ANIM_ATTACKER, 2, 0, 5, 20, -24, 14, 2
	ba_createsprite 0x08572700, ANIM_ATTACKER, 2, -5, 0, -20, -24, 14, 2
	ba_createsprite 0x08572700, ANIM_ATTACKER, 2, 0, -5, 30, 18, 8, 2
	ba_createsprite 0x08572700, ANIM_ATTACKER, 2, 0, 0, 30, -18, 8, 2
	ba_createsprite 0x08572700, ANIM_ATTACKER, 2, 0, 0, -30, 18, 8, 2
	ba_createsprite 0x08572700, ANIM_ATTACKER, 2, 0, 0, -30, -18, 8, 2
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 0, 3, 7, 1
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
Move_SUBMISSION:
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_DEF_PARTNER
	ba_setalpha 12, 8
	ba_playsewithpan 0x0087, SOUND_PAN_ATTACKER
	ba_waitplaysewithpan 0x008B, SOUND_PAN_TARGET, 10
	ba_waitplaysewithpan 0x0087, SOUND_PAN_ATTACKER, 20
	ba_waitplaysewithpan 0x008B, SOUND_PAN_TARGET, 30
	ba_waitplaysewithpan 0x0087, SOUND_PAN_ATTACKER, 40
	ba_waitplaysewithpan 0x008B, SOUND_PAN_TARGET, 50
	ba_waitplaysewithpan 0x0087, SOUND_PAN_ATTACKER, 60
	ba_waitplaysewithpan 0x008B, SOUND_PAN_TARGET, 70
	ba_waitplaysewithpan 0x0087, SOUND_PAN_ATTACKER, 80
	ba_waitplaysewithpan 0x008B, SOUND_PAN_TARGET, 90
	ba_createvisualtask AnimTask_TranslateMonElliptical, 2, 0, -18, 6, 6, 4
	ba_createvisualtask AnimTask_TranslateMonElliptical, 2, 1, 18, 6, 6, 4
	ba_call BattleAnimScript_08280C5A
	ba_call BattleAnimScript_08280C5A
	ba_call BattleAnimScript_08280C5A
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
BattleAnimScript_08280C5A: @ 0x08280C5A
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 3, 0, -12, 1, 1
	ba_delay 8
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 3, -12, 8, 1, 1
	ba_delay 8
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 3, 12, 0, 1, 1
	ba_delay 8
	ba_return
Move_SUNNY_DAY:
BattleAnimScript_08280C8E: @ 0x08280C8E
	ba_loadspritegfx 0x27AD
	ba_monbg ANIM_ATK_PARTNER
	ba_setalpha 13, 3
	ba_createvisualtask sub_08116E70, 10, 1921, 1, 0, 6, 0x7FFF
	ba_waitforvisualfinish
	ba_panse_26 0x00CA, SOUND_PAN_ATTACKER, SOUND_PAN_TARGET, 1, 0
	ba_call BattleAnimScript_08280CDA
	ba_call BattleAnimScript_08280CDA
	ba_call BattleAnimScript_08280CDA
	ba_call BattleAnimScript_08280CDA
	ba_waitforvisualfinish
	ba_createvisualtask sub_08116E70, 10, 1921, 1, 6, 0, 0x7FFF
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_ATK_PARTNER
	ba_blendoff
	ba_end
BattleAnimScript_08280CDA: @ 0x08280CDA
	ba_createsprite 0x08571084, ANIM_ATTACKER, 40
	ba_delay 6
	ba_return
Move_COTTON_SPORE:
	ba_loadspritegfx 0x27AE
	ba_monbg ANIM_DEF_PARTNER
	ba_monbgprio_28 ANIM_TARGET
	ba_loopsewithpan 0x00A9, SOUND_PAN_TARGET, 18, 10
	ba_call BattleAnimScript_08280D04
	ba_call BattleAnimScript_08280D04
	ba_call BattleAnimScript_08280D04
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_end
BattleAnimScript_08280D04: @ 0x08280D04
	ba_createsprite 0x0856DED0, ANIM_ATTACKER, 2, 0, -20, 85, 80, 0
	ba_delay 12
	ba_createsprite 0x0856DED0, ANIM_ATTACKER, 2, 0, -10, 170, 80, 0
	ba_delay 12
	ba_createsprite 0x0856DED0, ANIM_ATTACKER, 2, 0, -15, 0, 80, 0
	ba_delay 12
	ba_return
Move_SPORE:
	ba_loadspritegfx 0x27AE
	ba_monbg ANIM_DEF_PARTNER
	ba_setalpha 12, 8
	ba_createvisualtask AnimTask_SporeDoubleBattle, 2
	ba_loopsewithpan 0x00A9, SOUND_PAN_TARGET, 16, 11
	ba_call BattleAnimScript_08280D69
	ba_call BattleAnimScript_08280D69
	ba_call BattleAnimScript_08280D69
	ba_waitforvisualfinish
	ba_delay 1
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
BattleAnimScript_08280D69: @ 0x08280D69
	ba_createsprite 0x0856DED0, ANIM_TARGET, 2, 0, -20, 85, 80, 1
	ba_delay 12
	ba_createsprite 0x0856DED0, ANIM_TARGET, 2, 0, -10, 170, 80, 1
	ba_delay 12
	ba_createsprite 0x0856DED0, ANIM_TARGET, 2, 0, -15, 0, 80, 1
	ba_delay 12
	ba_return
Move_PETAL_DANCE:
	ba_loadspritegfx 0x27AF
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_DEF_PARTNER
	ba_setalpha 12, 8
	ba_playsewithpan 0x00CA, SOUND_PAN_ATTACKER
	ba_createvisualtask AnimTask_TranslateMonEllipticalRespectSide, 2, 0, 12, 6, 6, 3
	ba_createsprite 0x0856DF00, ANIM_ATTACKER, 2, 0, -24, 8, 140
	ba_createsprite 0x0856DF18, ANIM_ATTACKER, 2, 16, -24, 8, 100
	ba_createsprite 0x0856DF18, ANIM_ATTACKER, 2, -16, -24, 8, 100
	ba_delay 15
	ba_createsprite 0x0856DF00, ANIM_ATTACKER, 2, 0, -24, 8, 140
	ba_createsprite 0x0856DF18, ANIM_ATTACKER, 2, 32, -24, 8, 100
	ba_createsprite 0x0856DF18, ANIM_ATTACKER, 2, -32, -24, 8, 100
	ba_delay 15
	ba_createsprite 0x0856DF00, ANIM_ATTACKER, 2, 0, -24, 8, 140
	ba_createsprite 0x0856DF18, ANIM_ATTACKER, 2, 24, -24, 8, 100
	ba_createsprite 0x0856DF18, ANIM_ATTACKER, 2, -24, -24, 8, 100
	ba_delay 30
	ba_createsprite 0x0856DF18, ANIM_ATTACKER, 2, 16, -24, 0, 100
	ba_createsprite 0x0856DF18, ANIM_ATTACKER, 2, -16, -24, 0, 100
	ba_delay 30
	ba_createsprite 0x0856DF18, ANIM_ATTACKER, 2, 20, -16, 14, 80
	ba_createsprite 0x0856DF18, ANIM_ATTACKER, 2, -20, -14, 16, 80
	ba_waitforvisualfinish
	ba_createsprite 0x0855A9A0, ANIM_ATTACKER, 2, 0, 24, 0, 0, 5
	ba_delay 3
	ba_playsewithpan 0x008D, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 3, 0, 0, 1, 0
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 6, 0, 8, 1
	ba_waitforvisualfinish
	ba_delay 8
	ba_createsprite 0x0855A988, ANIM_ATTACKER, 2, 0, 0, 7
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
Move_RAZOR_LEAF:
	ba_loadspritegfx 0x274F
	ba_loadspritegfx 0x27B0
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_DEF_PARTNER
	ba_setalpha 12, 8
	ba_delay 1
	ba_loopsewithpan 0x00A9, SOUND_PAN_ATTACKER, 10, 5
	ba_createsprite 0x0856DF74, ANIM_ATTACKER, 2, -3, -2, 10
	ba_delay 2
	ba_createsprite 0x0856DF74, ANIM_ATTACKER, 2, 0xFFFF, 0xFFFF, 15
	ba_delay 2
	ba_createsprite 0x0856DF74, ANIM_ATTACKER, 2, -4, -4, 7
	ba_delay 2
	ba_createsprite 0x0856DF74, ANIM_ATTACKER, 2, 3, -3, 11
	ba_delay 2
	ba_createsprite 0x0856DF74, ANIM_ATTACKER, 2, 0xFFFF, -6, 8
	ba_delay 2
	ba_createsprite 0x0856DF74, ANIM_ATTACKER, 2, 2, 0xFFFF, 12
	ba_delay 2
	ba_createsprite 0x0856DF74, ANIM_ATTACKER, 2, -3, -4, 13
	ba_delay 2
	ba_createsprite 0x0856DF74, ANIM_ATTACKER, 2, 4, -5, 7
	ba_delay 2
	ba_createsprite 0x0856DF74, ANIM_ATTACKER, 2, 2, -6, 11
	ba_delay 2
	ba_createsprite 0x0856DF74, ANIM_ATTACKER, 2, -3, -5, 8
	ba_delay 60
	ba_playsewithpan 0x00A0, SOUND_PAN_ATTACKER
	ba_createsprite 0x0856DFBC, ANIM_TARGET, 3, 20, -10, 20, 0, 22, 20, 1
	ba_createsprite 0x0856DFBC, ANIM_TARGET, 3, 20, -10, 20, 0, 22, -20, 1
	ba_delay 20
	ba_playsewithpan 0x0088, SOUND_PAN_TARGET
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 2, 0, 8, 1
	ba_createvisualtask AnimTask_ShakeMon2, 2, 3, 2, 0, 8, 1
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
Move_ANCIENT_POWER:
Move_NATURE_POWER:
	ba_loadspritegfx 0x274A
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_DEF_PARTNER
	ba_setalpha 12, 8
	ba_createsprite 0x08572EBC, ANIM_ATTACKER, 2, 4, 1, 10, 1
	ba_createsprite gAncientPowerRockSpriteTemplate, ANIM_ATTACKER, 2, 20, 32, -48, 50, 2
	ba_createsprite gAncientPowerRockSpriteTemplate, ANIM_ATTACKER, 2, 0, 32, -38, 25, 5
	ba_createsprite gAncientPowerRockSpriteTemplate, ANIM_ATTACKER, 2, 32, 32, -28, 40, 3
	ba_createsprite gAncientPowerRockSpriteTemplate, ANIM_ATTACKER, 2, -20, 32, -48, 50, 2
	ba_createsprite gAncientPowerRockSpriteTemplate, ANIM_ATTACKER, 2, 20, 32, -28, 60, 1
	ba_createsprite gAncientPowerRockSpriteTemplate, ANIM_ATTACKER, 2, 0, 32, -28, 30, 4
	ba_createvisualtask AnimTask_ShakeMon2, 2, 0, 1, 0, 30, 1
	ba_playsewithpan 0x00AB, SOUND_PAN_ATTACKER
	ba_delay 10
	ba_createsprite gAncientPowerRockSpriteTemplate, ANIM_ATTACKER, 2, 15, 32, -48, 25, 5
	ba_createsprite gAncientPowerRockSpriteTemplate, ANIM_ATTACKER, 2, -10, 32, -42, 30, 4
	ba_delay 10
	ba_createsprite gAncientPowerRockSpriteTemplate, ANIM_ATTACKER, 2, 0, 32, -42, 25, 5
	ba_createsprite gAncientPowerRockSpriteTemplate, ANIM_ATTACKER, 2, -25, 32, -48, 30, 4
	ba_waitforvisualfinish
	ba_createsprite 0x0855A9A0, ANIM_ATTACKER, 2, 0, 16, 0, 0, 4
	ba_delay 3
	ba_playsewithpan 0x00B1, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 3, 0, 0, 1, 1
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 3, 0, 6, 1
	ba_waitforvisualfinish
	ba_createsprite 0x0855A988, ANIM_ATTACKER, 2, 0, 0, 7
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
Move_OCTAZOOKA:
	ba_loadspritegfx 0x272E
	ba_loadspritegfx 0x2721
	ba_playsewithpan 0x008D, SOUND_PAN_ATTACKER
	ba_createsprite gOctazookaSmokeSpriteTemplate, ANIM_TARGET, 2, 20, 0, 0, 0, 20, 0
	ba_waitforvisualfinish
	ba_playsewithpan 0x00B1, SOUND_PAN_TARGET
	ba_createsprite gOctazookaInkSpriteTemplate, ANIM_TARGET, 2, 8, 8, 1, 0
	ba_delay 2
	ba_createsprite gOctazookaInkSpriteTemplate, ANIM_TARGET, 2, -8, -8, 1, 0
	ba_delay 2
	ba_createsprite gOctazookaInkSpriteTemplate, ANIM_TARGET, 2, 8, -8, 1, 0
	ba_delay 2
	ba_createsprite gOctazookaInkSpriteTemplate, ANIM_TARGET, 2, -8, 8, 1, 0
	ba_waitforvisualfinish
	ba_end
Move_MIST:
	ba_loadspritegfx 0x27A0
	ba_monbg ANIM_ATK_PARTNER
	ba_setalpha 12, 8
	ba_loopsewithpan 0x00A8, SOUND_PAN_ATTACKER, 20, 15
	ba_call BattleAnimScript_082811BB
	ba_call BattleAnimScript_082811BB
	ba_call BattleAnimScript_082811BB
	ba_call BattleAnimScript_082811BB
	ba_call BattleAnimScript_082811BB
	ba_call BattleAnimScript_082811BB
	ba_call BattleAnimScript_082811BB
	ba_delay 32
	ba_createvisualtask sub_08116254, 2, 10, 8, 2, 0, 14, 0x7FFF
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_ATK_PARTNER
	ba_blendoff
	ba_end
BattleAnimScript_082811BB: @ 0x082811BB
	ba_createsprite 0x08571810, ANIM_ATTACKER, 2, 0, -24, 48, 240, 0, 1
	ba_delay 7
	ba_return
Move_HAZE:
	ba_waitforvisualfinish
	ba_playsewithpan 0x00F6, 0x00
	ba_createvisualtask AnimTask_Haze1, 5
	ba_delay 30
	ba_createvisualtask sub_08116E70, 10, 1920, 2, 0, 16, 0
	ba_delay 90
	ba_createvisualtask sub_08116E70, 10, 1920, 1, 16, 0, 0
	ba_end
Move_FIRE_PUNCH:
	ba_loadspritegfx 0x279F
	ba_loadspritegfx 0x272D
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_DEF_PARTNER
	ba_setalpha 12, 8
	ba_createvisualtask sub_08116E70, 10, 4, 2, 0, 9, 31
	ba_createsprite 0x08570F4C, ANIM_TARGET, 1, 0
	ba_createsprite 0x08570F4C, ANIM_TARGET, 1, 64
	ba_createsprite 0x08570F4C, ANIM_TARGET, 1, 128
	ba_createsprite 0x08570F4C, ANIM_TARGET, 1, 196
	ba_playsewithpan 0x0090, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_createsprite 0x08571A7C, ANIM_TARGET, 3, 0, 0, 8, 1, 0
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 2, 0, 0, 1, 1
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 0, 3, 15, 1
	ba_call BattleAnimScript_0828129F
	ba_delay 4
	ba_playsewithpan 0x0093, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_createvisualtask sub_08116E70, 10, 4, 0, 9, 0, 31
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
BattleAnimScript_0828129F: @ 0x0828129F
	ba_createsprite 0x08570F64, ANIM_TARGET, 1, 0, 10, 192, 176, 40
	ba_createsprite 0x08570F64, ANIM_TARGET, 1, 0, 10, -192, 240, 40
	ba_createsprite 0x08570F64, ANIM_TARGET, 1, 0, 10, 192, -160, 40
	ba_createsprite 0x08570F64, ANIM_TARGET, 1, 0, 10, -192, -112, 40
	ba_createsprite 0x08570F64, ANIM_TARGET, 1, 0, 10, 160, 48, 40
	ba_createsprite 0x08570F64, ANIM_TARGET, 1, 0, 10, -224, -32, 40
	ba_createsprite 0x08570F64, ANIM_TARGET, 1, 0, 10, 112, -128, 40
	ba_return
Move_LEER:
	ba_loadspritegfx 0x272B
	ba_monbg ANIM_ATTACKER
	ba_monbgprio_28 ANIM_ATTACKER
	ba_setalpha 8, 8
	ba_playsewithpan 0x00C0, SOUND_PAN_ATTACKER
	ba_createsprite 0x085ACF58, ANIM_ATTACKER, 2, 24, -12
	ba_createvisualtask AnimTask_ScaleMonAndRestore, 5, -5, -5, 10, 0, 1
	ba_waitforvisualfinish
	ba_delay 10
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 1, 0, 9, 1
	ba_createvisualtask AnimTask_ShakeMon2, 2, 3, 1, 0, 9, 1
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_ATTACKER
	ba_blendoff
	ba_delay 1
	ba_waitforvisualfinish
	ba_end
Move_DREAM_EATER:
	ba_loadspritegfx 0x27A3
	ba_loadspritegfx 0x272F
	ba_monbg ANIM_DEF_PARTNER
	ba_monbgprio_2A ANIM_TARGET
	ba_playsewithpan 0x00BD, SOUND_PAN_ATTACKER
	ba_call BattleAnimScript_08286258
	ba_setalpha 8, 8
	ba_playsewithpan 0x00CC, SOUND_PAN_TARGET
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 5, 0, 15, 1
	ba_createvisualtask AnimTask_ScaleMonAndRestore, 5, -6, -6, 15, 1, 1
	ba_waitforvisualfinish
	ba_setalpha 12, 8
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 0, 2, 25, 1
	ba_call BattleAnimScript_082813D8
	ba_waitforvisualfinish
	ba_delay 15
	ba_call BattleAnimScript_08285F66
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_delay 1
	ba_call BattleAnimScript_08286264
	ba_end
BattleAnimScript_082813D8: @ 0x082813D8
	ba_playsewithpan 0x00C1, SOUND_PAN_TARGET
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 0, 5, 8, 26
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 5, -18, -40, 35
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, -10, 20, 20, 39
	ba_delay 4
	ba_playsewithpan 0x00C1, SOUND_PAN_TARGET
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 0, 5, 28, 26
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 10, -5, -8, 26
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, -10, 20, 40, 39
	ba_delay 4
	ba_playsewithpan 0x00C1, SOUND_PAN_TARGET
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 10, -5, -8, 26
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, -5, 15, 16, 33
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 10, -5, -32, 26
	ba_delay 4
	ba_playsewithpan 0x00C1, SOUND_PAN_TARGET
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 0, -15, -16, 36
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 0, 5, 8, 26
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 10, -5, -8, 26
	ba_delay 4
	ba_playsewithpan 0x00C1, SOUND_PAN_TARGET
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, -5, 15, 16, 33
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 0, -15, -16, 36
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 0, 5, 8, 26
	ba_delay 4
	ba_playsewithpan 0x00C1, SOUND_PAN_TARGET
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 0, 5, 8, 26
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, -5, 15, 16, 33
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 10, -5, -40, 26
	ba_delay 4
	ba_playsewithpan 0x00C1, SOUND_PAN_TARGET
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, -5, 15, 36, 33
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 10, -5, -8, 26
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, -10, 20, 20, 39
	ba_delay 4
	ba_playsewithpan 0x00C1, SOUND_PAN_TARGET
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 0, 5, 8, 26
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 0, 5, 8, 26
	ba_createsprite 0x0856DE54, ANIM_ATTACKER, 3, 5, -18, -20, 35
	ba_delay 4
	ba_return
Move_POISON_GAS:
	ba_loadspritegfx 0x27BC
	ba_loadspritegfx 0x27A6
	ba_delay 0
	ba_monbg ANIM_DEF_PARTNER
	ba_monbgprio_29
	ba_setalpha 12, 8
	ba_delay 0
	ba_playsewithpan 0x00A8, SOUND_PAN_ATTACKER
	ba_createsprite 0x08571880, ANIM_TARGET, 0, 64, 0, 0, -32, -6, 0x1060, 1072, 0
	ba_delay 4
	ba_playsewithpan 0x00A8, SOUND_PAN_ATTACKER
	ba_createsprite 0x08571880, ANIM_TARGET, 0, 64, 0, 0, -32, -6, 0x1060, 1072, 0
	ba_delay 4
	ba_playsewithpan 0x00A8, SOUND_PAN_ATTACKER
	ba_createsprite 0x08571880, ANIM_TARGET, 0, 64, 0, 0, -32, -6, 0x1060, 1072, 0
	ba_delay 4
	ba_playsewithpan 0x00A8, SOUND_PAN_ATTACKER
	ba_createsprite 0x08571880, ANIM_TARGET, 0, 64, 0, 0, -32, -6, 0x1060, 1072, 0
	ba_delay 4
	ba_playsewithpan 0x00A8, SOUND_PAN_ATTACKER
	ba_createsprite 0x08571880, ANIM_TARGET, 0, 64, 0, 0, -32, -6, 0x1060, 1072, 0
	ba_delay 4
	ba_playsewithpan 0x00A8, SOUND_PAN_ATTACKER
	ba_createsprite 0x08571880, ANIM_TARGET, 0, 64, 0, 0, -32, -6, 0x1060, 1072, 0
	ba_delay 40
	ba_loopsewithpan 0x00A8, SOUND_PAN_TARGET, 28, 6
	ba_createvisualtask sub_08116254, 2, 4, 6, 2, 0, 12, 0x681A
	ba_waitforvisualfinish
	ba_blendoff
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_delay 0
	ba_end
Move_BIND:
	ba_createvisualtask AnimTask_SwayMon, 5, 0, 6, 0x0D00, 4, 0
	ba_goto BattleAnimScript_08281665
BattleAnimScript_08281665: @ 0x08281665
	ba_playsewithpan 0x00AA, SOUND_PAN_TARGET
	ba_call BattleAnimScript_08281675
	ba_call BattleAnimScript_08281675
	ba_waitforvisualfinish
	ba_end
BattleAnimScript_08281675: @ 0x08281675
	ba_createvisualtask AnimTask_ScaleMonAndRestore, 5, 10, -5, 5, 1, 0
	ba_delay 16
	ba_return
Move_WRAP:
	ba_createvisualtask AnimTask_TranslateMonEllipticalRespectSide, 2, 0, 6, 4, 2, 4
	ba_goto BattleAnimScript_08281665
Move_PSYBEAM:
	ba_loadspritegfx 0x27B3
	ba_playsewithpan 0x00BD, SOUND_PAN_ATTACKER
	ba_call BattleAnimScript_08286258
	ba_createsoundtask sub_08158B94, 200, -64, 63, 3, 4, 0, 15
	ba_call BattleAnimScript_08281723
	ba_call BattleAnimScript_08281723
	ba_createvisualtask AnimTask_SwayMon, 5, 0, 6, 2048, 4, 1
	ba_createvisualtask sub_08116254, 2, 4, 2, 2, 0, 12, 0x7E5F
	ba_call BattleAnimScript_08281723
	ba_call BattleAnimScript_08281723
	ba_call BattleAnimScript_08281723
	ba_call BattleAnimScript_08281723
	ba_call BattleAnimScript_08281723
	ba_call BattleAnimScript_08281723
	ba_call BattleAnimScript_08281723
	ba_call BattleAnimScript_08281723
	ba_call BattleAnimScript_08281723
	ba_waitforvisualfinish
	ba_delay 1
	ba_call BattleAnimScript_08286264
	ba_end
BattleAnimScript_08281723: @ 0x08281723
	ba_createsprite 0x08572220, ANIM_TARGET, 2, 16, 0, 0, 0, 13, 0
	ba_delay 4
	ba_return
Move_HYPNOSIS:
	ba_loadspritegfx 0x27B3
	ba_call BattleAnimScript_08286258
	ba_call BattleAnimScript_0828176C
	ba_call BattleAnimScript_0828176C
	ba_call BattleAnimScript_0828176C
	ba_createvisualtask sub_08116254, 2, 4, 2, 2, 0, 12, 0x7E5F
	ba_waitforvisualfinish
	ba_delay 1
	ba_call BattleAnimScript_08286264
	ba_end
BattleAnimScript_0828176C: @ 0x0828176C
	ba_playsewithpan 0x00B8, SOUND_PAN_ATTACKER
	ba_createsprite 0x08572220, ANIM_TARGET, 2, 0, 8, 0, 8, 27, 0
	ba_createsprite 0x08572220, ANIM_TARGET, 2, 16, -8, 0, -8, 27, 0
	ba_delay 6
	ba_return
Move_PSYWAVE:
	ba_loadspritegfx 0x27B5
	ba_playsewithpan 0x00BD, SOUND_PAN_ATTACKER
	ba_call BattleAnimScript_08286258
	ba_createvisualtask sub_08107F18, 5, 100
	ba_createsoundtask sub_08158B94, 203, -64, 63, 2, 9, 0, 10
	ba_call BattleAnimScript_082817FC
	ba_call BattleAnimScript_082817FC
	ba_createvisualtask sub_08116254, 2, 4, 1, 4, 0, 12, 0x7E5F
	ba_call BattleAnimScript_082817FC
	ba_call BattleAnimScript_082817FC
	ba_call BattleAnimScript_082817FC
	ba_call BattleAnimScript_082817FC
	ba_waitforvisualfinish
	ba_delay 1
	ba_call BattleAnimScript_08286264
	ba_end
BattleAnimScript_082817FC: @ 0x082817FC
	ba_createsprite 0x08570D54, ANIM_TARGET, 3, 10, 10, 0, 16
	ba_delay 4
	ba_createsprite 0x08570D54, ANIM_TARGET, 3, 10, 10, 0, 16
	ba_delay 4
	ba_return
Move_ZAP_CANNON:
	ba_loadspritegfx 0x27BB
	ba_loadspritegfx 0x271B
	ba_playsewithpan 0x008A, SOUND_PAN_ATTACKER
	ba_createsprite 0x08571348, ANIM_TARGET, 3, 10, 0, 0, 0, 30, 0
	ba_createsprite 0x08571374, ANIM_TARGET, 4, 10, 0, 16, 30, 0, 40, 0
	ba_createsprite 0x08571374, ANIM_TARGET, 4, 10, 0, 16, 30, 64, 40, 1
	ba_createsprite 0x08571374, ANIM_TARGET, 4, 10, 0, 16, 30, 128, 40, 0
	ba_createsprite 0x08571374, ANIM_TARGET, 4, 10, 0, 16, 30, 192, 40, 2
	ba_createsprite 0x08571374, ANIM_TARGET, 4, 10, 0, 8, 30, 32, 40, 0
	ba_createsprite 0x08571374, ANIM_TARGET, 4, 10, 0, 8, 30, 96, 40, 1
	ba_createsprite 0x08571374, ANIM_TARGET, 4, 10, 0, 8, 30, 160, 40, 0
	ba_createsprite 0x08571374, ANIM_TARGET, 4, 10, 0, 8, 30, 224, 40, 2
	ba_waitforvisualfinish
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 4, 0, 5, 1
	ba_delay 15
	ba_waitplaysewithpan 0x0077, SOUND_PAN_TARGET, 19
	ba_call BattleAnimScript_08286171
	ba_waitforvisualfinish
	ba_end
Move_STEEL_WING:
	ba_loadspritegfx 0x2719
	ba_loadspritegfx 0x2797
	ba_loopsewithpan 0x0078, SOUND_PAN_ATTACKER, 28, 2
	ba_createvisualtask AnimTask_MetallicShine, 5, 0, 0, 0
	ba_waitforvisualfinish
	ba_monbg ANIM_DEF_PARTNER
	ba_monbgprio_28 ANIM_TARGET
	ba_setalpha 12, 8
	ba_loopsewithpan 0x009D, SOUND_PAN_ATTACKER, 20, 2
	ba_createvisualtask AnimTask_TranslateMonElliptical, 2, 0, 12, 4, 1, 4
	ba_createvisualtask sub_0810E728, 5, 1, 70
	ba_createsprite 0x08571E88, ANIM_ATTACKER, 2, -25, 0, 0, 0, 20
	ba_createsprite 0x08571E88, ANIM_ATTACKER, 2, 25, 0, 0, 0, 20
	ba_delay 24
	ba_createsprite 0x0855A9A0, ANIM_ATTACKER, 2, 0, 24, 0, 0, 9
	ba_delay 17
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, 16, 0, 1, 1
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, -16, 0, 1, 1
	ba_playsewithpan 0x0088, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_createsprite 0x0855A988, ANIM_ATTACKER, 2, 0, 0, 11
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
Move_IRON_TAIL:
	ba_loadspritegfx 0x2797
	ba_loopsewithpan 0x0078, SOUND_PAN_ATTACKER, 28, 2
	ba_createvisualtask AnimTask_MetallicShine, 5, 1, 0, 0
	ba_waitforvisualfinish
	ba_monbg ANIM_TARGET
	ba_setalpha 12, 8
	ba_createsprite 0x0855A958, ANIM_ATTACKER, 2, 4, 4
	ba_delay 6
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 2, 0, 0, 1, 2
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 3, 0, 6, 1
	ba_playsewithpan 0x007B, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_createvisualtask AnimTask_SetGreyscaleOrOriginalPal, 5, 0, 1
	ba_clearmonbg ANIM_TARGET
	ba_blendoff
	ba_waitforvisualfinish
	ba_end
Move_POISON_TAIL:
	ba_loadspritegfx 0x2797
	ba_loadspritegfx 0x27A6
	ba_loopsewithpan 0x0078, SOUND_PAN_ATTACKER, 28, 2
	ba_createvisualtask AnimTask_MetallicShine, 5, 1, 1, 0x5CD8
	ba_waitforvisualfinish
	ba_monbg ANIM_TARGET
	ba_setalpha 12, 8
	ba_createsprite 0x0855A958, ANIM_ATTACKER, 2, 4, 4
	ba_delay 6
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 2, 0, 0, 1, 2
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 3, 0, 6, 1
	ba_playsewithpan 0x007B, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_createvisualtask AnimTask_SetGreyscaleOrOriginalPal, 5, 0, 1
	ba_clearmonbg ANIM_TARGET
	ba_blendoff
	ba_call BattleAnimScript_08285FF8
	ba_waitforvisualfinish
	ba_end
Move_METAL_CLAW:
	ba_loadspritegfx 0x2737
	ba_loopsewithpan 0x0078, SOUND_PAN_ATTACKER, 28, 2
	ba_createvisualtask AnimTask_MetallicShine, 5, 0, 0, 0
	ba_waitforvisualfinish
	ba_createsprite 0x0855A958, ANIM_ATTACKER, 2, 6, 4
	ba_delay 2
	ba_playsewithpan 0x0088, SOUND_PAN_TARGET
	ba_createsprite 0x08572D1C, ANIM_TARGET, 2, -10, -10, 0
	ba_createsprite 0x08572D1C, ANIM_TARGET, 2, -10, 10, 0
	ba_createsprite 0x08572EBC, ANIM_ATTACKER, 2, -4, 1, 10, 3, 1
	ba_delay 8
	ba_createsprite 0x0855A958, ANIM_ATTACKER, 2, 6, 4
	ba_delay 2
	ba_playsewithpan 0x0088, SOUND_PAN_TARGET
	ba_createsprite 0x08572D1C, ANIM_TARGET, 2, 10, -10, 1
	ba_createsprite 0x08572D1C, ANIM_TARGET, 2, 10, 10, 1
	ba_createsprite 0x08572EBC, ANIM_ATTACKER, 2, -4, 1, 10, 3, 1
	ba_waitforvisualfinish
	ba_end
Move_NIGHT_SHADE:
	ba_monbg ANIM_ATTACKER
	ba_monbgprio_28 ANIM_ATTACKER
	ba_playsewithpan 0x00BD, SOUND_PAN_ATTACKER
	ba_fadetobg BG_GHOST
	ba_waitbgfadein
	ba_delay 10
	ba_playsewithpan 0x00C0, SOUND_PAN_ATTACKER
	ba_createvisualtask sub_081120DC, 5, 85
	ba_delay 70
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 2, 0, 12, 1
	ba_createvisualtask sub_08116254, 2, 4, 0, 2, 0, 13, 0
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_ATTACKER
	ba_delay 1
	ba_restorebg
	ba_waitbgfadein
	ba_end
Move_EGG_BOMB:
	ba_loadspritegfx 0x27D6
	ba_loadspritegfx 0x27BF
	ba_playsewithpan 0x00A7, SOUND_PAN_ATTACKER
	ba_createsprite gEggBombProjectileSpriteTemplate, ANIM_TARGET, 2, 10, 0, 0, 0, 25, -32
	ba_waitforvisualfinish
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 4, 0, 16, 1
	ba_createsprite gExplosionSpriteTemplate, ANIM_TARGET, 4, 6, 5, 1, 0
	ba_playsewithpan 0x00B1, SOUND_PAN_TARGET
	ba_delay 3
	ba_createsprite gExplosionSpriteTemplate, ANIM_TARGET, 4, -16, -15, 1, 0
	ba_playsewithpan 0x00B1, SOUND_PAN_TARGET
	ba_delay 3
	ba_createsprite gExplosionSpriteTemplate, ANIM_TARGET, 4, 16, -5, 1, 0
	ba_playsewithpan 0x00B1, SOUND_PAN_TARGET
	ba_delay 3
	ba_createsprite gExplosionSpriteTemplate, ANIM_TARGET, 4, -12, 18, 1, 0
	ba_playsewithpan 0x00B1, SOUND_PAN_TARGET
	ba_delay 3
	ba_createsprite gExplosionSpriteTemplate, ANIM_TARGET, 4, 0, 5, 1, 0
	ba_playsewithpan 0x00B1, SOUND_PAN_TARGET
	ba_delay 3
	ba_waitforvisualfinish
	ba_end
Move_SHADOW_BALL:
	ba_loadspritegfx 0x27C0
	ba_fadetobg BG_GHOST
	ba_waitbgfadein
	ba_delay 15
	ba_createsoundtask sub_08158B94, 168, -64, 63, 5, 5, 0, 5
	ba_createsprite 0x0857293C, ANIM_TARGET, 2, 16, 16, 8
	ba_waitforvisualfinish
	ba_playsewithpan 0x009F, SOUND_PAN_TARGET
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 4, 0, 8, 1
	ba_waitforvisualfinish
	ba_restorebg
	ba_waitbgfadein
	ba_end
Move_LICK:
	ba_loadspritegfx 0x27C1
	ba_delay 15
	ba_playsewithpan 0x00BC, SOUND_PAN_TARGET
	ba_createsprite 0x08572970, ANIM_TARGET, 2, 0, 0
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 1, 0, 16, 1
	ba_waitforvisualfinish
	ba_end
Move_FOCUS_ENERGY:
	ba_loadspritegfx 0x27C8
	ba_playsewithpan 0x00AB, SOUND_PAN_ATTACKER
	ba_call BattleAnimScript_0827BC53
	ba_delay 8
	ba_createvisualtask sub_08116254, 2, 2, 2, 2, 0, 11, 0x7FFF
	ba_createvisualtask AnimTask_ShakeMon2, 2, 0, 1, 0, 32, 1
	ba_call BattleAnimScript_0827BC53
	ba_delay 8
	ba_call BattleAnimScript_0827BC53
	ba_waitforvisualfinish
	ba_end
Move_BIDE:
	ba_choosetwoturnanim BattleAnimScript_08281CA0, BattleAnimScript_08281CCC
	ba_end
BattleAnimScript_08281CA0: @ 0x08281CA0
	ba_loopsewithpan 0x0098, SOUND_PAN_ATTACKER, 9, 2
	ba_createvisualtask sub_08116254, 2, 2, 2, 2, 0, 11, 31
	ba_createvisualtask AnimTask_ShakeMon2, 2, 0, 1, 0, 32, 1
	ba_waitforvisualfinish
	ba_end
BattleAnimScript_08281CCC: @ 0x08281CCC
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_DEF_PARTNER
	ba_setalpha 12, 8
	ba_loopsewithpan 0x0098, SOUND_PAN_ATTACKER, 9, 2
	ba_createvisualtask sub_08116E70, 10, 2, 2, 0, 11, 31
	ba_createvisualtask AnimTask_ShakeMon2, 2, 0, 1, 0, 32, 1
	ba_waitforvisualfinish
	ba_createsprite 0x0855A9A0, ANIM_ATTACKER, 2, 0, 24, 0, 0, 4
	ba_waitforvisualfinish
	ba_createvisualtask AnimTask_ShakeMonInPlace, 2, 0, 2, 0, 12, 1
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 3, 0, 16, 1
	ba_playsewithpan 0x008B, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 1, 18, -8, 1, 1
	ba_delay 5
	ba_playsewithpan 0x008B, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 1, -18, 8, 1, 1
	ba_delay 5
	ba_playsewithpan 0x008B, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 1, -8, -5, 1, 1
	ba_waitforvisualfinish
	ba_delay 5
	ba_createsprite 0x0855A988, ANIM_ATTACKER, 2, 0, 0, 7
	ba_waitforvisualfinish
	ba_createvisualtask sub_08116E70, 10, 2, 2, 11, 0, 31
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
Move_STRING_SHOT:
	ba_loadspritegfx 0x27C3
	ba_loadspritegfx 0x27C4
	ba_monbg ANIM_DEF_PARTNER
	ba_delay 0
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 5, 1, 2, 0, 9, 0
	ba_waitforvisualfinish
	ba_loopsewithpan 0x0081, SOUND_PAN_ATTACKER, 9, 6
	ba_call BattleAnimScript_08281E53
	ba_call BattleAnimScript_08281E53
	ba_call BattleAnimScript_08281E53
	ba_call BattleAnimScript_08281E53
	ba_call BattleAnimScript_08281E53
	ba_call BattleAnimScript_08281E53
	ba_call BattleAnimScript_08281E53
	ba_call BattleAnimScript_08281E53
	ba_call BattleAnimScript_08281E53
	ba_call BattleAnimScript_08281E53
	ba_call BattleAnimScript_08281E53
	ba_call BattleAnimScript_08281E53
	ba_call BattleAnimScript_08281E53
	ba_call BattleAnimScript_08281E53
	ba_call BattleAnimScript_08281E53
	ba_call BattleAnimScript_08281E53
	ba_call BattleAnimScript_08281E53
	ba_call BattleAnimScript_08281E53
	ba_waitforvisualfinish
	ba_playsewithpan 0x0082, SOUND_PAN_TARGET
	ba_createsprite 0x085725DC, ANIM_TARGET, 2, 0, 10
	ba_delay 4
	ba_createsprite 0x085725DC, ANIM_TARGET, 2, 0, -2
	ba_delay 4
	ba_createsprite 0x085725DC, ANIM_TARGET, 2, 0, 22
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_delay 1
	ba_waitforvisualfinish
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 5, 1, 2, 9, 0, 0
	ba_end
BattleAnimScript_08281E53: @ 0x08281E53
	ba_createsprite 0x085725C4, ANIM_TARGET, 2, 20, 0, 512, 20, 1
	ba_delay 1
	ba_return
Move_SPIDER_WEB:
	ba_loadspritegfx 0x27C5
	ba_loadspritegfx 0x27C4
	ba_monbg ANIM_DEF_PARTNER
	ba_delay 0
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 5, 1, 2, 0, 9, 0
	ba_waitforvisualfinish
	ba_monbgprio_28 ANIM_TARGET
	ba_loopsewithpan 0x0081, SOUND_PAN_ATTACKER, 9, 6
	ba_call BattleAnimScript_08281EF4
	ba_call BattleAnimScript_08281EF4
	ba_call BattleAnimScript_08281EF4
	ba_call BattleAnimScript_08281EF4
	ba_call BattleAnimScript_08281EF4
	ba_call BattleAnimScript_08281EF4
	ba_call BattleAnimScript_08281EF4
	ba_call BattleAnimScript_08281EF4
	ba_call BattleAnimScript_08281EF4
	ba_call BattleAnimScript_08281EF4
	ba_call BattleAnimScript_08281EF4
	ba_call BattleAnimScript_08281EF4
	ba_call BattleAnimScript_08281EF4
	ba_call BattleAnimScript_08281EF4
	ba_waitforvisualfinish
	ba_playsewithpan 0x0082, SOUND_PAN_TARGET
	ba_createsprite 0x08572610, ANIM_ATTACKER, 2
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_delay 1
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 5, 1, 2, 9, 0, 0
	ba_end
BattleAnimScript_08281EF4: @ 0x08281EF4
	ba_createsprite 0x085725C4, ANIM_TARGET, 2, 20, 0, 512, 20, 0
	ba_delay 1
	ba_return
Move_RAZOR_WIND:
	ba_choosetwoturnanim BattleAnimScript_08281F13, BattleAnimScript_08281F63
BattleAnimScript_08281F11: @ 0x08281F11
	ba_waitforvisualfinish
	ba_end
BattleAnimScript_08281F13: @ 0x08281F13
	ba_loadspritegfx 0x2719
	ba_playsewithpan 0x0084, SOUND_PAN_ATTACKER
	ba_createsprite 0x0856F134, ANIM_ATTACKER, 2, 32, 0, 16, 16, 0, 7, 40
	ba_createsprite 0x0856F134, ANIM_ATTACKER, 2, 32, 0, 16, 16, 85, 7, 40
	ba_createsprite 0x0856F134, ANIM_ATTACKER, 2, 32, 0, 16, 16, 170, 7, 40
	ba_waitforvisualfinish
	ba_playsewithpan 0x0085, SOUND_PAN_ATTACKER
	ba_goto BattleAnimScript_08281F11
BattleAnimScript_08281F63: @ 0x08281F63
	ba_loadspritegfx 0x27AA
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_TARGET
	ba_setalpha 12, 8
	ba_playsewithpan 0x00A0, SOUND_PAN_ATTACKER
	ba_createsprite 0x08571EB8, ANIM_ATTACKER, 2, 14, 8, 0, 0, 22, 2, 1
	ba_delay 2
	ba_playsewithpan 0x00A0, SOUND_PAN_ATTACKER
	ba_createsprite 0x08571EB8, ANIM_ATTACKER, 2, 14, -8, 16, 14, 22, 1, 1
	ba_delay 2
	ba_playsewithpan 0x00A0, SOUND_PAN_ATTACKER
	ba_createsprite 0x08571EB8, ANIM_ATTACKER, 2, 14, 12, -16, -14, 22, 0, 1
	ba_delay 17
	ba_playsewithpan 0x0088, SOUND_PAN_TARGET
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 2, 0, 10, 1
	ba_createvisualtask AnimTask_ShakeMon2, 2, 3, 2, 0, 10, 1
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_TARGET
	ba_blendoff
	ba_goto BattleAnimScript_08281F11
Move_DISABLE:
	ba_loadspritegfx 0x2757
	ba_monbg ANIM_TARGET
	ba_monbgprio_28 ANIM_TARGET
	ba_setalpha 8, 8
	ba_playsewithpan 0x00D1, SOUND_PAN_ATTACKER
	ba_createsprite 0x085175C8, ANIM_ATTACKER, 13, 24, -16
	ba_waitforvisualfinish
	ba_createvisualtask AnimTask_GrowAndGreyscale, 5
	ba_loopsewithpan 0x00AA, SOUND_PAN_TARGET, 15, 4
	ba_waitforvisualfinish
	ba_delay 1
	ba_clearmonbg ANIM_TARGET
	ba_blendoff
	ba_end
Move_RECOVER:
	ba_loadspritegfx 0x27A3
	ba_loadspritegfx 0x272F
	ba_monbg ANIM_ATK_PARTNER
	ba_setalpha 12, 8
	ba_loopsewithpan 0x008C, SOUND_PAN_ATTACKER, 13, 3
	ba_createvisualtask sub_08116254, 2, 2, 0, 6, 0, 11, 0x2FFF
	ba_call BattleAnimScript_0828205C
	ba_call BattleAnimScript_0828205C
	ba_call BattleAnimScript_0828205C
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_ATK_PARTNER
	ba_blendoff
	ba_delay 1
	ba_call BattleAnimScript_08285F66
	ba_waitforvisualfinish
	ba_end
BattleAnimScript_0828205C: @ 0x0828205C
	ba_createsprite 0x0856DDC4, ANIM_ATTACKER, 2, 40, -10, 13
	ba_delay 3
	ba_createsprite 0x0856DDC4, ANIM_ATTACKER, 2, -35, -10, 13
	ba_delay 3
	ba_createsprite 0x0856DDC4, ANIM_ATTACKER, 2, 15, -40, 13
	ba_delay 3
	ba_createsprite 0x0856DDC4, ANIM_ATTACKER, 2, -10, -32, 13
	ba_delay 3
	ba_createsprite 0x0856DDC4, ANIM_ATTACKER, 2, 25, -20, 13
	ba_delay 3
	ba_createsprite 0x0856DDC4, ANIM_ATTACKER, 2, -40, -20, 13
	ba_delay 3
	ba_createsprite 0x0856DDC4, ANIM_ATTACKER, 2, 5, -40, 13
	ba_delay 3
	ba_return
Move_MIMIC:
	ba_loadspritegfx 0x27A3
	ba_setalpha 11, 5
	ba_monbg_22 ANIM_DEF_PARTNER
	ba_monbgprio_29
	ba_panse_1B 0x00CC, SOUND_PAN_TARGET, SOUND_PAN_ATTACKER, 253, 0
	ba_createvisualtask sub_080FFCA8, 5, 128, 24
	ba_delay 15
	ba_createsprite 0x0856E0C0, ANIM_TARGET, 2, -12, 24
	ba_delay 10
	ba_setarg 0x07, 0xFFFF
	ba_waitforvisualfinish
	ba_playsewithpan 0x0098, SOUND_PAN_ATTACKER
	ba_createvisualtask sub_08116254, 2, 2, 0, 2, 0, 11, 0x7FFF
	ba_waitforvisualfinish
	ba_clearmonbg_23 ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
Move_CONSTRICT:
	ba_loadspritegfx 0x27CA
	ba_loopsewithpan 0x009B, SOUND_PAN_TARGET, 6, 4
	ba_createsprite 0x0856E078, ANIM_TARGET, 4, 0, 16, 0, 2
	ba_delay 7
	ba_createsprite 0x0856E078, ANIM_TARGET, 3, 0, 0, 0, 2
	ba_createsprite 0x0856E078, ANIM_TARGET, 2, 0, 8, 1, 2
	ba_delay 7
	ba_createsprite 0x0856E078, ANIM_TARGET, 3, 0, -8, 1, 2
	ba_delay 8
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 3, 0, 6, 1
	ba_delay 20
	ba_playsewithpan 0x00AA, SOUND_PAN_TARGET
	ba_setarg 0x07, 0xFFFF
	ba_waitforvisualfinish
	ba_end
Move_CURSE:
	ba_choosetwoturnanim BattleAnimScript_08282182, BattleAnimScript_082821FF
BattleAnimScript_08282182: @ 0x08282182
	ba_loadspritegfx 0x27D7
	ba_loadspritegfx 0x27D8
	ba_monbg ANIM_ATK_PARTNER
	ba_createvisualtask sub_08112FA8, 5
	ba_waitforvisualfinish
	ba_delay 20
	ba_createsprite 0x085729B4, ANIM_ATTACKER, 2
	ba_delay 60
	ba_call BattleAnimScript_082821E9
	ba_delay 41
	ba_call BattleAnimScript_082821E9
	ba_delay 41
	ba_call BattleAnimScript_082821E9
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_ATK_PARTNER
	ba_delay 1
	ba_monbg ANIM_DEF_PARTNER
	ba_playsewithpan 0x0079, SOUND_PAN_TARGET
	ba_createsprite 0x085729CC, ANIM_TARGET, 2
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 2, 0, 14, 1
	ba_waitforvisualfinish
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 1, 16, 0, 0
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_end
BattleAnimScript_082821E9: @ 0x082821E9
	ba_createvisualtask AnimTask_ShakeMon2, 2, 0, 4, 0, 10, 0
	ba_playsewithpan 0x00AA, SOUND_PAN_ATTACKER
	ba_return
BattleAnimScript_082821FF: @ 0x082821FF
	ba_createvisualtask AnimTask_SwayMon, 5, 0, 10, 1536, 3, 0
	ba_waitforvisualfinish
	ba_delay 10
	ba_call BattleAnimScript_0828221A
	ba_waitforvisualfinish
	ba_end
BattleAnimScript_0828221A: @ 0x0828221A
	ba_playsewithpan 0x00AB, SOUND_PAN_ATTACKER
	ba_createvisualtask sub_08117364, 5
	ba_createvisualtask sub_08116254, 5, 2, 4, 2, 0, 10, 31
	ba_return
Move_SOFT_BOILED:
	ba_loadspritegfx 0x27DA
	ba_loadspritegfx 0x27DB
	ba_loadspritegfx 0x272F
	ba_monbg ANIM_ATK_PARTNER
	ba_playsewithpan 0x00A7, SOUND_PAN_ATTACKER
	ba_createvisualtask AnimTask_ShakeMon, 2, 0, 0, 2, 6, 1
	ba_createsprite gSoftBoiledEggSpriteTemplate, ANIM_ATTACKER, 4, 0, 16, 0
	ba_createsprite gSoftBoiledEggSpriteTemplate, ANIM_ATTACKER, 4, 0, 16, 1
	ba_delay 120
	ba_delay 7
	ba_playsewithpan 0x00A6, SOUND_PAN_ATTACKER
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 31, 3, 10, 0, 0x7B0C
	ba_createsprite gThinRingExpandingSpriteTemplate, ANIM_ATTACKER, 3, 31, 16, 0, 1
	ba_delay 8
	ba_createsprite gThinRingExpandingSpriteTemplate, ANIM_ATTACKER, 3, 31, 16, 0, 1
	ba_delay 60
	ba_setarg 0x07, 0xFFFF
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_ATK_PARTNER
	ba_call BattleAnimScript_08285FAF
	ba_end
Move_HEAL_BELL:
	ba_loadspritegfx 0x27DD
	ba_loadspritegfx 0x27DE
	ba_loadspritegfx 0x27DB
	ba_createvisualtask sub_08116E70, 10, 10, 0, 0, 10, 0x7FFF
	ba_waitforvisualfinish
	ba_createvisualtask sub_08106504, 5
	ba_createsprite gHealBellRingSpriteTemplate, ANIM_ATTACKER, 2, 0, -24, 0, 1
	ba_delay 12
	ba_createsprite gHealBellParticleSpriteTemplate, ANIM_ATTACKER, 40, 0, -24, 48, -18, 35, 0, 0
	ba_createsprite gHealBellParticleSpriteTemplate, ANIM_ATTACKER, 40, 0, -24, -48, 20, 30, 1, 1
	ba_createsprite gHealBellParticleSpriteTemplate, ANIM_ATTACKER, 40, 0, -24, -38, -29, 30, 2, 2
	ba_createsprite gHealBellParticleSpriteTemplate, ANIM_ATTACKER, 40, 0, -24, 36, 18, 30, 3, 3
	ba_call BattleAnimScript_0828247F
	ba_delay 33
	ba_createsprite gHealBellParticleSpriteTemplate, ANIM_ATTACKER, 40, 0, -24, 19, 26, 35, 4, 4
	ba_createsprite gHealBellParticleSpriteTemplate, ANIM_ATTACKER, 40, 0, -24, -34, -12, 30, 5, 5
	ba_createsprite gHealBellParticleSpriteTemplate, ANIM_ATTACKER, 40, 0, -24, 41, -20, 34, 6, 2
	ba_createsprite gHealBellParticleSpriteTemplate, ANIM_ATTACKER, 40, 0, -24, -15, 26, 32, 7, 0
	ba_call BattleAnimScript_0828247F
	ba_delay 33
	ba_createsprite gHealBellParticleSpriteTemplate, ANIM_ATTACKER, 40, 0, -24, -48, 18, 31, 0, 2
	ba_createsprite gHealBellParticleSpriteTemplate, ANIM_ATTACKER, 40, 0, -24, 48, -20, 30, 2, 5
	ba_createsprite gHealBellParticleSpriteTemplate, ANIM_ATTACKER, 40, 0, -24, 38, 29, 33, 4, 3
	ba_createsprite gHealBellParticleSpriteTemplate, ANIM_ATTACKER, 40, 0, -24, -36, -18, 30, 6, 1
	ba_call BattleAnimScript_0828247F
	ba_waitforvisualfinish
	ba_createvisualtask sub_081065B0, 5
	ba_waitforvisualfinish
	ba_unloadspritegfx 0x27DD
	ba_unloadspritegfx 0x27DE
	ba_unloadspritegfx 0x27DB
	ba_loadspritegfx 0x2741
	ba_playsewithpan 0x00E4, SOUND_PAN_ATTACKER
	ba_createsprite gAromatherapySparkleSpriteTemplate, ANIM_ATTACKER, 16, -15, 0, 0, 0, 32, 60, 1
	ba_delay 8
	ba_createsprite gAromatherapySparkleSpriteTemplate, ANIM_ATTACKER, 16, 12, -5, 0, 0, 32, 60, 1
	ba_waitforvisualfinish
	ba_unloadspritegfx 0x2741
	ba_loadspritegfx 0x27DB
	ba_playsewithpan 0x0066, SOUND_PAN_ATTACKER
	ba_createvisualtask sub_08116EB4, 10, 4, 3, 10, 0, 0x7B0C
	ba_createvisualtask sub_08116E70, 10, 10, 3, 10, 0, 0x7FFF
	ba_createsprite gBlendThinRingExpandingSpriteTemplate, ANIM_ATTACKER, 16, 0, 0, 0, 1
	ba_end
BattleAnimScript_0828247F: @ 0x0828247F
	ba_createvisualtask sub_08116EB4, 10, 4, 3, 8, 0, 0x7B0C
	ba_createvisualtask sub_08116E70, 10, 10, 3, 2, 10, 0x7FFF
	ba_createsprite gThinRingExpandingSpriteTemplate, ANIM_ATTACKER, 40, 0, -24, 0, 1
	ba_playsewithpan 0x00C3, SOUND_PAN_ATTACKER
	ba_return
Move_FAKE_OUT:
	ba_playsewithpan 0x00E5, 0x00
	ba_createvisualtask sub_08106700, 5
	ba_waitforvisualfinish
	ba_playsewithpan 0x00CD, SOUND_PAN_TARGET
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 4, 0, 5, 1
	ba_createvisualtask sub_08106870, 3
	ba_waitforvisualfinish
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 3, 16, 0, 0x7FFF
	ba_end
Move_SCARY_FACE:
	ba_loadspritegfx 0x27EA
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 27, 3, 0, 16, 0
	ba_playsewithpan 0x00BD, SOUND_PAN_ATTACKER
	ba_waitforvisualfinish
	ba_delay 10
	ba_playsewithpan 0x00C0, SOUND_PAN_ATTACKER
	ba_createvisualtask sub_08106D48, 5
	ba_delay 13
	ba_createsprite gGlareEyeSpriteTemplate, ANIM_ATTACKER, 0, -16, -8
	ba_createsprite gGlareEyeSpriteTemplate, ANIM_ATTACKER, 0, 16, -8
	ba_waitforvisualfinish
	ba_createvisualtask sub_0810A8E4, 3, 20, 1, 0
	ba_playsewithpan 0x0082, SOUND_PAN_TARGET
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 27, 3, 16, 0, 0
	ba_waitforvisualfinish
	ba_end
Move_SWEET_KISS:
	ba_loadspritegfx 0x27E8
	ba_loadspritegfx 0x27EC
	ba_createsprite gSweetKissSpriteTemplate, ANIM_TARGET, 2, 16, -48
	ba_playsewithpan 0x00C3, SOUND_PAN_TARGET
	ba_delay 23
	ba_playsewithpan 0x00C3, SOUND_PAN_TARGET
	ba_delay 23
	ba_playsewithpan 0x00C3, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_createsprite gFloatingHeartSpriteTemplate, ANIM_TARGET, 3, 160, -30
	ba_playsewithpan 0x00E2, SOUND_PAN_TARGET
	ba_createsprite gFloatingHeartSpriteTemplate, ANIM_TARGET, 3, -256, -42
	ba_createsprite gFloatingHeartSpriteTemplate, ANIM_TARGET, 3, 128, -14
	ba_createsprite gFloatingHeartSpriteTemplate, ANIM_TARGET, 3, 416, -38
	ba_createsprite gFloatingHeartSpriteTemplate, ANIM_TARGET, 3, -128, -22
	ba_createsprite gFloatingHeartSpriteTemplate, ANIM_TARGET, 3, -384, -31
	ba_end
Move_LOVELY_KISS:
	ba_loadspritegfx 0x27EB
	ba_loadspritegfx 0x27ED
	ba_createsprite gLovelyKissSpriteTemplate, ANIM_TARGET, 2, 0, -24
	ba_playsewithpan 0x00C8, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_playsewithpan 0x00E2, SOUND_PAN_TARGET
	ba_createsprite gLovelyKissHeartSpriteTemplate, ANIM_TARGET, 3, -256, -42
	ba_createsprite gLovelyKissHeartSpriteTemplate, ANIM_TARGET, 3, 128, -14
	ba_createsprite gLovelyKissHeartSpriteTemplate, ANIM_TARGET, 3, 416, -38
	ba_createsprite gLovelyKissHeartSpriteTemplate, ANIM_TARGET, 3, -128, -22
	ba_end
Move_FURY_SWIPES:
	ba_loadspritegfx 0x27EE
	ba_createsprite 0x0855A958, ANIM_ATTACKER, 2, 5, 5
	ba_delay 4
	ba_playsewithpan 0x009B, SOUND_PAN_TARGET
	ba_createsprite gFurySwipesSpriteTemplate, ANIM_TARGET, 2, 16, 0, 1
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 3, 0, 5, 1
	ba_delay 10
	ba_createsprite 0x0855A958, ANIM_TARGET, 2, 5, 5
	ba_delay 4
	ba_playsewithpan 0x009B, SOUND_PAN_TARGET
	ba_createsprite gFurySwipesSpriteTemplate, ANIM_TARGET, 2, -16, 0, 0
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 4, 0, 7, 1
	ba_end
Move_INGRAIN:
	ba_loadspritegfx 0x27EF
	ba_loadspritegfx 0x27A3
	ba_createsprite 0x0856E130, ANIM_ATTACKER, 2, 16, 26, 0xFFFF, 2, 150
	ba_playsewithpan 0x009B, SOUND_PAN_ATTACKER
	ba_delay 10
	ba_createsprite 0x0856E130, ANIM_ATTACKER, 2, -32, 20, 1, 1, 140
	ba_playsewithpan 0x009B, SOUND_PAN_ATTACKER
	ba_delay 10
	ba_createsprite 0x0856E130, ANIM_ATTACKER, 2, 32, 22, 1, 0, 130
	ba_playsewithpan 0x009B, SOUND_PAN_ATTACKER
	ba_delay 10
	ba_createsprite 0x0856E130, ANIM_ATTACKER, 2, -16, 25, 0xFFFF, 3, 120
	ba_playsewithpan 0x009B, SOUND_PAN_ATTACKER
	ba_delay 40
	ba_createsprite 0x0856E170, ANIM_ATTACKER, 3, 32, 26, 0xFFFF, 3, 30
	ba_delay 5
	ba_playsewithpan 0x007E, SOUND_PAN_ATTACKER
	ba_delay 5
	ba_createsprite 0x0856E170, ANIM_ATTACKER, 3, -48, 20, 1, 2, 30
	ba_playsewithpan 0x007E, SOUND_PAN_ATTACKER
	ba_delay 5
	ba_playsewithpan 0x007E, SOUND_PAN_ATTACKER
	ba_delay 5
	ba_createsprite 0x0856E170, ANIM_ATTACKER, 3, 48, 26, -2, 3, 18
	ba_playsewithpan 0x007E, SOUND_PAN_ATTACKER
	ba_delay 10
	ba_waitforvisualfinish
	ba_end
Move_PRESENT:
	ba_loadspritegfx 0x27F0
	ba_createvisualtask AnimTask_IsHealingMove, 2
	ba_createsprite 0x0856E1F4, ANIM_TARGET, 2, 0, -5, 10, 2, 0xFFFF
	ba_playsewithpan 0x00A7, SOUND_PAN_ATTACKER
	ba_delay 14
	ba_playsewithpan 0x007D, SOUND_PAN_ATTACKER
	ba_delay 14
	ba_playsewithpan 0x007D, 0x00
	ba_delay 20
	ba_playsewithpan 0x007D, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_jumpargeq 0x07, 0, BattleAnimScript_0828275B
	ba_jumpargeq 0x07, 1, BattleAnimScript_082827C6
	ba_end
BattleAnimScript_0828275B: @ 0x0828275B
	ba_loadspritegfx 0x27D6
	ba_playsewithpan 0x00B1, SOUND_PAN_TARGET
	ba_createsprite gExplosionSpriteTemplate, ANIM_TARGET, 3, 0, 0, 1, 1
	ba_delay 6
	ba_playsewithpan 0x00B1, SOUND_PAN_TARGET
	ba_createsprite gExplosionSpriteTemplate, ANIM_TARGET, 3, 24, -24, 1, 1
	ba_delay 6
	ba_playsewithpan 0x00B1, SOUND_PAN_TARGET
	ba_createsprite gExplosionSpriteTemplate, ANIM_TARGET, 3, -16, 16, 1, 1
	ba_delay 6
	ba_playsewithpan 0x00B1, SOUND_PAN_TARGET
	ba_createsprite gExplosionSpriteTemplate, ANIM_TARGET, 3, -24, -12, 1, 1
	ba_delay 6
	ba_playsewithpan 0x00B1, SOUND_PAN_TARGET
	ba_createsprite gExplosionSpriteTemplate, ANIM_TARGET, 3, 16, 16, 1, 1
	ba_end
BattleAnimScript_082827C6: @ 0x082827C6
	ba_loadspritegfx 0x27D3
	ba_loadspritegfx 0x272F
	ba_playsewithpan 0x00E4, SOUND_PAN_TARGET
	ba_createsprite 0x0856E23C, ANIM_TARGET, 4, -16, 32, -3, 1
	ba_delay 3
	ba_createsprite 0x0856E23C, ANIM_TARGET, 4, 16, 32, -3, 0xFFFF
	ba_delay 3
	ba_createsprite 0x0856E23C, ANIM_TARGET, 4, 32, 32, -3, 1
	ba_delay 3
	ba_createsprite 0x0856E23C, ANIM_TARGET, 4, -32, 32, -3, 1
	ba_delay 3
	ba_createsprite 0x0856E23C, ANIM_TARGET, 4, 0, 32, -3, 1
	ba_delay 3
	ba_createsprite 0x0856E23C, ANIM_TARGET, 4, -8, 32, -3, 1
	ba_delay 3
	ba_createsprite 0x0856E23C, ANIM_TARGET, 4, -8, 32, -3, 1
	ba_delay 3
	ba_createsprite 0x0856E23C, ANIM_TARGET, 4, 24, 32, -3, 1
	ba_delay 3
	ba_createsprite 0x0856E23C, ANIM_TARGET, 4, -24, 32, -3, 1
	ba_waitforvisualfinish
	ba_waitsound
	ba_call BattleAnimScript_08285FAF
	ba_end
Move_BATON_PASS:
	ba_loadspritegfx 0x27F2
	ba_playsewithpan 0x00E0, SOUND_PAN_ATTACKER
	ba_createvisualtask sub_08116254, 2, 31, 1, 2, 0, 11, 0x7ADF
	ba_createsprite 0x085AD178, ANIM_ATTACKER, 2
	ba_end
Move_PERISH_SONG:
	ba_loadspritegfx 0x27DE
	ba_createsprite gPerishSongMusicNoteSpriteTemplate, ANIM_ATTACKER, 4, 0, 0, 0
	ba_createsprite gPerishSongMusicNoteSpriteTemplate, ANIM_ATTACKER, 4, 1, 1, 16
	ba_createsprite gPerishSongMusicNoteSpriteTemplate, ANIM_ATTACKER, 4, 2, 1, 32
	ba_createsprite gPerishSongMusicNoteSpriteTemplate, ANIM_ATTACKER, 4, 3, 2, 48
	ba_createsprite gPerishSongMusicNoteSpriteTemplate, ANIM_ATTACKER, 4, 4, 2, 64
	ba_createsprite gPerishSongMusicNoteSpriteTemplate, ANIM_ATTACKER, 4, 5, 0, 80
	ba_createsprite gPerishSongMusicNoteSpriteTemplate, ANIM_ATTACKER, 4, 6, 0, 96
	ba_createsprite gPerishSongMusicNoteSpriteTemplate, ANIM_ATTACKER, 4, 7, 1, 112
	ba_createsprite gPerishSongMusicNoteSpriteTemplate, ANIM_ATTACKER, 4, 8, 2, 128
	ba_createsprite gPerishSongMusicNoteSpriteTemplate, ANIM_ATTACKER, 4, 9, 0, 144
	ba_createsprite gPerishSongMusicNoteSpriteTemplate, ANIM_ATTACKER, 4, 10, 2, 160
	ba_createsprite gPerishSongMusicNoteSpriteTemplate, ANIM_ATTACKER, 4, 11, 0, 176
	ba_createsprite gPerishSongMusicNoteSpriteTemplate, ANIM_ATTACKER, 4, 12, 1, 192
	ba_createsprite gPerishSongMusicNoteSpriteTemplate, ANIM_ATTACKER, 4, 13, 3, 208
	ba_createsprite gPerishSongMusicNoteSpriteTemplate, ANIM_ATTACKER, 4, 14, 3, 224
	ba_createsprite gPerishSongMusicNoteSpriteTemplate, ANIM_ATTACKER, 4, 15, 0, 240
	ba_createsprite gPerishSongMusicNote2SpriteTemplate, ANIM_ATTACKER, 4, 15, 0, 0
	ba_delay 20
	ba_panse_1B 0x00AD, SOUND_PAN_ATTACKER, SOUND_PAN_TARGET, 2, 0
	ba_delay 80
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 3, 0, 16, 0
	ba_createvisualtask AnimTask_SetGreyscaleOrOriginalPal, 5, 4, 0
	ba_createvisualtask AnimTask_SetGreyscaleOrOriginalPal, 5, 5, 0
	ba_createvisualtask AnimTask_SetGreyscaleOrOriginalPal, 5, 6, 0
	ba_createvisualtask AnimTask_SetGreyscaleOrOriginalPal, 5, 7, 0
	ba_delay 100
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 3, 16, 0, 0
	ba_createvisualtask AnimTask_SetGreyscaleOrOriginalPal, 5, 4, 1
	ba_createvisualtask AnimTask_SetGreyscaleOrOriginalPal, 5, 5, 1
	ba_createvisualtask AnimTask_SetGreyscaleOrOriginalPal, 5, 6, 1
	ba_createvisualtask AnimTask_SetGreyscaleOrOriginalPal, 5, 7, 1
	ba_waitforvisualfinish
	ba_end
Move_SLEEP_TALK:
	ba_loadspritegfx 0x27F4
	ba_createvisualtask AnimTask_SwayMon, 5, 0, 4, 0x1000, 2, 0
	ba_delay 20
	ba_createsprite 0x085ACF98, ANIM_TARGET, 2, 0, 20, 5, 0xFFFF
	ba_playsewithpan 0x00C5, SOUND_PAN_ATTACKER
	ba_delay 6
	ba_createsprite 0x085ACF98, ANIM_TARGET, 2, 0, 20, 5, 0xFFFF
	ba_delay 6
	ba_createsprite 0x085ACF98, ANIM_TARGET, 2, 0, 20, 5, 0xFFFF
	ba_delay 20
	ba_createsprite 0x085ACF98, ANIM_TARGET, 2, 0, 20, 5, -5
	ba_playsewithpan 0x00C5, SOUND_PAN_ATTACKER
	ba_delay 6
	ba_createsprite 0x085ACF98, ANIM_TARGET, 2, 0, 20, 5, -5
	ba_delay 6
	ba_createsprite 0x085ACF98, ANIM_TARGET, 2, 0, 20, 5, -5
	ba_delay 20
	ba_createsprite 0x085ACF98, ANIM_TARGET, 2, 0, 20, 5, -3
	ba_playsewithpan 0x00C5, SOUND_PAN_ATTACKER
	ba_delay 6
	ba_createsprite 0x085ACF98, ANIM_TARGET, 2, 0, 20, 5, -3
	ba_delay 6
	ba_createsprite 0x085ACF98, ANIM_TARGET, 2, 0, 20, 5, -3
	ba_waitforvisualfinish
	ba_end
Move_HYPER_FANG:
	ba_loadspritegfx 0x27D0
	ba_playsewithpan 0x00A1, SOUND_PAN_TARGET
	ba_delay 1
	ba_delay 2
	ba_createvisualtask AnimTask_IsContest, 2
	ba_jumpargeq 0x07, 1, BattleAnimScript_08282B15
	ba_createvisualtask AnimTask_IsTargetPlayerSide, 2
	ba_jumpargeq 0x07, 0, BattleAnimScript_08282B07
	ba_goto BattleAnimScript_08282B0E
BattleAnimScript_08282AE3: @ 0x08282AE3
	ba_waitbgfadeout
	ba_createsprite 0x085ACFE4, ANIM_TARGET, 2
	ba_waitbgfadein
	ba_createvisualtask AnimTask_ShakeMon, 3, 1, 0, 10, 10, 1
	ba_playsewithpan 0x00C0, SOUND_PAN_TARGET
	ba_delay 20
	ba_restorebg
	ba_waitbgfadein
	ba_waitforvisualfinish
	ba_end
BattleAnimScript_08282B07: @ 0x08282B07
	ba_fadetobg BG_IMPACT_OPPONENT
	ba_goto BattleAnimScript_08282AE3
BattleAnimScript_08282B0E: @ 0x08282B0E
	ba_fadetobg BG_IMPACT_PLAYER
	ba_goto BattleAnimScript_08282AE3
BattleAnimScript_08282B15: @ 0x08282B15
	ba_fadetobg BG_IMPACT_CONTESTS
	ba_goto BattleAnimScript_08282AE3
Move_TRI_ATTACK:
	ba_loadspritegfx 0x27F6
	ba_createsprite 0x085AD100, ANIM_TARGET, 2, 16, 0
	ba_playsewithpan 0x00DC, SOUND_PAN_ATTACKER
	ba_delay 20
	ba_playsewithpan 0x00DC, SOUND_PAN_ATTACKER
	ba_delay 20
	ba_createsoundtask sub_08158B94, 220, -64, 63, 5, 6, 0, 7
	ba_waitforvisualfinish
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 2, 0, 16, 0
	ba_delay 16
	ba_loadspritegfx 0x2731
	ba_createsprite 0x08570FF4, ANIM_TARGET, 2, 0, 0, 30, 30, 0xFFFF, 0
	ba_playsewithpan 0x0091, SOUND_PAN_TARGET
	ba_createsprite 0x08570FF4, ANIM_TARGET, 2, 0, 0, 30, 30, 0, 1
	ba_delay 1
	ba_createsprite 0x08570FF4, ANIM_TARGET, 2, 0, 0, 30, 30, 0xFFFF, 0xFFFF
	ba_delay 1
	ba_createsprite 0x08570FF4, ANIM_TARGET, 2, 0, 0, 30, 30, 2, 1
	ba_delay 1
	ba_createsprite 0x08570FF4, ANIM_TARGET, 2, 0, 0, 30, 30, 1, 0xFFFF
	ba_delay 1
	ba_createsprite 0x08570FF4, ANIM_TARGET, 2, 0, 0, 30, 30, 0xFFFF, 1
	ba_delay 1
	ba_createsprite 0x08570FF4, ANIM_TARGET, 2, 0, 0, 30, 30, 1, -2
	ba_delay 1
	ba_createsprite 0x08570FF4, ANIM_TARGET, 2, 0, 0, 30, 30, 3, 1
	ba_delay 2
	ba_createvisualtask sub_0810A8E4, 2, 20, 3, 1, 1
	ba_waitforvisualfinish
	ba_loadspritegfx 0x2735
	ba_createvisualtask sub_08116760, 2, 257, 257, 257
	ba_playsewithpan 0x00DD, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_ElectricSpark, ANIM_TARGET, 2, 0, -48
	ba_delay 1
	ba_createsprite gBattleAnimSpriteTemplate_ElectricSpark, ANIM_TARGET, 2, 0, -16
	ba_delay 1
	ba_createsprite gBattleAnimSpriteTemplate_ElectricSpark, ANIM_TARGET, 2, 0, 16
	ba_delay 20
	ba_createvisualtask sub_0810A8E4, 2, 20, 3, 1, 0
	ba_delay 2
	ba_createvisualtask sub_08116760, 2, 257, 257, 257
	ba_waitforvisualfinish
	ba_loadspritegfx 0x279D
	ba_call BattleAnimScript_08285CA7
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 2, 16, 0, 0
	ba_waitforvisualfinish
	ba_end
Move_WILL_O_WISP:
	ba_loadspritegfx 0x27F8
	ba_loadspritegfx 0x27F7
	ba_monbg ANIM_DEF_PARTNER
	ba_monbgprio_2A ANIM_TARGET
	ba_playsewithpan 0x0097, SOUND_PAN_ATTACKER
	ba_waitplaysewithpan 0x0097, SOUND_PAN_ATTACKER, 10
	ba_createvisualtask sub_081591B4, 2, -64, -64, 1, 0
	ba_createsprite 0x08571220, ANIM_ATTACKER, 2, 0, 0, 0
	ba_delay 3
	ba_createsprite 0x08571220, ANIM_ATTACKER, 3, 0, 0, 1
	ba_delay 3
	ba_createsprite 0x08571220, ANIM_ATTACKER, 4, 0, 0, 2
	ba_delay 3
	ba_createsprite 0x08571220, ANIM_ATTACKER, 4, 0, 0, 3
	ba_delay 40
	ba_createvisualtask sub_081591B4, 2, -64, 63, 2, 0
	ba_waitforvisualfinish
	ba_monbgprio_29
	ba_playsewithpan 0x0091, SOUND_PAN_TARGET
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 4, 0, 13, 1
	ba_createsprite 0x08571250, ANIM_ATTACKER, 2, 0
	ba_createsprite 0x08571250, ANIM_ATTACKER, 2, 42
	ba_createsprite 0x08571250, ANIM_ATTACKER, 2, 84
	ba_createsprite 0x08571250, ANIM_ATTACKER, 2, 126
	ba_createsprite 0x08571250, ANIM_ATTACKER, 2, 168
	ba_createsprite 0x08571250, ANIM_ATTACKER, 2, 210
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_end
Move_ENCORE:
	ba_loadspritegfx 0x27F3
	ba_loadspritegfx 0x2807
	ba_createvisualtask sub_0815AB28, 2
	ba_createvisualtask sub_081171B0, 2, 248, 3, 0, 10, 0
	ba_waitforvisualfinish
	ba_createsprite 0x085AD034, ANIM_TARGET, 2, 0, -8
	ba_createsprite 0x085AD04C, ANIM_ATTACKER, 2, -2, 0, 0, 0, 9
	ba_createsprite 0x085AD04C, ANIM_ATTACKER, 2, 2, 0, 1, 0, 9
	ba_createsprite 0x085AD064, ANIM_ATTACKER, 3, -2, 0, 0, 0, 9
	ba_createsprite 0x085AD064, ANIM_ATTACKER, 3, 2, 0, 1, 0, 9
	ba_delay 16
	ba_createvisualtask sub_08159180, 5, 223, 63
	ba_createvisualtask AnimTask_SwayMon, 5, 1, 8, 1536, 5, 1
	ba_waitforvisualfinish
	ba_createvisualtask sub_081171B0, 2, 248, 3, 10, 0, 1
	ba_waitforvisualfinish
	ba_createvisualtask sub_0815ABC8, 2
	ba_end
Move_TRICK:
	ba_loadspritegfx 0x27F0
	ba_loadspritegfx 0x27DF
	ba_createsprite 0x0856E2CC, ANIM_ATTACKER, 2, -40, 80
	ba_createsprite 0x0856E2CC, ANIM_ATTACKER, 2, -40, 208
	ba_delay 16
	ba_playsewithpan 0x00CD, 0x00
	ba_createvisualtask sub_08106870, 3
	ba_createvisualtask sub_08106900, 3
	ba_delay 30
	ba_playsewithpan 0x0087, 0x00
	ba_delay 24
	ba_playsewithpan 0x0087, 0x00
	ba_delay 16
	ba_playsewithpan 0x0087, 0x00
	ba_delay 16
	ba_playsewithpan 0x0087, 0x00
	ba_delay 16
	ba_playsewithpan 0x0087, 0x00
	ba_delay 16
	ba_playsewithpan 0x0087, 0x00
	ba_delay 16
	ba_playsewithpan 0x00E2, 0x00
	ba_createvisualtask AnimTask_ShakeMon, 3, 0, 5, 0, 7, 2
	ba_createvisualtask AnimTask_ShakeMon, 3, 1, 5, 0, 7, 2
	ba_waitforvisualfinish
	ba_end
Move_WISH:
	ba_loadspritegfx 0x27F9
	ba_loadspritegfx 0x2741
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 3, 0, 10, 0
	ba_waitforvisualfinish
	ba_panse_27 0x00CF, SOUND_PAN_TARGET, SOUND_PAN_ATTACKER, 253, 0
	ba_createsprite sSpriteTemplate_085AD190, ANIM_ATTACKER, 40
	ba_waitforvisualfinish
	ba_delay 60
	ba_loopsewithpan 0x00C3, SOUND_PAN_ATTACKER, 16, 3
	ba_call BattleAnimScript_08285F3B
	ba_waitforvisualfinish
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 3, 10, 0, 0
	ba_waitforvisualfinish
	ba_end
Move_STOCKPILE:
	ba_loadspritegfx 0x27FB
	ba_playsewithpan 0x008C, SOUND_PAN_ATTACKER
	ba_createvisualtask sub_08116254, 2, 2, 8, 1, 0, 12, 0x7FFF
	ba_createvisualtask sub_0815B598, 5
	ba_call BattleAnimScript_08282EF9
	ba_call BattleAnimScript_08282EF9
	ba_waitforvisualfinish
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 2, 0, 12, 0, 0x7FFF
	ba_end
BattleAnimScript_08282EF9: @ 0x08282EF9
	ba_createsprite 0x0856DE28, ANIM_ATTACKER, 2, 55, 55, 13
	ba_delay 1
	ba_createsprite 0x0856DE28, ANIM_ATTACKER, 2, -55, -55, 13
	ba_delay 1
	ba_createsprite 0x0856DE28, ANIM_ATTACKER, 2, 0, 55, 13
	ba_delay 1
	ba_createsprite 0x0856DE28, ANIM_ATTACKER, 2, 0, -55, 13
	ba_delay 1
	ba_createsprite 0x0856DE28, ANIM_ATTACKER, 2, 55, -34, 13
	ba_delay 1
	ba_createsprite 0x0856DE28, ANIM_ATTACKER, 2, 55, 34, 13
	ba_delay 1
	ba_createsprite 0x0856DE28, ANIM_ATTACKER, 2, -55, -34, 13
	ba_delay 1
	ba_createsprite 0x0856DE28, ANIM_ATTACKER, 2, -55, 34, 13
	ba_delay 1
	ba_return
Move_SPIT_UP:
	ba_loadspritegfx 0x27FD
	ba_loadspritegfx 0x2797
	ba_playsewithpan 0x0098, SOUND_PAN_ATTACKER
	ba_createvisualtask AnimTask_StrongFrustrationGrowAndShrink, 5
	ba_createvisualtask AnimTask_ShakeMon2, 2, 0, 1, 0, 8, 2
	ba_delay 45
	ba_playsewithpan 0x00E8, SOUND_PAN_ATTACKER
	ba_delay 3
	ba_createsprite gSpitUpParticleSpriteTemplate, ANIM_ATTACKER, 2, 0, 12
	ba_createsprite gSpitUpParticleSpriteTemplate, ANIM_ATTACKER, 2, 32, 12
	ba_createsprite gSpitUpParticleSpriteTemplate, ANIM_ATTACKER, 2, 64, 12
	ba_createsprite gSpitUpParticleSpriteTemplate, ANIM_ATTACKER, 2, 96, 12
	ba_createsprite gSpitUpParticleSpriteTemplate, ANIM_ATTACKER, 2, 128, 12
	ba_createsprite gSpitUpParticleSpriteTemplate, ANIM_ATTACKER, 2, 160, 12
	ba_createsprite gSpitUpParticleSpriteTemplate, ANIM_ATTACKER, 2, 192, 12
	ba_createsprite gSpitUpParticleSpriteTemplate, ANIM_ATTACKER, 2, 224, 12
	ba_delay 5
	ba_jumpifmoveturn 2, BattleAnimScript_0828303F
	ba_jumpifmoveturn 3, BattleAnimScript_08283068
BattleAnimScript_08283002: @ 0x08283002
	ba_delay 5
	ba_createvisualtask sub_080D5C0C, 2, 0, 1, 8, 1, 0
	ba_playsewithpan 0x0086, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_PiercingHit, ANIM_TARGET, 3, -12, 10, 1, 1
	ba_delay 5
	ba_playsewithpan 0x0086, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_PiercingHit, ANIM_TARGET, 3, 12, -10, 1, 1
	ba_waitforvisualfinish
	ba_end
BattleAnimScript_0828303F: @ 0x0828303F
	ba_createsprite gSpitUpParticleSpriteTemplate, ANIM_ATTACKER, 2, 16
	ba_createsprite gSpitUpParticleSpriteTemplate, ANIM_ATTACKER, 2, 80
	ba_createsprite gSpitUpParticleSpriteTemplate, ANIM_ATTACKER, 2, 144
	ba_createsprite gSpitUpParticleSpriteTemplate, ANIM_ATTACKER, 2, 208
	ba_goto BattleAnimScript_08283002
BattleAnimScript_08283068: @ 0x08283068
	ba_createsprite gSpitUpParticleSpriteTemplate, ANIM_ATTACKER, 2, 16
	ba_createsprite gSpitUpParticleSpriteTemplate, ANIM_ATTACKER, 2, 48
	ba_createsprite gSpitUpParticleSpriteTemplate, ANIM_ATTACKER, 2, 80
	ba_createsprite gSpitUpParticleSpriteTemplate, ANIM_ATTACKER, 2, 112
	ba_createsprite gSpitUpParticleSpriteTemplate, ANIM_ATTACKER, 2, 144
	ba_createsprite gSpitUpParticleSpriteTemplate, ANIM_ATTACKER, 2, 176
	ba_createsprite gSpitUpParticleSpriteTemplate, ANIM_ATTACKER, 2, 208
	ba_createsprite gSpitUpParticleSpriteTemplate, ANIM_ATTACKER, 2, 240
	ba_goto BattleAnimScript_08283002
Move_SWALLOW:
	ba_loadspritegfx 0x27FC
	ba_loadspritegfx 0x272F
	ba_playsewithpan 0x0098, SOUND_PAN_ATTACKER
	ba_createvisualtask sub_0815B6B4, 5
	ba_createvisualtask AnimTask_ShakeMon2, 2, 0, 1, 0, 8, 2
	ba_delay 38
	ba_playsewithpan 0x00E8, SOUND_PAN_ATTACKER
	ba_createvisualtask AnimTask_ShakeMon2, 2, 0, 2, 0, 12, 1
	ba_call BattleAnimScript_08283106
	ba_jumpifmoveturn 2, BattleAnimScript_08283148
	ba_jumpifmoveturn 3, BattleAnimScript_08283152
BattleAnimScript_082830FF: @ 0x082830FF
	ba_waitforvisualfinish
	ba_call BattleAnimScript_08285F66
	ba_end
BattleAnimScript_08283106: @ 0x08283106
	ba_createsprite 0x085AD220, ANIM_ATTACKER, 2, 0, -8
	ba_delay 1
	ba_createsprite 0x085AD220, ANIM_ATTACKER, 2, -24, -8
	ba_delay 1
	ba_createsprite 0x085AD220, ANIM_ATTACKER, 2, 16, -8
	ba_delay 1
	ba_createsprite 0x085AD220, ANIM_ATTACKER, 2, -16, -8
	ba_delay 1
	ba_createsprite 0x085AD220, ANIM_ATTACKER, 2, 24, -8
	ba_delay 1
	ba_return
BattleAnimScript_08283148: @ 0x08283148
	ba_call BattleAnimScript_08283106
	ba_goto BattleAnimScript_082830FF
BattleAnimScript_08283152: @ 0x08283152
	ba_call BattleAnimScript_08283106
	ba_call BattleAnimScript_08283106
	ba_goto BattleAnimScript_082830FF
Move_TRANSFORM:
	ba_monbg ANIM_ATTACKER
	ba_playsewithpan 0x00CB, SOUND_PAN_ATTACKER
	ba_waitplaysewithpan 0x00CC, SOUND_PAN_ATTACKER, 48
	ba_createvisualtask sub_0815B70C, 2, 0
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_ATTACKER
	ba_end
Move_MORNING_SUN:
	ba_loadspritegfx 0x2801
	ba_loadspritegfx 0x272F
	ba_createvisualtask sub_0815BAC0, 5
	ba_delay 8
	ba_createvisualtask sub_08116E70, 10, 1921, 8, 0, 12, 0x7FFF
	ba_delay 14
	ba_call BattleAnimScript_082831FF
	ba_call BattleAnimScript_082831FF
	ba_call BattleAnimScript_082831FF
	ba_call BattleAnimScript_082831FF
	ba_call BattleAnimScript_082831FF
	ba_call BattleAnimScript_082831FF
	ba_call BattleAnimScript_082831FF
	ba_call BattleAnimScript_082831FF
	ba_call BattleAnimScript_082831FF
	ba_call BattleAnimScript_082831FF
	ba_call BattleAnimScript_082831FF
	ba_call BattleAnimScript_082831FF
	ba_call BattleAnimScript_082831FF
	ba_call BattleAnimScript_082831FF
	ba_call BattleAnimScript_082831FF
	ba_createvisualtask sub_08116E70, 10, 1921, 3, 12, 0, 0x7FFF
	ba_waitforvisualfinish
	ba_waitsound
	ba_call BattleAnimScript_08285F66
	ba_end
BattleAnimScript_082831FF: @ 0x082831FF
	ba_createsprite sSpriteTemplate_085AD294, ANIM_ATTACKER, 2, 30, 640
	ba_delay 5
	ba_return
Move_SWEET_SCENT:
	ba_loadspritegfx 0x27FE
	ba_playsewithpan 0x00EC, SOUND_PAN_ATTACKER
	ba_createsprite 0x085AD34C, ANIM_ATTACKER, 2, 100, 0, 100
	ba_delay 25
	ba_setpan 0x00
	ba_call BattleAnimScript_08283251
	ba_createsprite 0x085AD34C, ANIM_ATTACKER, 2, 55, 0
	ba_setpan SOUND_PAN_TARGET
	ba_createvisualtask sub_08116254, 2, 20, 1, 5, 5, 13, 0x56BF
	ba_call BattleAnimScript_08283251
	ba_waitforvisualfinish
	ba_end
BattleAnimScript_08283251: @ 0x08283251
	ba_createsprite 0x085AD34C, ANIM_ATTACKER, 2, 70, 1, 64
	ba_delay 2
	ba_createsprite 0x085AD34C, ANIM_ATTACKER, 2, 60, 0, 64
	ba_delay 5
	ba_createsprite 0x085AD34C, ANIM_ATTACKER, 2, 80, 1, 64
	ba_delay 2
	ba_createsprite 0x085AD34C, ANIM_ATTACKER, 2, 58, 0, 120
	ba_delay 2
	ba_createsprite 0x085AD34C, ANIM_ATTACKER, 2, 100, 0, 120
	ba_delay 2
	ba_createsprite 0x085AD34C, ANIM_ATTACKER, 2, 90, 0, 64
	ba_delay 2
	ba_createsprite 0x085AD34C, ANIM_ATTACKER, 2, 48, 0, 64
	ba_delay 2
	ba_createsprite 0x085AD34C, ANIM_ATTACKER, 2, 95, 1, 80
	ba_delay 2
	ba_createsprite 0x085AD34C, ANIM_ATTACKER, 2, 100, 0, 120
	ba_delay 2
	ba_createsprite 0x085AD34C, ANIM_ATTACKER, 2, 75, 1, 64
	ba_delay 2
	ba_createsprite 0x085AD34C, ANIM_ATTACKER, 2, 85, 0, 120
	ba_delay 2
	ba_return
Move_HYPER_BEAM:
	ba_loadspritegfx 0x27A3
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 4, 0, 16, 0
	ba_waitforvisualfinish
	ba_delay 10
	ba_playsewithpan 0x00D7, SOUND_PAN_ATTACKER
	ba_createvisualtask AnimTask_ShakeMon2, 2, 0, 1, 0, 4, 1
	ba_waitforvisualfinish
	ba_delay 30
	ba_createsoundtask sub_08158B94, 247, -64, 63, 1, 15, 0, 5
	ba_createvisualtask AnimTask_ShakeMon, 2, 0, 0, 4, 50, 1
	ba_createvisualtask sub_081165E4, 2, 0x27A3, 1, 12, 31, 16, 0, 0
	ba_call BattleAnimScript_08283428
	ba_call BattleAnimScript_08283428
	ba_call BattleAnimScript_08283428
	ba_call BattleAnimScript_08283428
	ba_call BattleAnimScript_08283428
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 4, 0, 50, 1
	ba_createvisualtask sub_08116E70, 10, 4, 2, 0, 11, 0x6739
	ba_call BattleAnimScript_08283428
	ba_call BattleAnimScript_08283428
	ba_call BattleAnimScript_08283428
	ba_call BattleAnimScript_08283428
	ba_call BattleAnimScript_08283428
	ba_call BattleAnimScript_08283428
	ba_call BattleAnimScript_08283428
	ba_call BattleAnimScript_08283428
	ba_call BattleAnimScript_08283428
	ba_call BattleAnimScript_08283428
	ba_call BattleAnimScript_08283428
	ba_call BattleAnimScript_08283428
	ba_call BattleAnimScript_08283428
	ba_call BattleAnimScript_08283428
	ba_call BattleAnimScript_08283428
	ba_call BattleAnimScript_08283428
	ba_call BattleAnimScript_08283428
	ba_call BattleAnimScript_08283428
	ba_call BattleAnimScript_08283428
	ba_call BattleAnimScript_08283428
	ba_call BattleAnimScript_08283428
	ba_createvisualtask sub_08116E70, 10, 4, 2, 11, 0, 0x6739
	ba_waitforvisualfinish
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 4, 16, 0, 0
	ba_end
BattleAnimScript_08283428: @ 0x08283428
	ba_createsprite 0x0856DE6C, ANIM_TARGET, 2
	ba_createsprite 0x0856DE6C, ANIM_TARGET, 2
	ba_delay 1
	ba_return
Move_FLATTER:
	ba_loadspritegfx 0x27F3
	ba_loadspritegfx 0x2800
	ba_createvisualtask sub_08159180, 5, 223, 63
	ba_createvisualtask sub_0815AB28, 2
	ba_createvisualtask sub_081171B0, 2, 248, 3, 0, 10, 0
	ba_waitforvisualfinish
	ba_createsprite 0x085AD3C8, ANIM_TARGET, 2, 0, -8, 80
	ba_delay 0
	ba_createsprite 0x0855A970, ANIM_ATTACKER, 2, 5, 2, 1
	ba_delay 10
	ba_createsprite 0x0855A970, ANIM_ATTACKER, 2, 5, 2, 1
	ba_delay 0
	ba_createvisualtask sub_0815914C, 5, 229, -64
	ba_call BattleAnimScript_08283522
	ba_call BattleAnimScript_08283522
	ba_call BattleAnimScript_08283522
	ba_call BattleAnimScript_08283522
	ba_call BattleAnimScript_08283522
	ba_call BattleAnimScript_08283522
	ba_call BattleAnimScript_08283522
	ba_call BattleAnimScript_08283522
	ba_call BattleAnimScript_08283522
	ba_call BattleAnimScript_08283522
	ba_call BattleAnimScript_08283522
	ba_call BattleAnimScript_08283522
	ba_call BattleAnimScript_08283522
	ba_call BattleAnimScript_08283522
	ba_call BattleAnimScript_08283522
	ba_call BattleAnimScript_08283522
	ba_call BattleAnimScript_08283522
	ba_call BattleAnimScript_08283522
	ba_call BattleAnimScript_08283522
	ba_delay 5
	ba_createvisualtask sub_0815914C, 5, 229, 63
	ba_waitforvisualfinish
	ba_createvisualtask sub_081171B0, 2, 248, 3, 10, 0, 1
	ba_waitforvisualfinish
	ba_createvisualtask sub_0815ABC8, 2
	ba_end
BattleAnimScript_08283522: @ 0x08283522
	ba_createsprite 0x085AD3B0, ANIM_ATTACKER, 40, 0
	ba_createsprite 0x085AD3B0, ANIM_ATTACKER, 40, 1
	ba_return
Move_ROLE_PLAY:
	ba_monbg ANIM_ATK_PARTNER
	ba_createvisualtask sub_08116E70, 10, 4, 2, 0, 16, 0x7FFF
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 2, 0, 10, 0
	ba_waitforvisualfinish
	ba_playsewithpan 0x00DC, SOUND_PAN_ATTACKER
	ba_waitplaysewithpan 0x00D1, SOUND_PAN_ATTACKER, 30
	ba_createvisualtask AnimTask_RolePlaySilhouette, 2
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_ATK_PARTNER
	ba_createvisualtask sub_08116E70, 10, 4, 2, 16, 0, 0x7FFF
	ba_delay 8
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 2, 10, 0, 0
	ba_end
Move_REFRESH:
	ba_loadspritegfx 0x27DB
	ba_loadspritegfx 0x2741
	ba_playsewithpan 0x00EF, SOUND_PAN_ATTACKER
	ba_createvisualtask sub_0815DF08, 2, 0
	ba_waitforvisualfinish
	ba_playsewithpan 0x00E4, SOUND_PAN_ATTACKER
	ba_call BattleAnimScript_08285F3B
	ba_waitforvisualfinish
	ba_playsewithpan 0x0066, SOUND_PAN_ATTACKER
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 31, 3, 10, 0, 0x7B0C
	ba_createsprite gThinRingExpandingSpriteTemplate, ANIM_ATTACKER, 3, 0, 0, 0, 0
	ba_end
Move_BLAZE_KICK:
	ba_loadspritegfx 0x2797
	ba_loadspritegfx 0x279F
	ba_loadspritegfx 0x272D
	ba_monbg ANIM_TARGET
	ba_setalpha 12, 8
	ba_playsewithpan 0x0090, SOUND_PAN_TARGET
	ba_createsprite 0x08571AF8, ANIM_TARGET, 3, 0, 0, 1, 30
	ba_createvisualtask sub_08116E70, 10, 4, 2, 0, 7, 0x7FFF
	ba_delay 30
	ba_playsewithpan 0x0093, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 2, 0, 0, 1, 0
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 3, 0, 14, 1
	ba_createvisualtask sub_08116E70, 10, 4, 2, 0, 0, 0x7FFF
	ba_createsprite 0x08572E70, ANIM_ATTACKER, 2, 31, 3, 1, 0, 8, 0, 0
	ba_call BattleAnimScript_0828129F
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_TARGET
	ba_blendoff
	ba_end
Move_HYPER_VOICE:
	ba_loadspritegfx 0x27DB
	ba_createvisualtask sub_08158FF4, 5, 0
	ba_call BattleAnimScript_08283681
	ba_waitforvisualfinish
	ba_delay 8
	ba_createvisualtask sub_08158FF4, 5, 1
	ba_call BattleAnimScript_08283681
	ba_waitforvisualfinish
	ba_end
BattleAnimScript_08283681: @ 0x08283681
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 31, 3, 8, 0, 1023
	ba_createvisualtask AnimTask_ScaleMonAndRestore, 5, -5, -5, 5, 0, 0
	ba_createsprite gHyperVoiceRingSpriteTemplate, ANIM_ATTACKER, 0, 45, 0, 0, 0, 0, 0, 1
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 1, 0, 6, 1
	ba_createvisualtask AnimTask_ShakeMon2, 2, 3, 1, 0, 6, 1
	ba_createvisualtask sub_08116AF4, 2, 1, 0, 6, 1
	ba_createvisualtask sub_08158FB4, 5
	ba_return
Move_SAND_TOMB:
	ba_loadspritegfx 0x275A
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 0, 4, 2, 0, 7, 563
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 0, 2, 43, 1
	ba_playsewithpan 0x00E6, SOUND_PAN_TARGET
	ba_call BattleAnimScript_0828373E
	ba_call BattleAnimScript_0828373E
	ba_call BattleAnimScript_0828373E
	ba_delay 22
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 0, 4, 2, 7, 0, 563
	ba_waitforvisualfinish
	ba_end
BattleAnimScript_0828373E: @ 0x0828373E
	ba_createsprite 0x08572718, ANIM_TARGET, 2, 0, 32, 528, 30, 10, 50, 1
	ba_delay 2
	ba_createsprite 0x08572718, ANIM_TARGET, 2, 0, 36, 480, 20, 13, -46, 1
	ba_delay 2
	ba_createsprite 0x08572718, ANIM_TARGET, 2, 0, 37, 576, 20, 5, 42, 1
	ba_delay 2
	ba_createsprite 0x08572718, ANIM_TARGET, 2, 0, 35, 400, 25, 8, -42, 1
	ba_delay 2
	ba_createsprite 0x08572718, ANIM_TARGET, 2, 0, 32, 512, 25, 13, 46, 1
	ba_delay 2
	ba_createsprite 0x08572718, ANIM_TARGET, 2, 0, 37, 464, 30, 12, -50, 1
	ba_delay 2
	ba_return
Move_SHEER_COLD:
	ba_fadetobg BG_ICE
	ba_waitbgfadeout
	ba_playsewithpan 0x0089, 0x00
	ba_waitbgfadein
	ba_loadspritegfx 0x271A
	ba_monbg ANIM_DEF_PARTNER
	ba_monbgprio_28 ANIM_TARGET
	ba_setalpha 12, 8
	ba_createvisualtask sub_080A97BC, 2
	ba_waitplaysewithpan 0x00F2, SOUND_PAN_TARGET, 17
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_restorebg
	ba_waitbgfadein
	ba_end
Move_ARM_THRUST:
	ba_loadspritegfx 0x279F
	ba_loadspritegfx 0x2797
	ba_monbgprio_28 ANIM_TARGET
	ba_setalpha 12, 8
	ba_createvisualtask sub_080D59B8, 5, 8, 5, 0, 0
	ba_delay 6
	ba_createsprite 0x0855A958, ANIM_ATTACKER, 2, 4, 3
	ba_delay 4
	ba_playsewithpan 0x00C1, SOUND_PAN_TARGET
	ba_createsprite 0x08571C18, ANIM_TARGET, 2, 10, -8, 14, 3
	ba_waitforvisualfinish
	ba_createvisualtask sub_080D59B8, 5, 8, 5, 0, 1
	ba_playsewithpan 0x0086, SOUND_PAN_TARGET
	ba_choosetwoturnanim BattleAnimScript_0828385B, BattleAnimScript_0828386F
BattleAnimScript_08283847: @ 0x08283847
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 4, 0, 6, 1
	ba_waitforvisualfinish
	ba_blendoff
	ba_end
BattleAnimScript_0828385B: @ 0x0828385B
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 2, 8, 0, 1, 2
	ba_goto BattleAnimScript_08283847
BattleAnimScript_0828386F: @ 0x0828386F
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 2, -8, 0, 1, 2
	ba_goto BattleAnimScript_08283847
Move_MUDDY_WATER:
	ba_panse_1B 0x00A5, SOUND_PAN_ATTACKER, SOUND_PAN_TARGET, 2, 0
	ba_createvisualtask AnimTask_CreateSurfWave, 2, 1
	ba_waitforvisualfinish
	ba_end
Move_BULLET_SEED:
	ba_loadspritegfx 0x2716
	ba_createsprite gBulletSeedSpriteTemplate, ANIM_TARGET, 2, 20, 0
	ba_delay 5
	ba_createsprite gBulletSeedSpriteTemplate, ANIM_TARGET, 2, 20, 0
	ba_delay 5
	ba_createsprite gBulletSeedSpriteTemplate, ANIM_TARGET, 2, 20, 0
	ba_delay 5
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 2, 0, 30, 1
	ba_createsprite gBulletSeedSpriteTemplate, ANIM_TARGET, 2, 20, 0
	ba_delay 5
	ba_createsprite gBulletSeedSpriteTemplate, ANIM_TARGET, 2, 20, 0
	ba_delay 5
	ba_createsprite gBulletSeedSpriteTemplate, ANIM_TARGET, 2, 20, 0
	ba_delay 5
	ba_createsprite gBulletSeedSpriteTemplate, ANIM_TARGET, 2, 20, 0
	ba_delay 5
	ba_createsprite gBulletSeedSpriteTemplate, ANIM_TARGET, 2, 20, 0
	ba_delay 5
	ba_createsprite gBulletSeedSpriteTemplate, ANIM_TARGET, 2, 20, 0
	ba_delay 5
	ba_createsprite gBulletSeedSpriteTemplate, ANIM_TARGET, 2, 20, 0
	ba_waitforvisualfinish
	ba_end
Move_DRAGON_CLAW:
	ba_loadspritegfx 0x272D
	ba_loadspritegfx 0x2737
	ba_playsewithpan 0x0096, SOUND_PAN_ATTACKER
	ba_createvisualtask sub_08116E70, 10, 2, 4, 0, 8, 639
	ba_createvisualtask AnimTask_ShakeMon, 5, 0, 0, 2, 15, 1
	ba_call BattleAnimScript_08283B08
	ba_call BattleAnimScript_08283B08
	ba_createsprite 0x0855A958, ANIM_ATTACKER, 2, 6, 4
	ba_createsprite 0x0857276C, ANIM_ATTACKER, 2, 0, 28, 528, 30, 13, 50, 0
	ba_delay 2
	ba_createvisualtask sub_0815914C, 5, 136, 63
	ba_createsprite 0x08572D1C, ANIM_TARGET, 2, -10, -10, 0
	ba_createsprite 0x08572D1C, ANIM_TARGET, 2, -10, 10, 0
	ba_createsprite 0x08572EBC, ANIM_ATTACKER, 2, -4, 1, 10, 3, 1
	ba_createsprite 0x0857276C, ANIM_ATTACKER, 2, 0, 32, 480, 20, 16, -46, 0
	ba_delay 2
	ba_createsprite 0x0857276C, ANIM_ATTACKER, 2, 0, 33, 576, 20, 8, 42, 0
	ba_delay 2
	ba_createsprite 0x0857276C, ANIM_ATTACKER, 2, 0, 31, 400, 25, 11, -42, 0
	ba_delay 2
	ba_createsprite 0x0855A958, ANIM_ATTACKER, 2, 6, 4
	ba_createsprite 0x0857276C, ANIM_ATTACKER, 2, 0, 28, 512, 25, 16, 46, 0
	ba_delay 2
	ba_createvisualtask sub_0815914C, 5, 136, 63
	ba_createsprite 0x08572D1C, ANIM_TARGET, 2, 10, -10, 1
	ba_createsprite 0x08572D1C, ANIM_TARGET, 2, 10, 10, 1
	ba_createsprite 0x08572EBC, ANIM_ATTACKER, 2, -4, 1, 10, 3, 1
	ba_createsprite 0x0857276C, ANIM_ATTACKER, 2, 0, 33, 464, 30, 15, -50, 0
	ba_delay 2
	ba_createsprite 0x0857276C, ANIM_ATTACKER, 2, 0, 28, 528, 30, 13, 50, 0
	ba_delay 2
	ba_createsprite 0x0857276C, ANIM_ATTACKER, 2, 0, 32, 480, 20, 16, -46, 0
	ba_delay 2
	ba_createsprite 0x0857276C, ANIM_ATTACKER, 2, 0, 33, 576, 20, 8, 42, 0
	ba_delay 2
	ba_createsprite 0x0857276C, ANIM_ATTACKER, 2, 0, 31, 400, 25, 11, -42, 0
	ba_delay 2
	ba_createsprite 0x0857276C, ANIM_ATTACKER, 2, 0, 28, 512, 25, 16, 46, 0
	ba_delay 2
	ba_createsprite 0x0857276C, ANIM_ATTACKER, 2, 0, 33, 464, 30, 15, -50, 0
	ba_createvisualtask sub_08116E70, 10, 2, 4, 8, 0, 639
	ba_waitforvisualfinish
	ba_end
BattleAnimScript_08283B08: @ 0x08283B08
	ba_createsprite 0x0857276C, ANIM_ATTACKER, 2, 0, 28, 528, 30, 13, 50, 0
	ba_delay 2
	ba_createsprite 0x0857276C, ANIM_ATTACKER, 2, 0, 32, 480, 20, 16, -46, 0
	ba_delay 2
	ba_createsprite 0x0857276C, ANIM_ATTACKER, 2, 0, 33, 576, 20, 8, 42, 0
	ba_delay 2
	ba_createsprite 0x0857276C, ANIM_ATTACKER, 2, 0, 31, 400, 25, 11, -42, 0
	ba_delay 2
	ba_createsprite 0x0857276C, ANIM_ATTACKER, 2, 0, 28, 512, 25, 16, 46, 0
	ba_delay 2
	ba_createsprite 0x0857276C, ANIM_ATTACKER, 2, 0, 33, 464, 30, 15, -50, 0
	ba_delay 2
	ba_return
	ba_end
Move_MUD_SHOT:
BattleAnimScript_08283B94: @ 0x08283B94
	ba_loadspritegfx 0x2813
	ba_monbg ANIM_DEF_PARTNER
	ba_monbgprio_28 ANIM_TARGET
	ba_setalpha 12, 8
	ba_createvisualtask AnimTask_ShakeMon, 5, 0, 0, 2, 46, 1
	ba_delay 6
	ba_createvisualtask sub_08107F18, 5, 100
	ba_panse_1B 0x00A5, SOUND_PAN_ATTACKER, SOUND_PAN_TARGET, 1, 0
	ba_call BattleAnimScript_08283C0E
	ba_call BattleAnimScript_08283C0E
	ba_call BattleAnimScript_08283C0E
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 3, 0, 43, 1
	ba_call BattleAnimScript_08283C0E
	ba_call BattleAnimScript_08283C0E
	ba_call BattleAnimScript_08283C0E
	ba_call BattleAnimScript_08283C0E
	ba_call BattleAnimScript_08283C0E
	ba_call BattleAnimScript_08283C0E
	ba_call BattleAnimScript_08283C0E
	ba_call BattleAnimScript_08283C0E
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
BattleAnimScript_08283C0E: @ 0x08283C0E
	ba_createsprite 0x08570CE0, ANIM_ATTACKER, 3, 10, 10, 0, 16
	ba_delay 2
	ba_createsprite 0x08570CE0, ANIM_ATTACKER, 3, 10, 10, 0, 16
	ba_delay 2
	ba_return
Move_METEOR_MASH:
	ba_loadspritegfx 0x27F9
	ba_loadspritegfx 0x2797
	ba_loadspritegfx 0x279F
	ba_panse_1B 0x00D0, SOUND_PAN_ATTACKER, SOUND_PAN_TARGET, 3, 0
	ba_fadetobg BG_COSMIC
	ba_waitbgfadein
	ba_waitforvisualfinish
	ba_createsprite 0x085AD6E4, ANIM_TARGET, 3, -48, -64, 72, 32, 30
	ba_delay 10
	ba_createsprite 0x085AD6E4, ANIM_TARGET, 3, -112, -64, 8, 32, 30
	ba_delay 40
	ba_createsprite 0x08571AF8, ANIM_TARGET, 3, 0, 0, 0, 30
	ba_createsprite 0x085AD6E4, ANIM_TARGET, 3, -80, -64, 40, 32, 30
	ba_delay 20
	ba_playsewithpan 0x007B, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 3, 0, 0, 1, 1
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 5, 0, 20, 1
	ba_waitforvisualfinish
	ba_delay 10
	ba_restorebg
	ba_waitbgfadein
	ba_waitforvisualfinish
	ba_end
Move_REVENGE:
	ba_loadspritegfx 0x2805
	ba_monbg ANIM_TARGET
	ba_setalpha 12, 8
	ba_playsewithpan 0x0098, SOUND_PAN_ATTACKER
	ba_createsprite 0x08571C6C, ANIM_ATTACKER, 2, 10, -10
	ba_waitforvisualfinish
	ba_createvisualtask sub_08116254, 2, 2, 0, 4, 2, 8, 31
	ba_waitforvisualfinish
	ba_unloadspritegfx 0x2805
	ba_loadspritegfx 0x2806
	ba_createsprite 0x0855A958, ANIM_ATTACKER, 2, 6, 4
	ba_delay 4
	ba_playsewithpan 0x00C1, SOUND_PAN_TARGET
	ba_createsprite 0x08571CB4, ANIM_TARGET, 2, 10, -10
	ba_waitforvisualfinish
	ba_unloadspritegfx 0x2806
	ba_loadspritegfx 0x2797
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 3, 0, 10, 1
	ba_createsprite gBattleAnimSpriteTemplate_PiercingHitStoredCallback, ANIM_TARGET, 3, -10, -8, 1, 1, 8
	ba_playsewithpan 0x007B, SOUND_PAN_TARGET
	ba_delay 8
	ba_createsprite gBattleAnimSpriteTemplate_PiercingHitStoredCallback, ANIM_TARGET, 3, 10, 8, 1, 1, 8
	ba_playsewithpan 0x008D, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_TARGET
	ba_blendoff
	ba_end
Move_POISON_FANG:
	ba_loadspritegfx 0x27D0
	ba_loadspritegfx 0x27A6
	ba_playsewithpan 0x00A1, SOUND_PAN_TARGET
	ba_createsprite 0x085ACFE4, ANIM_TARGET, 2
	ba_delay 10
	ba_createvisualtask AnimTask_ShakeMon, 3, 1, 3, 0, 10, 1
	ba_waitforvisualfinish
	ba_createvisualtask sub_08116254, 2, 4, 0, 4, 0, 12, 0x681A
	ba_call BattleAnimScript_08285FF8
	ba_waitforvisualfinish
	ba_end
Move_SUBSTITUTE:
	ba_playsewithpan 0x00E2, SOUND_PAN_ATTACKER
	ba_createvisualtask AnimTask_MonToSubstitute, 2
	ba_end
Move_FRENZY_PLANT:
	ba_loadspritegfx 0x27EF
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_TARGET
	ba_monbgprio_28 ANIM_TARGET
	ba_setalpha 12, 8
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 0, 1, 2, 0, 5, 0
	ba_waitforvisualfinish
	ba_createsprite 0x0856E148, ANIM_ATTACKER, 2, 10, 8, 2, 0, 0, 100
	ba_playsewithpan 0x009B, SOUND_PAN_ATTACKER
	ba_delay 5
	ba_createsprite 0x0856E148, ANIM_ATTACKER, 2, 20, -8, -2, 0, 1, 95
	ba_playsewithpan 0x009B, 0xD5
	ba_delay 5
	ba_createsprite 0x0856E148, ANIM_ATTACKER, 2, 30, 8, -4, 0, 0, 90
	ba_playsewithpan 0x009B, 0xEA
	ba_delay 5
	ba_createsprite 0x0856E148, ANIM_ATTACKER, 2, 40, -8, 4, 0, 1, 85
	ba_playsewithpan 0x009B, 0x00
	ba_delay 5
	ba_createsprite 0x0856E148, ANIM_ATTACKER, 2, 50, 8, 0, 0, 0, 85
	ba_playsewithpan 0x009B, 0x15
	ba_delay 5
	ba_createsprite 0x0856E148, ANIM_ATTACKER, 2, 60, -8, -2, 0, 1, 85
	ba_playsewithpan 0x009B, 0x2A
	ba_delay 5
	ba_createsprite 0x0856E148, ANIM_ATTACKER, 2, 75, 8, 0, 0, 0, 85
	ba_playsewithpan 0x009B, SOUND_PAN_TARGET
	ba_delay 5
	ba_createsprite 0x0856E148, ANIM_ATTACKER, 2, 85, 16, 6, 0, 3, 80
	ba_playsewithpan 0x009B, SOUND_PAN_TARGET
	ba_delay 5
	ba_createsprite 0x0856E148, ANIM_ATTACKER, 2, 85, -16, -6, 0, 2, 75
	ba_playsewithpan 0x009B, SOUND_PAN_TARGET
	ba_delay 5
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, -10, -10, 1, 3
	ba_playsewithpan 0x0086, SOUND_PAN_TARGET
	ba_createvisualtask AnimTask_ShakeMon, 3, 1, 8, 0, 20, 1
	ba_delay 3
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, 10, 8, 1, 3
	ba_playsewithpan 0x0086, SOUND_PAN_TARGET
	ba_delay 3
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, 10, -3, 1, 2
	ba_playsewithpan 0x0086, SOUND_PAN_TARGET
	ba_delay 3
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, -3, 1, 1, 2
	ba_playsewithpan 0x0086, SOUND_PAN_TARGET
	ba_delay 2
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, -10, 1, 1, 1
	ba_playsewithpan 0x0086, SOUND_PAN_TARGET
	ba_delay 2
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, 0, 10, 1, 1
	ba_playsewithpan 0x0086, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 0, 1, 2, 5, 0, 0
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_TARGET
	ba_blendoff
	ba_end
Move_METAL_SOUND:
	ba_loadspritegfx 0x2814
	ba_monbg ANIM_DEF_PARTNER
	ba_monbgprio_2A ANIM_TARGET
	ba_createvisualtask AnimTask_ShakeMon2, 2, 0, 2, 0, 8, 1
	ba_call BattleAnimScript_08283F71
	ba_call BattleAnimScript_08283F71
	ba_call BattleAnimScript_08283F71
	ba_call BattleAnimScript_08283F71
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_delay 0
	ba_waitforvisualfinish
	ba_end
BattleAnimScript_08283F71: @ 0x08283F71
	ba_panse_1B 0x00B5, SOUND_PAN_ATTACKER, SOUND_PAN_TARGET, 2, 0
	ba_createsprite gMetalSoundWaveSpriteTemplate, ANIM_TARGET, 2, 16, 0, 0, 0, 30, 0
	ba_delay 2
	ba_return
Move_FOCUS_PUNCH:
	ba_goto BattleAnimScript_08283F95
BattleAnimScript_08283F93: @ 0x08283F93
	ba_waitforvisualfinish
	ba_end
BattleAnimScript_08283F95: @ 0x08283F95
	ba_loadspritegfx 0x2797
	ba_loadspritegfx 0x279F
	ba_delay 1
	ba_createvisualtask AnimTask_IsContest, 2
	ba_jumpargeq 0x07, 1, BattleAnimScript_0828404E
	ba_createvisualtask AnimTask_IsTargetPlayerSide, 2
	ba_jumpargeq 0x07, 0, BattleAnimScript_08284040
	ba_jumpargeq 0x07, 1, BattleAnimScript_08284047
BattleAnimScript_08283FC3: @ 0x08283FC3
	ba_waitbgfadein
	ba_monbg ANIM_DEF_PARTNER
	ba_setalpha 12, 8
	ba_playsewithpan 0x00C1, SOUND_PAN_TARGET
	ba_createsprite 0x08571CE8, ANIM_TARGET, 2
	ba_delay 10
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, -10, -8, 1, 0
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 8, 0, 24, 1
	ba_delay 8
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, 10, 2, 1, 0
	ba_playsewithpan 0x007B, SOUND_PAN_TARGET
	ba_delay 8
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, 10, -6, 1, 0
	ba_playsewithpan 0x007B, SOUND_PAN_TARGET
	ba_delay 8
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, 0, 8, 1, 0
	ba_playsewithpan 0x008D, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_restorebg
	ba_waitbgfadein
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_goto BattleAnimScript_08283F93
BattleAnimScript_08284040: @ 0x08284040
	ba_fadetobg BG_IMPACT_OPPONENT
	ba_goto BattleAnimScript_08283FC3
BattleAnimScript_08284047: @ 0x08284047
	ba_fadetobg BG_IMPACT_PLAYER
	ba_goto BattleAnimScript_08283FC3
BattleAnimScript_0828404E: @ 0x0828404E
	ba_fadetobg BG_IMPACT_CONTESTS
	ba_goto BattleAnimScript_08283FC3
Move_RETURN:
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_DEF_PARTNER
	ba_setalpha 12, 8
	ba_createvisualtask AnimTask_GetReturnPowerLevel, 2
	ba_delay 2
	ba_jumpargeq 0x07, 0, BattleAnimScript_0828408B
	ba_jumpargeq 0x07, 1, BattleAnimScript_082840DD
	ba_jumpargeq 0x07, 2, BattleAnimScript_0828413D
	ba_jumpargeq 0x07, 3, BattleAnimScript_08284258
BattleAnimScript_08284086: @ 0x08284086
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
BattleAnimScript_0828408B: @ 0x0828408B
	ba_createsprite 0x0855A970, ANIM_ATTACKER, 2, 16, 1, 0
	ba_createvisualtask sub_08159180, 5, 167, -64
	ba_waitforvisualfinish
	ba_createsprite 0x0855A970, ANIM_ATTACKER, 2, 16, 1, 0
	ba_createvisualtask sub_08159180, 5, 167, -64
	ba_delay 5
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, -10, -8, 1, 2
	ba_createvisualtask sub_0815914C, 5, 139, 63
	ba_goto BattleAnimScript_08284086
BattleAnimScript_082840DD: @ 0x082840DD
	ba_createsprite 0x0855A970, ANIM_ATTACKER, 2, 6, 1, 0
	ba_createvisualtask sub_08159180, 5, 167, -64
	ba_waitforvisualfinish
	ba_createsprite 0x0855A970, ANIM_ATTACKER, 2, 6, 1, 0
	ba_createvisualtask sub_08159180, 5, 167, -64
	ba_waitforvisualfinish
	ba_delay 11
	ba_createsprite 0x0855A958, ANIM_ATTACKER, 2, 5, 4
	ba_delay 6
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 3, 0, 0, 1, 2
	ba_createvisualtask sub_0815914C, 5, 141, 63
	ba_goto BattleAnimScript_08284086
BattleAnimScript_0828413D: @ 0x0828413D
	ba_createsprite 0x0855A970, ANIM_ATTACKER, 2, 6, 1, 0
	ba_createvisualtask sub_08159180, 5, 167, -64
	ba_waitforvisualfinish
	ba_createsprite 0x0855A970, ANIM_ATTACKER, 2, 6, 1, 0
	ba_createvisualtask sub_08159180, 5, 167, -64
	ba_waitforvisualfinish
	ba_createsprite 0x0855A970, ANIM_ATTACKER, 2, 6, 1, 0
	ba_createvisualtask sub_08159180, 5, 167, -64
	ba_waitforvisualfinish
	ba_createsprite 0x0855A970, ANIM_ATTACKER, 2, 6, 1, 0
	ba_createvisualtask sub_08159180, 5, 167, -64
	ba_waitforvisualfinish
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, -10, -8, 1, 2
	ba_createvisualtask sub_0815914C, 5, 123, 63
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 6, 0, 8, 1
	ba_delay 8
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, 10, 10, 1, 2
	ba_createvisualtask sub_0815914C, 5, 123, 63
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 6, 0, 8, 1
	ba_delay 8
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, 3, -5, 1, 2
	ba_createvisualtask sub_0815914C, 5, 123, 63
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 6, 0, 8, 1
	ba_delay 8
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, -5, 3, 1, 2
	ba_createvisualtask sub_0815914C, 5, 123, 63
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 6, 0, 8, 1
	ba_goto BattleAnimScript_08284086
BattleAnimScript_08284258: @ 0x08284258
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 0, 0, 6, 0
	ba_waitforvisualfinish
	ba_createsprite 0x0855A970, ANIM_ATTACKER, 2, 16, 1, 0
	ba_createvisualtask sub_08159180, 5, 167, -64
	ba_delay 8
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, 3, -5, 1, 2
	ba_createvisualtask sub_0815914C, 5, 123, 63
	ba_waitforvisualfinish
	ba_createsprite 0x0855A970, ANIM_ATTACKER, 2, 12, 1, 0
	ba_createvisualtask sub_08159180, 5, 167, -64
	ba_delay 5
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, -10, -8, 1, 2
	ba_createvisualtask sub_0815914C, 5, 123, 63
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 6, 0, 8, 1
	ba_waitforvisualfinish
	ba_delay 4
	ba_createsprite 0x0855A970, ANIM_ATTACKER, 2, 8, 1, 0
	ba_createvisualtask sub_08159180, 5, 167, -64
	ba_delay 5
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, -10, -8, 1, 2
	ba_createvisualtask sub_0815914C, 5, 123, 63
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 6, 0, 8, 1
	ba_waitforvisualfinish
	ba_delay 2
	ba_createvisualtask sub_08117210, 2, 0, 4, 5, 1
	ba_createsprite 0x0855A970, ANIM_ATTACKER, 2, 4, 1, 0
	ba_createvisualtask sub_08159180, 5, 167, -64
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, -10, -8, 1, 2
	ba_createvisualtask sub_0815914C, 5, 123, 63
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 6, 0, 8, 1
	ba_createvisualtask sub_08117210, 2, 0, 4, 5, 1
	ba_waitforvisualfinish
	ba_createsprite 0x0855A970, ANIM_ATTACKER, 2, 4, 2, 0
	ba_createvisualtask sub_08159180, 5, 167, -64
	ba_delay 5
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, -10, -8, 1, 2
	ba_createvisualtask sub_0815914C, 5, 123, 63
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 6, 0, 8, 1
	ba_createvisualtask sub_08117210, 2, 0, 4, 5, 1
	ba_waitforvisualfinish
	ba_call BattleAnimScript_08284490
	ba_call BattleAnimScript_08284490
	ba_call BattleAnimScript_08284490
	ba_call BattleAnimScript_08284490
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, -10, -8, 1, 0
	ba_createvisualtask sub_0815914C, 5, 141, 63
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 8, 0, 24, 1
	ba_delay 6
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, 10, 10, 1, 0
	ba_createvisualtask sub_0815914C, 5, 141, 63
	ba_delay 6
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, 3, -5, 1, 0
	ba_createvisualtask sub_0815914C, 5, 141, 63
	ba_delay 6
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, -5, 3, 1, 0
	ba_createvisualtask sub_0815914C, 5, 141, 63
	ba_waitforvisualfinish
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 0, 6, 0, 0
	ba_goto BattleAnimScript_08284086
BattleAnimScript_08284490: @ 0x08284490
	ba_createsprite 0x0855A970, ANIM_ATTACKER, 2, 4, 3, 0
	ba_createvisualtask sub_08159180, 5, 167, -64
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, 0, 0, 1, 2
	ba_createvisualtask sub_0815914C, 5, 123, 63
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 6, 0, 8, 1
	ba_createvisualtask sub_08117210, 2, 0, 4, 5, 1
	ba_waitforvisualfinish
	ba_return
Move_COSMIC_POWER:
	ba_loadspritegfx 0x2741
	ba_createvisualtask sub_08159180, 5, 243, 0
	ba_playsewithpan 0x00F3, 0x00
	ba_createvisualtask sub_08117E60, 2, 0, 0, 15, 0
	ba_waitforvisualfinish
	ba_fadetobg BG_COSMIC
	ba_waitbgfadeout
	ba_createvisualtask sub_08117EB0, 2, 0, 128, 0, 0xFFFF
	ba_waitbgfadein
	ba_delay 70
	ba_createvisualtask sub_0815914C, 5, 228, -64
	ba_createsprite gHealingSparkleSpriteTemplate, ANIM_ATTACKER, 2, -15, 0, 0, 0, 32, 60
	ba_delay 8
	ba_createsprite gHealingSparkleSpriteTemplate, ANIM_ATTACKER, 2, 12, -5, 0, 0, 32, 60
	ba_delay 40
	ba_createvisualtask sub_08117E60, 2, 0, 15, 0, 0
	ba_waitforvisualfinish
	ba_restorebg
	ba_waitbgfadeout
	ba_setarg 0x07, 0xFFFF
	ba_waitbgfadein
	ba_waitforvisualfinish
	ba_end
Move_BLAST_BURN:
	ba_loadspritegfx 0x2733
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_DEF_PARTNER
	ba_setalpha 12, 8
	ba_playsewithpan 0x0095, SOUND_PAN_ATTACKER
	ba_createsprite 0x0857100C, ANIM_ATTACKER, 2, -32, 0, 24, 0, 0, 0
	ba_createsprite 0x0857100C, ANIM_ATTACKER, 2, -20, -10, 24, 0, 0, 0
	ba_createsprite 0x0857100C, ANIM_ATTACKER, 66, 0, -16, 24, 0, 0, 0
	ba_createsprite 0x0857100C, ANIM_ATTACKER, 66, 20, -10, 24, 0, 0, 0
	ba_createsprite 0x0857100C, ANIM_ATTACKER, 66, 32, 0, 24, 0, 0, 0
	ba_createsprite 0x0857100C, ANIM_ATTACKER, 66, 20, 10, 24, 0, 0, 0
	ba_createsprite 0x0857100C, ANIM_ATTACKER, 2, 0, 16, 24, 0, 0, 0
	ba_createsprite 0x0857100C, ANIM_ATTACKER, 2, -20, 10, 24, 0, 0, 0
	ba_delay 25
	ba_playsewithpan 0x0091, SOUND_PAN_ATTACKER
	ba_createsprite 0x0857100C, ANIM_ATTACKER, 2, -64, 0, 24, 0, 0, 0
	ba_createsprite 0x0857100C, ANIM_ATTACKER, 6, -40, -20, 24, 0, 0, 0
	ba_createsprite 0x0857100C, ANIM_ATTACKER, 70, 0, -32, 24, 0, 0, 0
	ba_createsprite 0x0857100C, ANIM_ATTACKER, 70, 40, -20, 24, 0, 0, 0
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 6, 0, 8, 1
	ba_createsprite 0x0857100C, ANIM_ATTACKER, 66, 64, 0, 24, 0, 0, 0
	ba_createsprite 0x0857100C, ANIM_ATTACKER, 66, 40, 20, 24, 0, 0, 0
	ba_createsprite 0x0857100C, ANIM_ATTACKER, 2, 0, 32, 24, 0, 0, 0
	ba_createsprite 0x0857100C, ANIM_ATTACKER, 2, -40, 20, 24, 0, 0, 0
	ba_createvisualtask sub_08116760, 2, 257, 257, 257
	ba_delay 25
	ba_playsewithpan 0x0091, SOUND_PAN_ATTACKER
	ba_createsprite 0x0857100C, ANIM_ATTACKER, 2, -96, 0, 24, 0, 0, 0
	ba_createsprite 0x0857100C, ANIM_ATTACKER, 6, -60, -30, 24, 0, 0, 0
	ba_createsprite 0x0857100C, ANIM_ATTACKER, 70, 0, -48, 24, 0, 0, 0
	ba_createsprite 0x0857100C, ANIM_ATTACKER, 70, 60, -30, 24, 0, 0, 0
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 2, -4, 3, 1, 0
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 12, 0, 20, 1
	ba_createvisualtask sub_08116AF4, 2, 2, 0, 10, 1
	ba_createsprite 0x0857100C, ANIM_ATTACKER, 66, 96, 0, 24, 0, 0, 0
	ba_createsprite 0x0857100C, ANIM_ATTACKER, 66, 60, 30, 24, 0, 0, 0
	ba_createsprite 0x0857100C, ANIM_ATTACKER, 2, 0, 48, 24, 0, 0, 0
	ba_createsprite 0x0857100C, ANIM_ATTACKER, 2, -60, 30, 24, 0, 0, 0
	ba_createvisualtask sub_08116760, 2, 257, 257, 257
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
Move_ROCK_TOMB:
	ba_loadspritegfx 0x280A
	ba_loadspritegfx 0x274A
	ba_createvisualtask sub_08116AF4, 2, 2, 0, 10, 1
	ba_waitforvisualfinish
	ba_createsprite 0x0857283C, ANIM_TARGET, 2, 20, 12, 64, 114, 0
	ba_delay 8
	ba_createvisualtask sub_08116AF4, 2, 0, 2, 3, 1
	ba_playsewithpan 0x00D6, SOUND_PAN_TARGET
	ba_delay 8
	ba_createsprite 0x0857283C, ANIM_TARGET, 2, -20, 12, 64, 98, 0
	ba_delay 8
	ba_createvisualtask sub_08116AF4, 2, 0, 2, 3, 1
	ba_playsewithpan 0x00D6, SOUND_PAN_TARGET
	ba_delay 8
	ba_createsprite 0x0857283C, ANIM_TARGET, 66, 3, 6, 64, 82, 0
	ba_delay 8
	ba_createvisualtask sub_08116AF4, 2, 0, 2, 3, 1
	ba_playsewithpan 0x00D6, SOUND_PAN_TARGET
	ba_delay 8
	ba_createsprite 0x0857283C, ANIM_TARGET, 2, -3, 13, 64, 66, 0
	ba_delay 8
	ba_createvisualtask sub_08116AF4, 2, 0, 2, 3, 1
	ba_playsewithpan 0x00D6, SOUND_PAN_TARGET
	ba_delay 24
	ba_playsewithpan 0x00D7, SOUND_PAN_TARGET
	ba_createsprite 0x08572390, ANIM_TARGET, 5, 1, 50
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 3, 0, 20, 1
	ba_createvisualtask sub_08116AF4, 2, 2, 0, 10, 1
	ba_waitforvisualfinish
	ba_end
Move_SILVER_WIND:
	ba_loadspritegfx 0x281F
	ba_panse_1B 0x0084, SOUND_PAN_ATTACKER, SOUND_PAN_TARGET, 2, 0
	ba_playsewithpan 0x00E4, 0x00
	ba_delay 0
	ba_monbg ANIM_DEF_PARTNER
	ba_monbgprio_29
	ba_delay 0
	ba_createvisualtask sub_08116EB4, 10, 1, 0, 0, 4, 0
	ba_createvisualtask AnimTask_GetTargetSide, 2
	ba_jumpargeq 0x07, 1, BattleAnimScript_08284A93
	ba_fadetobg BG_BUG_OPPONENT
	ba_waitbgfadeout
	ba_createvisualtask sub_08117EB0, 5, 1536, 0, 0, 0xFFFF
BattleAnimScript_082848D9: @ 0x082848D9
	ba_delay 0
	ba_createvisualtask sub_08116E70, 10, 1, 0, 4, 4, 0
	ba_waitbgfadein
	ba_createsprite 0x0856E414, ANIM_TARGET, 66, -32, 16, 0, 6, 2, 3, 1
	ba_createsprite 0x0856E414, ANIM_TARGET, 66, -8, 18, 64, 3, 2, 2, 1
	ba_createsprite 0x0856E414, ANIM_ATTACKER, 120, -24, 18, 90, 5, 1, 2, 1
	ba_createsprite 0x0856E414, ANIM_ATTACKER, 120, -40, 14, 128, 4, 1, 2, 1
	ba_delay 0
	ba_createsprite 0x0856E42C, ANIM_TARGET, 66, -32, 16, 0, 6, 2, 3, 1
	ba_createsprite 0x0856E42C, ANIM_TARGET, 66, -8, 18, 64, 3, 2, 2, 1
	ba_createsprite 0x0856E42C, ANIM_ATTACKER, 120, -24, 18, 90, 5, 1, 2, 1
	ba_createsprite 0x0856E42C, ANIM_ATTACKER, 120, -40, 14, 128, 4, 1, 2, 1
	ba_delay 0
	ba_createsprite 0x0856E444, ANIM_TARGET, 66, -32, 16, 0, 6, 2, 3, 1
	ba_createsprite 0x0856E444, ANIM_TARGET, 66, -8, 18, 64, 3, 2, 2, 1
	ba_createsprite 0x0856E444, ANIM_ATTACKER, 120, -24, 18, 90, 5, 1, 2, 1
	ba_createsprite 0x0856E444, ANIM_ATTACKER, 120, -40, 14, 128, 4, 1, 2, 1
	ba_delay 6
	ba_createsprite 0x0856E414, ANIM_TARGET, 66, -4, 16, 0, 6, 1, 2, 1
	ba_createsprite 0x0856E414, ANIM_TARGET, 66, -16, 12, 192, 5, 2, 3, 1
	ba_delay 0
	ba_createsprite 0x0856E42C, ANIM_TARGET, 66, -4, 16, 0, 6, 1, 2, 1
	ba_createsprite 0x0856E42C, ANIM_TARGET, 66, -16, 12, 192, 5, 2, 3, 1
	ba_delay 0
	ba_createsprite 0x0856E444, ANIM_TARGET, 66, -4, 16, 0, 6, 1, 2, 1
	ba_createsprite 0x0856E444, ANIM_TARGET, 66, -16, 12, 192, 5, 2, 3, 1
	ba_waitforvisualfinish
	ba_playsewithpan 0x0085, SOUND_PAN_TARGET
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_delay 0
	ba_restorebg
	ba_waitbgfadeout
	ba_createvisualtask sub_08116EB4, 10, 1, 0, 4, 0, 0
	ba_setarg 0x07, 0xFFFF
	ba_waitbgfadein
	ba_end
BattleAnimScript_08284A93: @ 0x08284A93
	ba_fadetobg BG_BUG_PLAYER
	ba_waitbgfadeout
	ba_createvisualtask sub_08117EB0, 5, -1536, 0, 0, 0xFFFF
	ba_goto BattleAnimScript_082848D9
Move_SNATCH:
	ba_playsewithpan 0x0098, SOUND_PAN_ATTACKER
	ba_createvisualtask AnimTask_WindUpLunge, 5, 0, -12, 4, 10, 10, 12, 6
	ba_end
Move_DIVE:
	ba_loadspritegfx 0x2820
	ba_loadspritegfx 0x2821
	ba_choosetwoturnanim BattleAnimScript_08284AD3, BattleAnimScript_08284B28
BattleAnimScript_08284AD3: @ 0x08284AD3
	ba_loadspritegfx 0x27AC
	ba_playsewithpan 0x00A2, SOUND_PAN_ATTACKER
	ba_createsprite 0x08572074, ANIM_ATTACKER, 2, 0, 0, 13, 336
	ba_waitforvisualfinish
	ba_playsewithpan 0x00E9, SOUND_PAN_ATTACKER
	ba_createsprite 0x085720B0, ANIM_ATTACKER, 3, 0
	ba_call BattleAnimScript_08284B11
	ba_call BattleAnimScript_08284B11
	ba_call BattleAnimScript_08284B11
	ba_call BattleAnimScript_08284B11
	ba_call BattleAnimScript_08284B11
	ba_end
BattleAnimScript_08284B11: @ 0x08284B11
	ba_createsprite 0x085720C8, ANIM_ATTACKER, 5, 0, 0
	ba_createsprite 0x085720C8, ANIM_ATTACKER, 5, 1, 0
	ba_return
BattleAnimScript_08284B28: @ 0x08284B28
	ba_loadspritegfx 0x27A4
	ba_loadspritegfx 0x27AB
	ba_monbg ANIM_DEF_PARTNER
	ba_setalpha 12, 8
	ba_playsewithpan 0x00B2, SOUND_PAN_TARGET
	ba_createsprite 0x085720B0, ANIM_TARGET, 3, 1
	ba_call BattleAnimScript_08284B67
	ba_call BattleAnimScript_08284B67
	ba_call BattleAnimScript_08284B67
	ba_call BattleAnimScript_08284B67
	ba_call BattleAnimScript_08284B67
	ba_delay 12
	ba_call BattleAnimScript_0827968E
	ba_waitforvisualfinish
	ba_visible ANIM_ATTACKER
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
BattleAnimScript_08284B67: @ 0x08284B67
	ba_createsprite 0x085720C8, ANIM_TARGET, 5, 0, 1
	ba_createsprite 0x085720C8, ANIM_TARGET, 5, 1, 1
	ba_return
Move_ROCK_BLAST:
	ba_loadspritegfx 0x274A
	ba_loadspritegfx 0x2797
	ba_createsprite 0x0855A958, ANIM_ATTACKER, 2, 4, 6
	ba_delay 3
	ba_playsewithpan 0x00C1, SOUND_PAN_ATTACKER
	ba_createsprite 0x0857287C, ANIM_TARGET, 2, 16, 0, 0, 0, 25, 257
	ba_waitforvisualfinish
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 3, 0, 0, 1, 1
	ba_playsewithpan 0x0083, SOUND_PAN_TARGET
	ba_createsprite 0x08572700, ANIM_TARGET, 2, 0, 0, 20, 24, 14, 2
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 3, 0, 5, 1
	ba_createsprite 0x08572700, ANIM_TARGET, 2, 5, 0, -20, 24, 14, 1
	ba_createsprite 0x08572700, ANIM_TARGET, 2, 0, 5, 20, -24, 14, 2
	ba_createsprite 0x08572700, ANIM_TARGET, 2, -5, 0, -20, -24, 14, 2
	ba_waitforvisualfinish
	ba_end
Move_OVERHEAT:
	ba_loadspritegfx 0x272D
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_DEF_PARTNER
	ba_setalpha 12, 18
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 1, 0, 5, 28
	ba_waitforvisualfinish
	ba_createvisualtask sub_08118494, 5
	ba_waitforvisualfinish
	ba_createvisualtask sub_081184F0, 5, 0, 1
	ba_delay 1
	ba_createvisualtask sub_08118628, 5, 0
	ba_delay 1
	ba_playsewithpan 0x00AB, SOUND_PAN_ATTACKER
	ba_createvisualtask sub_081184F0, 5, 1, 0
	ba_delay 1
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 2, 1, 0, 13, 28
	ba_createvisualtask AnimTask_ShakeMon, 5, 0, 2, 0, 15, 1
	ba_waitforvisualfinish
	ba_playsewithpan 0x0091, SOUND_PAN_ATTACKER
	ba_createsprite 0x08572B94, ANIM_ATTACKER, 2, 1, 0, 30, 25, -20
	ba_createsprite 0x08572B94, ANIM_ATTACKER, 2, 1, 32, 30, 25, -20
	ba_createsprite 0x08572B94, ANIM_ATTACKER, 2, 1, 64, 30, 25, -20
	ba_createsprite 0x08572B94, ANIM_ATTACKER, 2, 1, 96, 30, 25, -20
	ba_createsprite 0x08572B94, ANIM_ATTACKER, 2, 1, 128, 30, 25, -20
	ba_createsprite 0x08572B94, ANIM_ATTACKER, 66, 1, 160, 30, 25, -20
	ba_createsprite 0x08572B94, ANIM_ATTACKER, 66, 1, 192, 30, 25, -20
	ba_createsprite 0x08572B94, ANIM_ATTACKER, 66, 1, 224, 30, 25, -20
	ba_delay 5
	ba_createsprite 0x08572B94, ANIM_ATTACKER, 2, 1, 0, 30, 25, 0
	ba_createsprite 0x08572B94, ANIM_ATTACKER, 2, 1, 32, 30, 25, 0
	ba_createsprite 0x08572B94, ANIM_ATTACKER, 2, 1, 64, 30, 25, 0
	ba_createsprite 0x08572B94, ANIM_ATTACKER, 2, 1, 96, 30, 25, 0
	ba_createsprite 0x08572B94, ANIM_ATTACKER, 2, 1, 128, 30, 25, 0
	ba_createsprite 0x08572B94, ANIM_ATTACKER, 66, 1, 160, 30, 25, 0
	ba_createsprite 0x08572B94, ANIM_ATTACKER, 66, 1, 192, 30, 25, 0
	ba_createsprite 0x08572B94, ANIM_ATTACKER, 66, 1, 224, 30, 25, 0
	ba_delay 5
	ba_createsprite 0x08572B94, ANIM_ATTACKER, 2, 1, 0, 30, 25, 10
	ba_createsprite 0x08572B94, ANIM_ATTACKER, 2, 1, 32, 30, 25, 10
	ba_createsprite 0x08572B94, ANIM_ATTACKER, 2, 1, 64, 30, 25, 10
	ba_createsprite 0x08572B94, ANIM_ATTACKER, 2, 1, 96, 30, 25, 10
	ba_createsprite 0x08572B94, ANIM_ATTACKER, 2, 1, 128, 30, 25, 10
	ba_createsprite 0x08572B94, ANIM_ATTACKER, 66, 1, 160, 30, 25, 10
	ba_createsprite 0x08572B94, ANIM_ATTACKER, 66, 1, 192, 30, 25, 10
	ba_createsprite 0x08572B94, ANIM_ATTACKER, 66, 1, 224, 30, 25, 10
	ba_delay 5
	ba_waitforvisualfinish
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 3, -5, 3, 1, 0
	ba_playsewithpan 0x0093, SOUND_PAN_TARGET
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 10, 0, 25, 1
	ba_delay 6
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 3, 8, -5, 1, 0
	ba_playsewithpan 0x0093, SOUND_PAN_TARGET
	ba_delay 8
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 3, 10, 10, 1, 0
	ba_playsewithpan 0x0093, SOUND_PAN_TARGET
	ba_delay 8
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 3, 0, 0, 1, 0
	ba_playsewithpan 0x0093, SOUND_PAN_TARGET
	ba_createvisualtask sub_08118628, 5, 1
	ba_delay 1
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 2, 0xFFFF, 0, 13, 0x4A52
	ba_createvisualtask AnimTask_ShakeMon, 5, 0, 3, 0, 15, 1
	ba_waitforvisualfinish
	ba_createvisualtask sub_0811858C, 5, 0, 1
	ba_delay 1
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 1, 5, 0, 28
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_waitforvisualfinish
	ba_delay 15
	ba_createvisualtask sub_0811858C, 5, 1, 0
	ba_delay 1
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 2, 0, 13, 0, 0x4A52
	ba_waitforvisualfinish
	ba_createvisualtask sub_081184C0, 5
	ba_waitforvisualfinish
	ba_end
Move_HYDRO_CANNON:
	ba_loadspritegfx 0x27A5
	ba_loadspritegfx 0x27A4
	ba_monbg ANIM_DEF_PARTNER
	ba_setalpha 12, 8
	ba_playsewithpan 0x00A3, SOUND_PAN_ATTACKER
	ba_createsprite 0x08570DA4, ANIM_TARGET, 2
	ba_delay 10
	ba_createvisualtask sub_08116760, 2, 257, 257, 257
	ba_delay 30
	ba_panse_1B 0x00A4, SOUND_PAN_ATTACKER, SOUND_PAN_TARGET, 2, 0
	ba_call BattleAnimScript_08284FD7
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 10, 0, 40, 1
	ba_createsprite gBattleAnimSpriteTemplate_WaterHit, ANIM_TARGET, 2, 0, 0, 1, 0
	ba_call BattleAnimScript_08284FD7
	ba_createsprite gBattleAnimSpriteTemplate_WaterHit, ANIM_TARGET, 2, 0, 0, 1, 0
	ba_call BattleAnimScript_08284FD7
	ba_createsprite gBattleAnimSpriteTemplate_WaterHit, ANIM_TARGET, 2, 0, 0, 1, 0
	ba_call BattleAnimScript_08284FD7
	ba_createsprite gBattleAnimSpriteTemplate_WaterHit, ANIM_TARGET, 2, 0, 0, 1, 0
	ba_call BattleAnimScript_08284FD7
	ba_createsprite gBattleAnimSpriteTemplate_WaterHit, ANIM_TARGET, 2, 0, 0, 1, 0
	ba_call BattleAnimScript_08284FD7
	ba_createsprite gBattleAnimSpriteTemplate_WaterHit, ANIM_TARGET, 2, 0, 0, 1, 0
	ba_waitforvisualfinish
	ba_createvisualtask sub_08116760, 2, 257, 257, 257
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
BattleAnimScript_08284FD7: @ 0x08284FD7
	ba_createsprite 0x08570DBC, ANIM_TARGET, 2, 10, -10, 0, 0, 15, 257
	ba_delay 1
	ba_createsprite 0x08570DBC, ANIM_TARGET, 2, 10, -10, 0, 0, 15, 257
	ba_delay 1
	ba_createsprite 0x08570DBC, ANIM_TARGET, 2, 10, -10, 0, 0, 15, 257
	ba_delay 1
	ba_createsprite 0x08570DBC, ANIM_TARGET, 2, 10, -10, 0, 0, 15, 257
	ba_delay 1
	ba_createsprite 0x08570DBC, ANIM_TARGET, 2, 10, -10, 0, 0, 15, 257
	ba_return
Move_ASTONISH:
	ba_loadspritegfx 0x2821
	ba_playsewithpan 0x00DE, SOUND_PAN_ATTACKER
	ba_createsprite 0x0855A958, ANIM_ATTACKER, 2, 4, 6
	ba_delay 25
	ba_createsprite 0x085720C8, ANIM_TARGET, 5, 0, 1
	ba_playsewithpan 0x00CD, SOUND_PAN_TARGET
	ba_createsprite 0x085720C8, ANIM_TARGET, 5, 1, 1
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 4, 0, 5, 1
	ba_createvisualtask sub_08106870, 3
	ba_waitforvisualfinish
	ba_end
Move_SEISMIC_TOSS:
	ba_loadspritegfx 0x2797
	ba_loadspritegfx 0x274A
	ba_setarg 0x07, 0
	ba_monbg ANIM_DEF_PARTNER
	ba_setalpha 12, 8
	ba_waitforvisualfinish
	ba_createvisualtask AnimTask_GetSeismicTossDamageLevel, 3
	ba_delay 1
	ba_fadetobg BG_IN_AIR
	ba_waitbgfadeout
	ba_createvisualtask sub_08111D7C, 3
	ba_playsewithpan 0x00EE, 0x00
	ba_waitbgfadein
	ba_waitforvisualfinish
	ba_createvisualtask sub_08111DE0, 3
	ba_jumpargeq 0x07, 0, BattleAnimScript_082850DA
	ba_jumpargeq 0x07, 1, BattleAnimScript_082850EB
	ba_jumpargeq 0x07, 2, BattleAnimScript_08285103
BattleAnimScript_082850CF: @ 0x082850CF
	ba_restorebg
	ba_waitbgfadeout
	ba_setarg 0x07, 0x0FFF
	ba_waitbgfadein
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
BattleAnimScript_082850DA: @ 0x082850DA
	ba_call BattleAnimScript_08285122
	ba_delay 16
	ba_call BattleAnimScript_08285183
	ba_goto BattleAnimScript_082850CF
BattleAnimScript_082850EB: @ 0x082850EB
	ba_call BattleAnimScript_08285122
	ba_delay 14
	ba_call BattleAnimScript_08285183
	ba_delay 14
	ba_call BattleAnimScript_08285122
	ba_goto BattleAnimScript_082850CF
BattleAnimScript_08285103: @ 0x08285103
	ba_call BattleAnimScript_08285183
	ba_delay 10
	ba_call BattleAnimScript_08285122
	ba_delay 10
	ba_call BattleAnimScript_08285183
	ba_delay 10
	ba_call BattleAnimScript_08285122
	ba_goto BattleAnimScript_082850CF
BattleAnimScript_08285122: @ 0x08285122
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 3, -10, -8, 1, 1
	ba_playsewithpan 0x00D6, SOUND_PAN_TARGET
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 0, 3, 5, 1
	ba_createsprite 0x08572894, ANIM_TARGET, 2, -12, 27, 2, 3
	ba_createsprite 0x08572894, ANIM_TARGET, 2, 8, 28, 3, 4
	ba_createsprite 0x08572894, ANIM_TARGET, 2, -4, 30, 2, 3
	ba_createsprite 0x08572894, ANIM_TARGET, 2, 12, 25, 4, 4
	ba_return
BattleAnimScript_08285183: @ 0x08285183
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 3, 10, -8, 1, 1
	ba_playsewithpan 0x0083, SOUND_PAN_TARGET
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 0, 3, 5, 1
	ba_createsprite 0x08572894, ANIM_TARGET, 2, -12, 32, 3, 4
	ba_createsprite 0x08572894, ANIM_TARGET, 2, 8, 31, 2, 2
	ba_createsprite 0x08572894, ANIM_TARGET, 2, -4, 28, 2, 3
	ba_createsprite 0x08572894, ANIM_TARGET, 2, 12, 30, 4, 3
	ba_return
Move_MAGIC_COAT:
	ba_loadspritegfx 0x27BA
	ba_setalpha 0, 16
	ba_waitplaysewithpan 0x00D0, SOUND_PAN_ATTACKER, 15
	ba_createsprite 0x085721A4, ANIM_ATTACKER, 3, 40, 0, 0x27BA
	ba_waitforvisualfinish
	ba_delay 1
	ba_blendoff
	ba_end
Move_WATER_PULSE:
	ba_loadspritegfx 0x27AB
	ba_loadspritegfx 0x2830
	ba_monbg ANIM_TARGET
	ba_monbgprio_28 ANIM_TARGET
	ba_playsewithpan 0x007E, SOUND_PAN_ATTACKER
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 0, 0, 7, 0x7320
	ba_delay 10
	ba_createsprite 0x08570EDC, ANIM_ATTACKER, 66, 100, 100, 8, 1, 20, 40, 0
	ba_createsprite 0x08570EDC, ANIM_ATTACKER, 66, 20, 100, 16, 2, 10, 35, 1
	ba_createsprite 0x08570EDC, ANIM_ATTACKER, 66, 200, 80, 8, 1, 40, 20, 0
	ba_createsprite 0x08570EDC, ANIM_ATTACKER, 66, 80, 60, 10, 3, 20, 50, 0
	ba_createsprite 0x08570EDC, ANIM_ATTACKER, 66, 140, 100, 16, 1, 20, 30, 1
	ba_playsewithpan 0x007E, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_playsewithpan 0x00C7, SOUND_PAN_ATTACKER
	ba_createsprite gWaterPulseRingSpriteTemplate, ANIM_TARGET, 2, 0, 0, 40, 15
	ba_delay 5
	ba_playsewithpan 0x00C7, SOUND_PAN_ATTACKER
	ba_createsprite gWaterPulseRingSpriteTemplate, ANIM_TARGET, 2, 0, 0, 40, 15
	ba_delay 5
	ba_playsewithpan 0x00C7, SOUND_PAN_ATTACKER
	ba_createsprite gWaterPulseRingSpriteTemplate, ANIM_TARGET, 2, 0, 0, 40, 15
	ba_delay 13
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 0, 8, 18, 1
	ba_waitforvisualfinish
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 1, 7, 0, 0x7320
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_end
Move_PSYCHO_BOOST:
	ba_loadspritegfx 0x27E4
	ba_monbg ANIM_ATK_PARTNER
	ba_fadetobg BG_PSYCHIC
	ba_waitbgfadeout
	ba_createvisualtask sub_0815A504, 5
	ba_waitbgfadein
	ba_delay 6
	ba_createvisualtask sub_08116254, 2, 1, 2, 8, 0, 10, 0
	ba_delay 0
	ba_monbgprio_28 ANIM_ATTACKER
	ba_setalpha 8, 8
	ba_delay 10
	ba_createvisualtask AnimTask_ShakeMon, 2, 0, 3, 0, 240, 0
	ba_loopsewithpan 0x00C8, SOUND_PAN_ATTACKER, 14, 10
	ba_createsprite 0x08572504, ANIM_ATTACKER, 2
	ba_delay 110
	ba_loopsewithpan 0x00C8, SOUND_PAN_ATTACKER, 7, 10
	ba_waitforvisualfinish
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, -8, 1, 24, 1
	ba_playsewithpan 0x00C0, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_ATK_PARTNER
	ba_blendoff
	ba_call BattleAnimScript_08286264
	ba_end
Move_KNOCK_OFF:
	ba_loadspritegfx 0x2825
	ba_loadspritegfx 0x2797
	ba_createsprite 0x0855A958, ANIM_ATTACKER, 2, 4, 6
	ba_delay 4
	ba_playsewithpan 0x007A, SOUND_PAN_TARGET
	ba_createsprite 0x085AD78C, ANIM_TARGET, 2, -16, -16
	ba_delay 8
	ba_createsprite 0x08572E70, ANIM_ATTACKER, 2, 31, 5, 1, 0x7FFF, 10, 0, 0
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 3, 0, 0, 1, 2
	ba_playsewithpan 0x008B, SOUND_PAN_TARGET
	ba_createsprite 0x0855A9A0, ANIM_ATTACKER, 2, 1, -12, 10, 0, 3
	ba_createsprite 0x0855A988, ANIM_ATTACKER, 2, 0, 0, 5
	ba_delay 3
	ba_createvisualtask AnimTask_ShakeMonInPlace, 2, 1, 0, 3, 6, 1
	ba_delay 5
	ba_createsprite 0x0855A988, ANIM_ATTACKER, 2, 1, 0, 6
	ba_delay 10
	ba_waitforvisualfinish
	ba_end
Move_DOOM_DESIRE:
	ba_createvisualtask sub_081151B0, 2
	ba_delay 1
	ba_monbg ANIM_ATK_PARTNER
	ba_createvisualtask AnimTask_SetGreyscaleOrOriginalPal, 5, 1, 0
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 1, 0, 4, 0
	ba_waitforvisualfinish
	ba_setalpha 8, 8
	ba_playsewithpan 0x00BD, SOUND_PAN_ATTACKER
	ba_createvisualtask AnimTask_ScaleMonAndRestore, 5, -4, -4, 15, 0, 1
	ba_waitforvisualfinish
	ba_delay 20
	ba_createvisualtask AnimTask_SetGreyscaleOrOriginalPal, 5, 1, 1
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 1, 4, 0, 0
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_ATK_PARTNER
	ba_blendoff
	ba_end
Move_SKY_UPPERCUT:
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_DEF_PARTNER
	ba_monbgprio_28 ANIM_TARGET
	ba_fadetobg BG_IN_AIR
	ba_waitbgfadeout
	ba_playsewithpan 0x00EE, SOUND_PAN_ATTACKER
	ba_createvisualtask sub_0810E30C, 5, 55
	ba_waitbgfadein
	ba_setalpha 12, 8
	ba_delay 38
	ba_createsprite 0x0855A9A0, ANIM_ATTACKER, 2, 0, 28, 0, 0, 5
	ba_delay 4
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 4, 0, 6, 1
	ba_playsewithpan 0x007B, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 3, -28, 28, 1, 1
	ba_delay 1
	ba_playsewithpan 0x007B, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 3, -15, 8, 1, 1
	ba_playsewithpan 0x007B, SOUND_PAN_TARGET
	ba_delay 1
	ba_playsewithpan 0x007B, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 3, -5, -12, 1, 1
	ba_delay 1
	ba_playsewithpan 0x007B, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 3, 0, -32, 1, 1
	ba_delay 1
	ba_playsewithpan 0x007B, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 3, 5, -52, 1, 1
	ba_createsprite 0x0855A9A0, ANIM_ATTACKER, 2, 1, -26, 16, 1, 4
	ba_delay 4
	ba_createvisualtask AnimTask_ShakeMonInPlace, 2, 1, 0, 3, 6, 1
	ba_delay 30
	ba_createsprite 0x0855A988, ANIM_ATTACKER, 2, 0, 0, 6
	ba_delay 4
	ba_createsprite 0x0855A988, ANIM_ATTACKER, 2, 1, 0, 6
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_restorebg
	ba_waitbgfadeout
	ba_setarg 0x07, 0xFFFF
	ba_waitbgfadein
	ba_end
Move_SECRET_POWER:
	ba_createvisualtask AnimTask_GetBattleTerrain, 5
	ba_jumpargeq 0x00, 0, BattleAnimScript_0827CEBB
	ba_jumpargeq 0x00, 1, BattleAnimScript_0828570A
	ba_jumpargeq 0x00, 2, BattleAnimScript_08283B94
	ba_jumpargeq 0x00, 3, BattleAnimScript_082795AD
	ba_jumpargeq 0x00, 4, BattleAnimScript_08280351
	ba_jumpargeq 0x00, 5, BattleAnimScript_0827A6FF
	ba_jumpargeq 0x00, 6, BattleAnimScript_0827A4EB
	ba_jumpargeq 0x00, 7, BattleAnimScript_0827EAE1
	ba_jumpargeq 0x00, 8, BattleAnimScript_08277DEE
	ba_goto BattleAnimScript_08279495
Move_TWISTER:
	ba_loadspritegfx 0x274F
	ba_loadspritegfx 0x2797
	ba_loadspritegfx 0x274A
	ba_monbg ANIM_DEF_PARTNER
	ba_monbgprio_28 ANIM_TARGET
	ba_playsewithpan 0x00EB, SOUND_PAN_TARGET
	ba_createsprite 0x0856DF8C, ANIM_TARGET, 2, 120, 70, 5, 70, 30
	ba_delay 1
	ba_createsprite 0x0856DF8C, ANIM_TARGET, 2, 115, 55, 6, 60, 25
	ba_delay 1
	ba_createsprite 0x0856DF8C, ANIM_TARGET, 2, 115, 60, 7, 60, 30
	ba_createsprite 0x0856DF8C, ANIM_TARGET, 2, 115, 55, 10, 60, 30
	ba_delay 3
	ba_createsprite 0x085728AC, ANIM_TARGET, 2, 100, 50, 4, 50, 26
	ba_delay 1
	ba_createsprite 0x0856DF8C, ANIM_TARGET, 2, 105, 25, 8, 60, 20
	ba_delay 1
	ba_createsprite 0x0856DF8C, ANIM_TARGET, 2, 115, 40, 10, 48, 30
	ba_delay 3
	ba_createsprite 0x085728AC, ANIM_TARGET, 2, 120, 30, 6, 45, 25
	ba_createsprite 0x0856DF8C, ANIM_TARGET, 2, 115, 35, 10, 60, 30
	ba_delay 3
	ba_createsprite 0x085728AC, ANIM_TARGET, 2, 105, 20, 8, 40, 0
	ba_delay 3
	ba_createsprite 0x0856DF8C, ANIM_TARGET, 2, 20, 255, 15, 32, 0
	ba_createsprite 0x0856DF8C, ANIM_TARGET, 2, 110, 10, 8, 32, 20
	ba_waitforvisualfinish
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 3, -32, -16, 1, 3
	ba_playsewithpan 0x008B, SOUND_PAN_TARGET
	ba_createvisualtask AnimTask_ShakeMonInPlace, 2, 1, 3, 0, 12, 1
	ba_createvisualtask AnimTask_ShakeMonInPlace, 2, 3, 3, 0, 12, 1
	ba_delay 4
	ba_createsprite gBattleAnimSpriteTemplate_WaterHitRandomOffset, ANIM_TARGET, 3, 1, 3
	ba_playsewithpan 0x008B, SOUND_PAN_TARGET
	ba_delay 4
	ba_createsprite gBattleAnimSpriteTemplate_WaterHitRandomOffset, ANIM_TARGET, 3, 1, 3
	ba_playsewithpan 0x008B, SOUND_PAN_TARGET
	ba_delay 4
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 3, 32, 20, 1, 3
	ba_playsewithpan 0x008B, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
Move_MAGICAL_LEAF:
BattleAnimScript_0828570A: @ 0x0828570A
	ba_loadspritegfx 0x274F
	ba_loadspritegfx 0x27B0
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_DEF_PARTNER
	ba_setalpha 12, 8
	ba_delay 1
	ba_loopsewithpan 0x00A9, SOUND_PAN_ATTACKER, 10, 5
	ba_createvisualtask sub_08101014, 5
	ba_createsprite 0x0856DF74, ANIM_ATTACKER, 2, -3, -2, 10
	ba_delay 2
	ba_createsprite 0x0856DF74, ANIM_ATTACKER, 2, 0xFFFF, 0xFFFF, 15
	ba_delay 2
	ba_createsprite 0x0856DF74, ANIM_ATTACKER, 2, -4, -4, 7
	ba_delay 2
	ba_createsprite 0x0856DF74, ANIM_ATTACKER, 2, 3, -3, 11
	ba_delay 2
	ba_createsprite 0x0856DF74, ANIM_ATTACKER, 2, 0xFFFF, -6, 8
	ba_delay 2
	ba_createsprite 0x0856DF74, ANIM_ATTACKER, 2, 2, 0xFFFF, 12
	ba_delay 2
	ba_createsprite 0x0856DF74, ANIM_ATTACKER, 2, -3, -4, 13
	ba_delay 2
	ba_createsprite 0x0856DF74, ANIM_ATTACKER, 2, 4, -5, 7
	ba_delay 2
	ba_createsprite 0x0856DF74, ANIM_ATTACKER, 2, 2, -6, 11
	ba_delay 2
	ba_createsprite 0x0856DF74, ANIM_ATTACKER, 2, -3, -5, 8
	ba_delay 60
	ba_playsewithpan 0x00A0, SOUND_PAN_ATTACKER
	ba_createsprite 0x0856DFBC, ANIM_TARGET, 3, 20, -10, 20, 0, 32, 20, 0
	ba_createsprite 0x0856DFBC, ANIM_TARGET, 3, 20, -10, 20, 0, 32, -20, 0
	ba_delay 30
	ba_playsewithpan 0x0088, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 4, -10, -4, 1, 2
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 4, 10, 4, 1, 2
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 2, 0, 8, 1
	ba_delay 20
	ba_setarg 0x07, 0xFFFF
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
Move_ICE_BALL:
	ba_loadspritegfx 0x273B
	ba_loadspritegfx 0x279D
	ba_createvisualtask AnimTask_GetRolloutCounter, 5, 0
	ba_jumpargeq 0x00, 4, BattleAnimScript_082858A2
BattleAnimScript_08285842: @ 0x08285842
	ba_playsewithpan 0x0089, SOUND_PAN_ATTACKER
	ba_createsprite 0x085719C8, ANIM_TARGET, 2, 15, 0, -12, -16, 30, -40
	ba_delay 28
	ba_playsewithpan 0x00C6, SOUND_PAN_TARGET
	ba_createvisualtask AnimTask_GetRolloutCounter, 5, 0
	ba_jumpargeq 0x00, 0, BattleAnimScript_082858B3
	ba_jumpargeq 0x00, 1, BattleAnimScript_082858E2
	ba_jumpargeq 0x00, 2, BattleAnimScript_0828591B
	ba_jumpargeq 0x00, 3, BattleAnimScript_0828595E
	ba_jumpargeq 0x00, 4, BattleAnimScript_082859A6
BattleAnimScript_08285890: @ 0x08285890
	ba_createvisualtask AnimTask_GetRolloutCounter, 5, 0
	ba_jumpargeq 0x00, 4, BattleAnimScript_082858A9
BattleAnimScript_082858A1: @ 0x082858A1
	ba_end
BattleAnimScript_082858A2: @ 0x082858A2
	ba_fadetobg BG_ICE
	ba_goto BattleAnimScript_08285842
BattleAnimScript_082858A9: @ 0x082858A9
	ba_waitbgfadein
	ba_delay 45
	ba_restorebg
	ba_waitbgfadein
	ba_goto BattleAnimScript_082858A1
BattleAnimScript_082858B3: @ 0x082858B3
	ba_createvisualtask sub_080D5C0C, 2, 0, 1, 8, 1, 0
	ba_call BattleAnimScript_082859EE
	ba_call BattleAnimScript_082859EE
	ba_call BattleAnimScript_082859EE
	ba_call BattleAnimScript_082859EE
	ba_call BattleAnimScript_082859EE
	ba_goto BattleAnimScript_08285890
BattleAnimScript_082858E2: @ 0x082858E2
	ba_createvisualtask sub_080D5C0C, 2, 0, 1, 10, 1, 0
	ba_call BattleAnimScript_082859EE
	ba_call BattleAnimScript_082859EE
	ba_call BattleAnimScript_082859EE
	ba_call BattleAnimScript_082859EE
	ba_call BattleAnimScript_082859EE
	ba_call BattleAnimScript_082859EE
	ba_call BattleAnimScript_082859EE
	ba_goto BattleAnimScript_08285890
BattleAnimScript_0828591B: @ 0x0828591B
	ba_createvisualtask sub_080D5C0C, 2, 0, 1, 14, 1, 0
	ba_call BattleAnimScript_082859EE
	ba_call BattleAnimScript_082859EE
	ba_call BattleAnimScript_082859EE
	ba_call BattleAnimScript_082859EE
	ba_call BattleAnimScript_082859EE
	ba_call BattleAnimScript_082859EE
	ba_call BattleAnimScript_082859EE
	ba_call BattleAnimScript_082859EE
	ba_call BattleAnimScript_082859EE
	ba_goto BattleAnimScript_08285890
BattleAnimScript_0828595E: @ 0x0828595E
	ba_createvisualtask sub_080D5C0C, 2, 0, 1, 18, 1, 0
	ba_call BattleAnimScript_082859EE
	ba_call BattleAnimScript_082859EE
	ba_call BattleAnimScript_082859EE
	ba_call BattleAnimScript_082859EE
	ba_call BattleAnimScript_082859EE
	ba_call BattleAnimScript_082859EE
	ba_call BattleAnimScript_082859EE
	ba_call BattleAnimScript_082859EE
	ba_call BattleAnimScript_082859EE
	ba_call BattleAnimScript_082859EE
	ba_goto BattleAnimScript_08285890
BattleAnimScript_082859A6: @ 0x082859A6
	ba_createvisualtask sub_080D5C0C, 2, 0, 1, 30, 1, 0
	ba_call BattleAnimScript_082859EE
	ba_call BattleAnimScript_082859EE
	ba_call BattleAnimScript_082859EE
	ba_call BattleAnimScript_082859EE
	ba_call BattleAnimScript_082859EE
	ba_call BattleAnimScript_082859EE
	ba_call BattleAnimScript_082859EE
	ba_call BattleAnimScript_082859EE
	ba_call BattleAnimScript_082859EE
	ba_call BattleAnimScript_082859EE
	ba_goto BattleAnimScript_08285890
BattleAnimScript_082859EE: @ 0x082859EE
	ba_createsprite 0x085719E0, ANIM_TARGET, 4, -12, -16
	ba_return
Move_WEATHER_BALL:
	ba_loadspritegfx 0x282B
	ba_createsprite 0x0855A970, ANIM_ATTACKER, 2, 8, 1, 0
	ba_delay 8
	ba_playsewithpan 0x00C1, SOUND_PAN_ATTACKER
	ba_createsprite 0x0851757C, ANIM_ATTACKER, 2
	ba_waitforvisualfinish
	ba_delay 15
	ba_playsewithpan 0x00D1, 0x00
	ba_createsprite 0x08572E70, ANIM_ATTACKER, 2, 31, 5, 1, 0x7FFF, 10, 0, 0
	ba_waitforvisualfinish
	ba_createvisualtask AnimTask_GetWeather, 2
	ba_delay 1
	ba_jumpargeq 0x07, 0, BattleAnimScript_08285A65
	ba_jumpargeq 0x07, 1, BattleAnimScript_08285AA2
	ba_jumpargeq 0x07, 2, BattleAnimScript_08285B06
	ba_jumpargeq 0x07, 3, BattleAnimScript_08285B6A
	ba_jumpargeq 0x07, 4, BattleAnimScript_08285C0A
BattleAnimScript_08285A65: @ 0x08285A65
	ba_loadspritegfx 0x2797
	ba_createsprite 0x08517594, ANIM_TARGET, 2, -30, -100, 25, 1, 0, 0
	ba_waitforvisualfinish
	ba_playsewithpan 0x008D, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 4, -10, 0, 1, 2
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 0, 3, 8, 1
	ba_waitforvisualfinish
	ba_end
BattleAnimScript_08285AA2: @ 0x08285AA2
	ba_loadspritegfx 0x272D
	ba_createsprite 0x08571180, ANIM_TARGET, 2, -30, -100, 25, 1, 40, 10
	ba_playsewithpan 0x0090, SOUND_PAN_TARGET
	ba_delay 10
	ba_createsprite 0x08571180, ANIM_TARGET, 2, -30, -100, 25, 1, -40, 20
	ba_playsewithpan 0x0090, SOUND_PAN_TARGET
	ba_delay 10
	ba_createsprite 0x08571180, ANIM_TARGET, 2, -30, -100, 25, 1, 0, 0
	ba_playsewithpan 0x0090, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_playsewithpan 0x0091, SOUND_PAN_TARGET
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 0, 3, 8, 1
	ba_waitforvisualfinish
	ba_end
BattleAnimScript_08285B06: @ 0x08285B06
	ba_loadspritegfx 0x27AB
	ba_createsprite 0x08570F0C, ANIM_TARGET, 2, -30, -100, 25, 1, 50, 10
	ba_playsewithpan 0x008E, SOUND_PAN_TARGET
	ba_delay 8
	ba_createsprite 0x08570F0C, ANIM_TARGET, 2, -30, -100, 25, 1, -20, 20
	ba_playsewithpan 0x008E, SOUND_PAN_TARGET
	ba_delay 13
	ba_createsprite 0x08570F0C, ANIM_TARGET, 2, -30, -100, 25, 1, 0, 0
	ba_playsewithpan 0x008E, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 0, 3, 8, 1
	ba_playsewithpan 0x00C7, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_end
BattleAnimScript_08285B6A: @ 0x08285B6A
	ba_loadspritegfx 0x274A
	ba_createsprite 0x085728C4, ANIM_TARGET, 2, -30, -100, 25, 1, 30, 0
	ba_playsewithpan 0x0083, SOUND_PAN_TARGET
	ba_delay 5
	ba_createsprite 0x085728C4, ANIM_TARGET, 2, -30, -100, 25, 1, -40, 20
	ba_playsewithpan 0x0083, SOUND_PAN_TARGET
	ba_delay 14
	ba_createsprite 0x085728C4, ANIM_TARGET, 2, -30, -100, 25, 1, 0, 0
	ba_playsewithpan 0x0083, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_playsewithpan 0x00D6, SOUND_PAN_TARGET
	ba_createsprite 0x08572894, ANIM_TARGET, 2, -12, 27, 2, 3
	ba_createsprite 0x08572894, ANIM_TARGET, 2, 8, 28, 3, 4
	ba_createsprite 0x08572894, ANIM_TARGET, 2, -4, 30, 2, 3
	ba_createsprite 0x08572894, ANIM_TARGET, 2, 12, 25, 4, 4
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 2, 0, 8, 1
	ba_waitforvisualfinish
	ba_end
BattleAnimScript_08285C0A: @ 0x08285C0A
	ba_loadspritegfx 0x2817
	ba_loadspritegfx 0x279D
	ba_createsprite 0x08571928, ANIM_TARGET, 2, -30, -100, 25, 25, -40, 20
	ba_playsewithpan 0x00F2, SOUND_PAN_TARGET
	ba_delay 10
	ba_createsprite 0x08571928, ANIM_TARGET, 2, -30, -100, 25, 25, 40, 0
	ba_playsewithpan 0x00F2, SOUND_PAN_TARGET
	ba_delay 10
	ba_createsprite 0x08571928, ANIM_TARGET, 2, -30, -100, 25, 25, 0, 0
	ba_playsewithpan 0x00F2, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 2, 0, 8, 1
	ba_playsewithpan 0x0089, SOUND_PAN_TARGET
	ba_call BattleAnimScript_08285CA7
	ba_waitforvisualfinish
	ba_end
Move_COUNT:
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_TARGET
	ba_setalpha 12, 8
	ba_playsewithpan 0x0086, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, 0, 0, 1, 2
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 3, 0, 6, 1
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_TARGET
	ba_blendoff
	ba_end
BattleAnimScript_08285CA7: @ 0x08285CA7
	ba_createsprite gBattleAnimSpriteTemplate_IceEffectParticle, ANIM_TARGET, 2, -10, -10, 0
	ba_playsewithpan 0x0089, SOUND_PAN_TARGET
	ba_delay 4
	ba_createsprite 0x08571764, ANIM_TARGET, 2, 10, 20, 0
	ba_playsewithpan 0x0089, SOUND_PAN_TARGET
	ba_delay 4
	ba_createsprite gBattleAnimSpriteTemplate_IceEffectParticle, ANIM_TARGET, 2, -5, 10, 0
	ba_playsewithpan 0x0089, SOUND_PAN_TARGET
	ba_delay 4
	ba_createsprite 0x08571764, ANIM_TARGET, 2, 17, -12, 0
	ba_playsewithpan 0x0089, SOUND_PAN_TARGET
	ba_delay 4
	ba_createsprite 0x08571764, ANIM_TARGET, 2, -15, 15, 0
	ba_playsewithpan 0x0089, SOUND_PAN_TARGET
	ba_delay 4
	ba_createsprite 0x08571764, ANIM_TARGET, 2, 0, 0, 0
	ba_playsewithpan 0x0089, SOUND_PAN_TARGET
	ba_delay 4
	ba_createsprite gBattleAnimSpriteTemplate_IceEffectParticle, ANIM_TARGET, 2, 20, 2, 0
	ba_playsewithpan 0x0089, SOUND_PAN_TARGET
	ba_return
BattleAnimScript_08285D2B: @ 0x08285D2B
	ba_createsprite gBattleAnimSpriteTemplate_IceEffectParticle, ANIM_TARGET, 2, -10, -10, 1
	ba_playsewithpan 0x0089, SOUND_PAN_TARGET
	ba_delay 4
	ba_createsprite 0x08571764, ANIM_TARGET, 2, 10, 20, 1
	ba_playsewithpan 0x0089, SOUND_PAN_TARGET
	ba_delay 4
	ba_createsprite gBattleAnimSpriteTemplate_IceEffectParticle, ANIM_TARGET, 2, -29, 0, 1
	ba_playsewithpan 0x0089, SOUND_PAN_TARGET
	ba_delay 4
	ba_createsprite 0x08571764, ANIM_TARGET, 2, 29, -20, 1
	ba_playsewithpan 0x0089, SOUND_PAN_TARGET
	ba_delay 4
	ba_createsprite gBattleAnimSpriteTemplate_IceEffectParticle, ANIM_TARGET, 2, -5, 10, 1
	ba_playsewithpan 0x0089, SOUND_PAN_TARGET
	ba_delay 4
	ba_createsprite 0x08571764, ANIM_TARGET, 2, 17, -12, 1
	ba_playsewithpan 0x0089, SOUND_PAN_TARGET
	ba_delay 4
	ba_createsprite gBattleAnimSpriteTemplate_IceEffectParticle, ANIM_TARGET, 2, -20, 0, 1
	ba_playsewithpan 0x0089, SOUND_PAN_TARGET
	ba_delay 4
	ba_createsprite 0x08571764, ANIM_TARGET, 2, -15, 15, 1
	ba_playsewithpan 0x0089, SOUND_PAN_TARGET
	ba_delay 4
	ba_createsprite 0x08571764, ANIM_TARGET, 2, 26, -5, 1
	ba_playsewithpan 0x0089, SOUND_PAN_TARGET
	ba_delay 4
	ba_createsprite 0x08571764, ANIM_TARGET, 2, 0, 0, 1
	ba_playsewithpan 0x0089, SOUND_PAN_TARGET
	ba_delay 4
	ba_createsprite gBattleAnimSpriteTemplate_IceEffectParticle, ANIM_TARGET, 2, 20, 2, 1
	ba_playsewithpan 0x0089, SOUND_PAN_TARGET
	ba_return
	ba_loopsewithpan 0x0089, SOUND_PAN_TARGET, 6, 4
	ba_createsprite 0x085717E8, ANIM_TARGET, 2, 0, 24, 0
	ba_delay 4
	ba_createsprite 0x085717E8, ANIM_TARGET, 2, 8, 24, 0
	ba_createsprite 0x085717E8, ANIM_TARGET, 2, -8, 24, 0
	ba_delay 4
	ba_createsprite 0x085717E8, ANIM_TARGET, 2, 16, 24, 0
	ba_createsprite 0x085717E8, ANIM_TARGET, 2, -16, 24, 0
	ba_delay 4
	ba_createsprite 0x085717E8, ANIM_TARGET, 2, 24, 24, 0
	ba_createsprite 0x085717E8, ANIM_TARGET, 2, -24, 24, 0
	ba_delay 4
	ba_createsprite 0x085717E8, ANIM_TARGET, 2, 32, 24, 0
	ba_createsprite 0x085717E8, ANIM_TARGET, 2, -32, 24, 0
	ba_return
BattleAnimScript_08285E7F: @ 0x08285E7F
	ba_loopsewithpan 0x0089, SOUND_PAN_TARGET, 6, 4
	ba_createsprite 0x085717E8, ANIM_TARGET, 2, 0, 24, 1
	ba_delay 4
	ba_createsprite 0x085717E8, ANIM_TARGET, 2, 8, 24, 1
	ba_createsprite 0x085717E8, ANIM_TARGET, 2, -8, 24, 1
	ba_delay 4
	ba_createsprite 0x085717E8, ANIM_TARGET, 2, 16, 24, 1
	ba_createsprite 0x085717E8, ANIM_TARGET, 2, -16, 24, 1
	ba_delay 4
	ba_createsprite 0x085717E8, ANIM_TARGET, 2, 24, 24, 1
	ba_createsprite 0x085717E8, ANIM_TARGET, 2, -24, 24, 1
	ba_delay 4
	ba_createsprite 0x085717E8, ANIM_TARGET, 2, 32, 24, 1
	ba_createsprite 0x085717E8, ANIM_TARGET, 2, -32, 24, 1
	ba_delay 4
	ba_createsprite 0x085717E8, ANIM_TARGET, 2, 40, 24, 1
	ba_createsprite 0x085717E8, ANIM_TARGET, 2, -40, 24, 1
	ba_delay 4
	ba_createsprite 0x085717E8, ANIM_TARGET, 2, 48, 24, 1
	ba_createsprite 0x085717E8, ANIM_TARGET, 2, -48, 24, 1
	ba_return
BattleAnimScript_08285F3B: @ 0x08285F3B
	ba_createsprite gHealingSparkleSpriteTemplate, ANIM_ATTACKER, 2, -15, 0, 0, 0, 32, 60
	ba_delay 8
	ba_createsprite gHealingSparkleSpriteTemplate, ANIM_ATTACKER, 2, 12, -5, 0, 0, 32, 60
	ba_delay 8
	ba_return
BattleAnimScript_08285F66: @ 0x08285F66
	ba_playsewithpan 0x00B3, SOUND_PAN_ATTACKER
	ba_createsprite gHealingBlueStarSpriteTemplate, ANIM_ATTACKER, 2, 0, -5, 0, 0
	ba_delay 7
	ba_createsprite gHealingBlueStarSpriteTemplate, ANIM_ATTACKER, 2, -15, 10, 0, 0
	ba_delay 7
	ba_createsprite gHealingBlueStarSpriteTemplate, ANIM_ATTACKER, 2, -15, -15, 0, 0
	ba_delay 7
	ba_createsprite gHealingBlueStarSpriteTemplate, ANIM_ATTACKER, 2, 10, -5, 0, 0
	ba_delay 7
	ba_return
BattleAnimScript_08285FAF: @ 0x08285FAF
	ba_playsewithpan 0x00B3, SOUND_PAN_TARGET
	ba_createsprite gHealingBlueStarSpriteTemplate, ANIM_TARGET, 2, 0, -5, 1, 0
	ba_delay 7
	ba_createsprite gHealingBlueStarSpriteTemplate, ANIM_TARGET, 2, -15, 10, 1, 0
	ba_delay 7
	ba_createsprite gHealingBlueStarSpriteTemplate, ANIM_TARGET, 2, -15, -15, 1, 0
	ba_delay 7
	ba_createsprite gHealingBlueStarSpriteTemplate, ANIM_TARGET, 2, 10, -5, 1, 0
	ba_delay 7
	ba_return
BattleAnimScript_08285FF8: @ 0x08285FF8
	ba_createsprite 0x08571E24, ANIM_TARGET, 2, 10, 10, 0
	ba_playsewithpan 0x0094, SOUND_PAN_TARGET
	ba_delay 6
	ba_createsprite 0x08571E24, ANIM_TARGET, 2, 20, -20, 0
	ba_playsewithpan 0x0094, SOUND_PAN_TARGET
	ba_delay 6
	ba_createsprite 0x08571E24, ANIM_TARGET, 2, -20, 15, 0
	ba_playsewithpan 0x0094, SOUND_PAN_TARGET
	ba_delay 6
	ba_createsprite 0x08571E24, ANIM_TARGET, 2, 0, 0, 0
	ba_playsewithpan 0x0094, SOUND_PAN_TARGET
	ba_delay 6
	ba_createsprite 0x08571E24, ANIM_TARGET, 2, -20, -20, 0
	ba_playsewithpan 0x0094, SOUND_PAN_TARGET
	ba_delay 6
	ba_createsprite 0x08571E24, ANIM_TARGET, 2, 16, -8, 0
	ba_playsewithpan 0x0094, SOUND_PAN_TARGET
	ba_return
BattleAnimScript_08286069: @ 0x08286069
	ba_createsprite 0x08571E3C, ANIM_ATTACKER, 2, 10, 10, 0
	ba_playsewithpan 0x007E, SOUND_PAN_TARGET
	ba_delay 6
	ba_createsprite 0x08571E3C, ANIM_ATTACKER, 2, 20, -20, 0
	ba_playsewithpan 0x007E, SOUND_PAN_TARGET
	ba_delay 6
	ba_createsprite 0x08571E3C, ANIM_ATTACKER, 2, -20, 15, 0
	ba_playsewithpan 0x007E, SOUND_PAN_TARGET
	ba_delay 6
	ba_createsprite 0x08571E3C, ANIM_ATTACKER, 2, 0, 0, 0
	ba_playsewithpan 0x007E, SOUND_PAN_TARGET
	ba_delay 6
	ba_createsprite 0x08571E3C, ANIM_ATTACKER, 2, -20, -20, 0
	ba_playsewithpan 0x007E, SOUND_PAN_TARGET
	ba_delay 6
	ba_createsprite 0x08571E3C, ANIM_ATTACKER, 2, 16, -8, 0
	ba_playsewithpan 0x007E, SOUND_PAN_TARGET
	ba_return
BattleAnimScript_082860DA: @ 0x082860DA
	ba_createsprite 0x08571E3C, ANIM_ATTACKER, 2, 10, 10, 1
	ba_playsewithpan 0x007E, SOUND_PAN_TARGET
	ba_delay 6
	ba_createsprite 0x08571E3C, ANIM_ATTACKER, 2, -28, -10, 1
	ba_playsewithpan 0x007E, SOUND_PAN_TARGET
	ba_delay 6
	ba_createsprite 0x08571E3C, ANIM_ATTACKER, 2, 20, -20, 1
	ba_playsewithpan 0x007E, SOUND_PAN_TARGET
	ba_delay 6
	ba_createsprite 0x08571E3C, ANIM_ATTACKER, 2, -20, 15, 1
	ba_playsewithpan 0x007E, SOUND_PAN_TARGET
	ba_delay 6
	ba_createsprite 0x08571E3C, ANIM_ATTACKER, 2, 0, 0, 1
	ba_playsewithpan 0x007E, SOUND_PAN_TARGET
	ba_delay 6
	ba_createsprite 0x08571E3C, ANIM_ATTACKER, 2, 27, 8, 1
	ba_playsewithpan 0x007E, SOUND_PAN_TARGET
	ba_delay 6
	ba_createsprite 0x08571E3C, ANIM_ATTACKER, 2, -20, -20, 1
	ba_playsewithpan 0x007E, SOUND_PAN_TARGET
	ba_delay 6
	ba_createsprite 0x08571E3C, ANIM_ATTACKER, 2, 16, -8, 1
	ba_playsewithpan 0x007E, SOUND_PAN_TARGET
	ba_return
BattleAnimScript_08286171: @ 0x08286171
	ba_playsewithpan 0x0077, SOUND_PAN_TARGET
	ba_createsprite 0x085713F4, ANIM_TARGET, 2, 5, 0, 5, 0
	ba_delay 2
	ba_createsprite 0x085713F4, ANIM_TARGET, 2, -5, 10, 5, 1
	ba_delay 2
	ba_createsprite 0x085713F4, ANIM_TARGET, 2, 15, 20, 5, 2
	ba_delay 2
	ba_createsprite 0x085713F4, ANIM_TARGET, 2, -15, -10, 5, 0
	ba_delay 2
	ba_createsprite 0x085713F4, ANIM_TARGET, 2, 25, 0, 5, 1
	ba_delay 2
	ba_createsprite 0x085713F4, ANIM_TARGET, 2, -8, 8, 5, 2
	ba_delay 2
	ba_createsprite 0x085713F4, ANIM_TARGET, 2, 2, -8, 5, 0
	ba_delay 2
	ba_createsprite 0x085713F4, ANIM_TARGET, 2, -20, 15, 5, 1
	ba_return
BattleAnimScript_082861FC: @ 0x082861FC
	ba_loopsewithpan 0x00B0, SOUND_PAN_TARGET, 13, 6
	ba_createsprite 0x08572E40, ANIM_TARGET, 2, 0, -15, 0, 3, 90
	ba_createsprite 0x08572E40, ANIM_TARGET, 2, 0, -15, 51, 3, 90
	ba_createsprite 0x08572E40, ANIM_TARGET, 2, 0, -15, 102, 3, 90
	ba_createsprite 0x08572E40, ANIM_TARGET, 2, 0, -15, 153, 3, 90
	ba_createsprite 0x08572E40, ANIM_TARGET, 2, 0, -15, 204, 3, 90
	ba_return
BattleAnimScript_08286258: @ 0x08286258
	ba_fadetobg BG_PSYCHIC
	ba_waitbgfadeout
	ba_createvisualtask sub_0815A440, 5
	ba_waitbgfadein
	ba_return
BattleAnimScript_08286264: @ 0x08286264
	ba_restorebg
	ba_waitbgfadeout
	ba_setarg 0x07, 0xFFFF
	ba_waitbgfadein
	ba_return
BattleAnimScript_0828626C: @ 0x0828626C
	ba_jumpifcontest BattleAnimScript_08286285
	ba_fadetobg BG_SKY
	ba_waitbgfadeout
	ba_createvisualtask sub_08117EB0, 5, 0xF700, 768, 1, 0xFFFF
BattleAnimScript_08286283: @ 0x08286283
	ba_waitbgfadein
	ba_return
BattleAnimScript_08286285: @ 0x08286285
	ba_fadetobg BG_SKY_CONTESTS
	ba_waitbgfadeout
	ba_createvisualtask sub_08117EB0, 5, 0x0900, 768, 0, 0xFFFF
	ba_goto BattleAnimScript_08286283
BattleAnimScript_0828629C: @ 0x0828629C
	ba_restorebg
	ba_waitbgfadeout
	ba_setarg 0x07, 0xFFFF
	ba_waitbgfadein
	ba_return
BattleAnimScript_082862A4: @ 0x082862A4
	ba_createvisualtask AnimTask_IsContest, 2
	ba_jumpargeq 0x07, 1, BattleAnimScript_082862C9
	ba_createvisualtask AnimTask_IsTargetPlayerSide, 2
	ba_jumpargeq 0x07, 0, BattleAnimScript_082862D7
	ba_goto BattleAnimScript_082862D0
BattleAnimScript_082862C7: @ 0x082862C7
	ba_waitbgfadein
BattleAnimScript_082862C8: @ 0x082862C8
	ba_return
BattleAnimScript_082862C9: @ 0x082862C9
	ba_fadetobg BG_SOLAR_BEAM_CONTESTS
	ba_goto BattleAnimScript_082862C7
BattleAnimScript_082862D0: @ 0x082862D0
	ba_fadetobg BG_SOLAR_BEAM_PLAYER
	ba_goto BattleAnimScript_082862C7
BattleAnimScript_082862D7: @ 0x082862D7
	ba_fadetobg BG_SOLAR_BEAM_OPPONENT
	ba_goto BattleAnimScript_082862C7
BattleAnimScript_082862DE: @ 0x082862DE
	ba_restorebg
	ba_waitbgfadein
	ba_return
Status_Poison:
	ba_loopsewithpan 0x0094, SOUND_PAN_TARGET, 13, 6
	ba_createvisualtask AnimTask_ShakeMon2, 2, 0, 1, 0, 18, 2
	ba_createvisualtask sub_08116254, 2, 2, 2, 2, 0, 12, 0x7C1E
	ba_end
Status_Confusion:
	ba_loadspritegfx 0x2759
	ba_call BattleAnimScript_082861FC
	ba_end
Status_Burn:
	ba_loadspritegfx 0x272D
	ba_playsewithpan 0x0090, SOUND_PAN_TARGET
	ba_call BattleAnimScript_0828632D
	ba_call BattleAnimScript_0828632D
	ba_call BattleAnimScript_0828632D
	ba_waitforvisualfinish
	ba_end
BattleAnimScript_0828632D: @ 0x0828632D
	ba_createsprite 0x085710E8, ANIM_TARGET, 2, -24, 24, 24, 24, 20, 1, 1
	ba_delay 4
	ba_return
Status_Infatuation:
	ba_loadspritegfx 0x27E2
	ba_playsewithpan 0x00D4, SOUND_PAN_ATTACKER
	ba_createsprite gCharmHeartSpriteTemplate, ANIM_ATTACKER, 3, 0, 20
	ba_delay 15
	ba_playsewithpan 0x00D4, SOUND_PAN_ATTACKER
	ba_createsprite gCharmHeartSpriteTemplate, ANIM_ATTACKER, 3, -20, 20
	ba_delay 15
	ba_playsewithpan 0x00D4, SOUND_PAN_ATTACKER
	ba_createsprite gCharmHeartSpriteTemplate, ANIM_ATTACKER, 3, 20, 20
	ba_end
Status_Sleep:
	ba_loadspritegfx 0x27F4
	ba_playsewithpan 0x00C5, SOUND_PAN_ATTACKER
	ba_createsprite gSleepZSpriteTemplate, ANIM_ATTACKER, 2, 4, -10, 16, 0, 0
	ba_delay 30
	ba_createsprite gSleepZSpriteTemplate, ANIM_ATTACKER, 2, 4, -10, 16, 0, 0
	ba_end
Status_Paralysis:
	ba_loadspritegfx 0x271B
	ba_createvisualtask AnimTask_ShakeMon2, 2, 0, 1, 0, 10, 1
	ba_call BattleAnimScript_08286171
	ba_end
Status_Freeze:
	ba_playsewithpan 0x0089, 0x00
	ba_loadspritegfx 0x271A
	ba_monbg ANIM_DEF_PARTNER
	ba_monbgprio_28 ANIM_TARGET
	ba_waitplaysewithpan 0x00F2, SOUND_PAN_TARGET, 17
	ba_createvisualtask sub_080A97BC, 2
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_end
Status_Curse:
	ba_loadspritegfx 0x27D8
	ba_monbg ANIM_DEF_PARTNER
	ba_playsewithpan 0x0079, SOUND_PAN_TARGET
	ba_createsprite 0x085729CC, ANIM_TARGET, 2
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 2, 0, 14, 1
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_end
Status_Nightmare:
	ba_loadspritegfx 0x27ED
	ba_monbg ANIM_DEF_PARTNER
	ba_playsewithpan 0x0079, SOUND_PAN_TARGET
	ba_createsprite 0x085729E4, ANIM_TARGET, 2
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 2, 0, 14, 1
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_end
General_CastformChange:
	ba_createvisualtask sub_0815BA54, 2
	ba_jumpargeq 0x07, 1, BattleAnimScript_08286451
	ba_goto BattleAnimScript_08286439
BattleAnimScript_08286439: @ 0x08286439
	ba_monbg ANIM_ATTACKER
	ba_playsewithpan 0x00CB, SOUND_PAN_ATTACKER
	ba_waitplaysewithpan 0x00CC, SOUND_PAN_ATTACKER, 48
	ba_createvisualtask sub_0815B70C, 2, 1
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_ATTACKER
	ba_end
BattleAnimScript_08286451: @ 0x08286451
	ba_createvisualtask sub_0815BA94, 2, 1
	ba_end
General_StatsChange:
	ba_createvisualtask AnimTask_StatsChange, 5
	ba_waitforvisualfinish
	ba_end
General_SubstituteFade:
	ba_monbg ANIM_ATTACKER
	ba_createvisualtask sub_08172B7C, 5
	ba_createvisualtask sub_08116E70, 10, 2, 0, 0, 16, 0x7FFF
	ba_waitforvisualfinish
	ba_delay 1
	ba_clearmonbg ANIM_ATTACKER
	ba_delay 2
	ba_blendoff
	ba_createvisualtask sub_08116E70, 10, 2, 0, 0, 0, 0x7FFF
	ba_createvisualtask sub_081729D4, 2, 1
	ba_end
General_SubstituteAppear:
	ba_createvisualtask AnimTask_MonToSubstitute, 2
	ba_end
General_PokeblockThrow:
	ba_createvisualtask sub_08173240, 2, 0
	ba_createvisualtask AnimTask_LoadPokeblockGfx, 2
	ba_delay 0
	ba_waitplaysewithpan 0x008F, SOUND_PAN_ATTACKER, 22
	ba_createsprite 0x085C63F4, ANIM_TARGET, 3, -18, 12, 0, 32
	ba_delay 50
	ba_loopsewithpan 0x00A7, SOUND_PAN_TARGET, 19, 2
	ba_createvisualtask AnimTask_SwayMon, 5, 1, 8, 1536, 2, 1
	ba_waitforvisualfinish
	ba_createvisualtask AnimTask_FreePokeblockGfx, 2
	ba_end
General_ItemKnockoff:
	ba_loadspritegfx 0x27F0
	ba_createsprite 0x0856E20C, ANIM_TARGET, 2
	ba_end
General_TurnTrap:
	ba_createvisualtask AnimTask_GetTrappedMoveAnimId, 5
	ba_jumpargeq 0x00, 1, BattleAnimScript_08286570
	ba_jumpargeq 0x00, 2, BattleAnimScript_08286595
	ba_jumpargeq 0x00, 3, BattleAnimScript_082865E9
	ba_jumpargeq 0x00, 4, BattleAnimScript_08286646
	ba_goto BattleAnimScript_08286528
BattleAnimScript_08286528: @ 0x08286528
	ba_loadspritegfx 0x27CA
	ba_loopsewithpan 0x009B, SOUND_PAN_TARGET, 6, 2
	ba_createsprite 0x0856E078, ANIM_TARGET, 4, 0, 16, 0, 1
	ba_delay 7
	ba_createsprite 0x0856E078, ANIM_TARGET, 2, 0, 8, 1, 1
	ba_delay 3
	ba_createvisualtask AnimTask_ShakeMon2, 2, 1, 2, 0, 8, 1
	ba_delay 20
	ba_setarg 0x07, 0xFFFF
	ba_playsewithpan 0x00AA, SOUND_PAN_TARGET
	ba_waitforvisualfinish
	ba_end
BattleAnimScript_08286570: @ 0x08286570
	ba_loadspritegfx 0x272D
	ba_playsewithpan 0x0096, SOUND_PAN_TARGET
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 0, 2, 30, 1
	ba_call BattleAnimScript_0827924B
	ba_call BattleAnimScript_0827924B
	ba_waitforvisualfinish
	ba_stopsound
	ba_end
BattleAnimScript_08286595: @ 0x08286595
	ba_loadspritegfx 0x27A5
	ba_monbg ANIM_DEF_PARTNER
	ba_monbgprio_28 ANIM_TARGET
	ba_setalpha 12, 8
	ba_delay 0
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 0, 4, 2, 0, 7, 0x5DA0
	ba_playsewithpan 0x00A5, SOUND_PAN_TARGET
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 0, 2, 30, 1
	ba_call BattleAnimScript_082804E2
	ba_call BattleAnimScript_082804E2
	ba_delay 12
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 0, 4, 2, 7, 0, 0x5DA0
	ba_waitforvisualfinish
	ba_stopsound
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_end
BattleAnimScript_082865E9: @ 0x082865E9
	ba_loadspritegfx 0x27A1
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_TARGET
	ba_setalpha 12, 8
	ba_playsewithpan 0x009C, SOUND_PAN_TARGET
	ba_createsprite 0x08572C7C, ANIM_ATTACKER, 2, -32, 0, 2, 819, 0, 10
	ba_createsprite 0x08572C7C, ANIM_ATTACKER, 2, 32, 0, 6, -819, 0, 10
	ba_delay 10
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, 0, 0, 1, 2
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 3, 0, 5, 1
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_TARGET
	ba_blendoff
	ba_waitforvisualfinish
	ba_end
BattleAnimScript_08286646: @ 0x08286646
	ba_loadspritegfx 0x275A
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 0, 4, 2, 0, 7, 563
	ba_createvisualtask AnimTask_ShakeMon, 5, 1, 0, 2, 30, 1
	ba_playsewithpan 0x00E6, SOUND_PAN_TARGET
	ba_call BattleAnimScript_0828373E
	ba_call BattleAnimScript_0828373E
	ba_delay 22
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 0, 4, 2, 7, 0, 563
	ba_waitforvisualfinish
	ba_stopsound
	ba_end
General_HeldItemEffect:
	ba_loadspritegfx 0x27DB
	ba_loadspritegfx 0x2741
	ba_delay 0
	ba_playsewithpan 0x0098, SOUND_PAN_ATTACKER
	ba_createvisualtask sub_080D5AB0, 2, 16, 128, 0, 2
	ba_waitforvisualfinish
	ba_playsewithpan 0x0098, SOUND_PAN_ATTACKER
	ba_createvisualtask sub_080D5AB0, 2, 16, 128, 0, 2
	ba_waitforvisualfinish
	ba_playsewithpan 0x0098, SOUND_PAN_ATTACKER
	ba_createvisualtask sub_080D5AB0, 2, 16, 128, 0, 2
	ba_waitforvisualfinish
	ba_playsewithpan 0x00E4, SOUND_PAN_ATTACKER
	ba_call BattleAnimScript_08285F3B
	ba_waitforvisualfinish
	ba_playsewithpan 0x0066, SOUND_PAN_ATTACKER
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 2, 3, 7, 0, 0x67F1
	ba_createsprite gThinRingExpandingSpriteTemplate, ANIM_ATTACKER, 3, 0, 0, 0, 0
	ba_waitforvisualfinish
	ba_end
General_SmokeballEscape:
	ba_loadspritegfx 0x2802
	ba_monbg ANIM_ATTACKER
	ba_setalpha 12, 4
	ba_delay 0
	ba_playsewithpan 0x000F, SOUND_PAN_TARGET
	ba_createsprite 0x085AD53C, ANIM_TARGET, 0, 0, 32, 28, 30
	ba_delay 4
	ba_playsewithpan 0x000F, SOUND_PAN_TARGET
	ba_createsprite 0x085AD53C, ANIM_ATTACKER, 127, 2, 12, 20, 30
	ba_delay 12
	ba_playsewithpan 0x000F, SOUND_PAN_TARGET
	ba_createsprite 0x085AD53C, ANIM_ATTACKER, 126, 2, -28, 4, 30
	ba_delay 12
	ba_playsewithpan 0x000F, SOUND_PAN_TARGET
	ba_createsprite 0x085AD53C, ANIM_ATTACKER, 124, 2, 14, -20, 30
	ba_delay 4
	ba_playsewithpan 0x000F, SOUND_PAN_TARGET
	ba_createvisualtask sub_08113F38, 2, 2
	ba_createsprite 0x085AD53C, ANIM_ATTACKER, 123, 3, 4, 4, 30
	ba_delay 14
	ba_playsewithpan 0x000F, SOUND_PAN_TARGET
	ba_createsprite 0x085AD53C, ANIM_ATTACKER, 122, 3, -14, 18, 46
	ba_delay 0
	ba_createsprite 0x085AD53C, ANIM_ATTACKER, 121, 3, 14, -14, 46
	ba_delay 0
	ba_createsprite 0x085AD53C, ANIM_ATTACKER, 120, 3, -12, -10, 46
	ba_delay 0
	ba_createsprite 0x085AD53C, ANIM_ATTACKER, 119, 3, 14, 14, 46
	ba_delay 0
	ba_createsprite 0x085AD53C, ANIM_ATTACKER, 118, 3, 0, 0, 46
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_ATTACKER
	ba_invisible ANIM_ATTACKER
	ba_delay 0
	ba_blendoff
	ba_end
General_FocusBand:
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 0, 2, 7, 0, 9, 31
	ba_playsewithpan 0x00AB, SOUND_PAN_ATTACKER
	ba_createvisualtask sub_0815DACC, 5, 30, 128, 0, 1, 2, 0, 1
	ba_waitforvisualfinish
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 0, 2, 4, 9, 0, 31
	ba_waitforvisualfinish
	ba_delay 6
	ba_createsprite 0x0855A988, ANIM_ATTACKER, 0, 0, 0, 15
	ba_end
General_Rain:
	ba_loadspritegfx 0x2783
	ba_playsewithpan 0x007F, SOUND_PAN_ATTACKER
	ba_createvisualtask sub_08116E70, 10, 1921, 2, 0, 4, 0
	ba_waitforvisualfinish
	ba_createvisualtask AnimTask_CreateRaindrops, 2, 0, 3, 60
	ba_createvisualtask AnimTask_CreateRaindrops, 2, 0, 3, 60
	ba_delay 50
	ba_waitforvisualfinish
	ba_createvisualtask sub_08116E70, 10, 1921, 2, 4, 0, 0
	ba_waitforvisualfinish
	ba_end
General_Sun:
	ba_goto BattleAnimScript_08280C8E
General_Sandstorm:
	ba_goto BattleAnimScript_08280402
General_Hail:
	ba_goto BattleAnimScript_0827C202
General_LeechSeedDrain:
	ba_createvisualtask AnimTask_GetBattlersFromArg, 5
	ba_delay 0
	ba_goto BattleAnimScript_0827F526
General_MonHit:
	ba_loadspritegfx 0x2797
	ba_monbg ANIM_TARGET
	ba_setalpha 12, 8
	ba_playsewithpan 0x0086, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_ATTACKER, 2, 0, 0, 1, 2
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 3, 0, 6, 1
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_TARGET
	ba_blendoff
	ba_end
General_ItemSteal:
	ba_loadspritegfx 0x27F0
	ba_createvisualtask sub_08118780, 2
	ba_createvisualtask AnimTask_TargetToEffectBattler, 2
	ba_delay 1
	ba_createsprite 0x0856E254, ANIM_ATTACKER, 2, 0, -5, 10, 2, 0xFFFF
	ba_end
General_SnatchMove:
	ba_loadspritegfx 0x27F0
	ba_createvisualtask sub_081186E4, 2
	ba_call BattleAnimScript_08286B2A
	ba_delay 1
	ba_createvisualtask AnimTask_SwayMon, 2, 0, 5, 0x1400, 4, 1
	ba_waitforvisualfinish
	ba_createvisualtask AnimTask_IsTargetSameSide, 2
	ba_jumpargeq 0x07, 0, BattleAnimScript_08286926
	ba_goto BattleAnimScript_08286936
BattleAnimScript_0828691F: @ 0x0828691F
	ba_waitforvisualfinish
	ba_call BattleAnimScript_08286B4A
	ba_end
BattleAnimScript_08286926: @ 0x08286926
	ba_playsewithpan 0x0087, SOUND_PAN_ATTACKER
	ba_createvisualtask AnimTask_SnatchOpposingMonMove, 2
	ba_goto BattleAnimScript_0828691F
BattleAnimScript_08286936: @ 0x08286936
	ba_playsewithpan 0x0087, SOUND_PAN_ATTACKER
	ba_createvisualtask AnimTask_SnatchPartnerMove, 2
	ba_goto BattleAnimScript_0828691F
General_FutureSightHit:
	ba_createvisualtask sub_08118760, 2
	ba_monbg ANIM_DEF_PARTNER
	ba_playsewithpan 0x00BD, SOUND_PAN_ATTACKER
	ba_call BattleAnimScript_08286258
	ba_setalpha 8, 8
	ba_playsewithpan 0x00B8, SOUND_PAN_TARGET
	ba_waitplaysewithpan 0x00B8, SOUND_PAN_TARGET, 8
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 4, 0, 15, 1
	ba_createvisualtask AnimTask_ScaleMonAndRestore, 5, -5, -5, 15, 1, 1
	ba_waitforvisualfinish
	ba_createvisualtask AnimTask_ShakeMon, 2, 1, 4, 0, 24, 1
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_waitforvisualfinish
	ba_delay 1
	ba_call BattleAnimScript_08286264
	ba_end
General_DoomDesireHit:
	ba_createvisualtask sub_08118760, 2
	ba_loadspritegfx 0x27D6
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 3, 0, 16, 0x7FFF
	ba_waitforvisualfinish
	ba_delay 10
	ba_createvisualtask sub_0815BFE0, 5
	ba_delay 9
	ba_playsewithpan 0x00C4, SOUND_PAN_ATTACKER
	ba_delay 9
	ba_playsewithpan 0x00C4, 0x00
	ba_delay 9
	ba_playsewithpan 0x00C4, SOUND_PAN_TARGET
	ba_delay 25
	ba_createvisualtask AnimTask_ShakeMonInPlace, 2, 1, 10, 0, 20, 1
	ba_playsewithpan 0x00B1, SOUND_PAN_TARGET
	ba_createsprite gExplosionSpriteTemplate, ANIM_ATTACKER, 3, 0, 0, 1, 1
	ba_delay 6
	ba_playsewithpan 0x00B1, SOUND_PAN_TARGET
	ba_createsprite gExplosionSpriteTemplate, ANIM_ATTACKER, 3, 24, -24, 1, 1
	ba_delay 6
	ba_playsewithpan 0x00B1, SOUND_PAN_TARGET
	ba_createsprite gExplosionSpriteTemplate, ANIM_ATTACKER, 3, -16, 16, 1, 1
	ba_delay 6
	ba_playsewithpan 0x00B1, SOUND_PAN_TARGET
	ba_createsprite gExplosionSpriteTemplate, ANIM_ATTACKER, 3, -24, -12, 1, 1
	ba_delay 6
	ba_playsewithpan 0x00B1, SOUND_PAN_TARGET
	ba_createsprite gExplosionSpriteTemplate, ANIM_ATTACKER, 3, 16, 16, 1, 1
	ba_waitforvisualfinish
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 3, 16, 0, 0x7FFF
	ba_waitforvisualfinish
	ba_end
General_FocusPunchSetUp:
	ba_loadspritegfx 0x27C8
	ba_playsewithpan 0x00AB, SOUND_PAN_ATTACKER
	ba_call BattleAnimScript_0827BC53
	ba_delay 8
	ba_createvisualtask sub_08116254, 2, 2, 2, 2, 0, 11, 31
	ba_createvisualtask AnimTask_ShakeMon2, 2, 0, 1, 0, 32, 1
	ba_call BattleAnimScript_0827BC53
	ba_delay 8
	ba_call BattleAnimScript_0827BC53
	ba_waitforvisualfinish
	ba_end
General_IngrainHeal:
	ba_loadspritegfx 0x27A3
	ba_loadspritegfx 0x272F
	ba_monbg ANIM_DEF_PARTNER
	ba_setalpha 12, 8
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 1, 0, 4, 0x33ED
	ba_waitforvisualfinish
	ba_delay 3
	ba_call BattleAnimScript_0827F595
	ba_waitforvisualfinish
	ba_delay 15
	ba_call BattleAnimScript_08285F66
	ba_waitforvisualfinish
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 1, 4, 0, 0x33ED
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_end
General_WishHeal:
	ba_loadspritegfx 0x2741
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 3, 0, 10, 0
	ba_waitforvisualfinish
	ba_playsewithpan 0x008C, SOUND_PAN_ATTACKER
	ba_call BattleAnimScript_08285F3B
	ba_waitforvisualfinish
	ba_unloadspritegfx 0x2741
	ba_loadspritegfx 0x272F
	ba_call BattleAnimScript_08285F66
	ba_waitforvisualfinish
	ba_createsprite 0x08572E58, ANIM_ATTACKER, 2, 1, 3, 10, 0, 0
	ba_end
BattleAnimScript_08286B2A: @ 0x08286B2A
	ba_createvisualtask AnimTask_IsAttackerBehindSubstitute, 2
	ba_jumpargeq 0x07, 1, BattleAnimScript_08286B3B
BattleAnimScript_08286B39: @ 0x08286B39
	ba_waitforvisualfinish
	ba_return
BattleAnimScript_08286B3B: @ 0x08286B3B
	ba_createvisualtask sub_081729D4, 2, 1
	ba_waitforvisualfinish
	ba_goto BattleAnimScript_08286B39
BattleAnimScript_08286B4A: @ 0x08286B4A
	ba_createvisualtask AnimTask_IsAttackerBehindSubstitute, 2
	ba_jumpargeq 0x07, 1, BattleAnimScript_08286B5B
BattleAnimScript_08286B59: @ 0x08286B59
	ba_waitforvisualfinish
	ba_return
BattleAnimScript_08286B5B: @ 0x08286B5B
	ba_createvisualtask sub_081729D4, 2, 0
	ba_waitforvisualfinish
	ba_goto BattleAnimScript_08286B59
Special_LevelUp:
BattleAnimScript_08286B6A: @ 0x08286B6A
	ba_playsewithpan 0x005B, 0x00
	ba_createvisualtask sub_08170704, 2
	ba_delay 0
	ba_createvisualtask sub_081707F0, 5, 0, 0
	ba_waitforvisualfinish
	ba_createvisualtask sub_081707D0, 2
	ba_end
Special_SwitchOutPlayerMon:
BattleAnimScript_08286B8B: @ 0x08286B8B
	ba_createvisualtask sub_08170994, 2
	ba_delay 10
	ba_createvisualtask sub_081708E8, 2
	ba_end
Special_SwitchOutOpponentMon:
BattleAnimScript_08286B9C: @ 0x08286B9C
	ba_createvisualtask sub_08170994, 2
	ba_delay 10
	ba_createvisualtask sub_081708E8, 2
	ba_end
Special_BallThrow:
BattleAnimScript_08286BAD: @ 0x08286BAD
	ba_createvisualtask sub_08170AE0, 2
	ba_delay 0
	ba_playsewithpan 0x003D, 0x00
	ba_createvisualtask sub_08170BE8, 2
	ba_createvisualtask AnimTask_IsBallBlockedByTrainer, 2
	ba_jumpargeq 0x07, 0xFFFF, BattleAnimScript_08286BD9
BattleAnimScript_08286BD0: @ 0x08286BD0
	ba_waitforvisualfinish
	ba_createvisualtask sub_08170B08, 2
	ba_end
BattleAnimScript_08286BD9: @ 0x08286BD9
	ba_loadspritegfx 0x2797
	ba_delay 25
	ba_monbg ANIM_DEF_PARTNER
	ba_setalpha 12, 8
	ba_delay 0
	ba_playsewithpan 0x0086, SOUND_PAN_TARGET
	ba_createsprite gBattleAnimSpriteTemplate_BasicHit, ANIM_TARGET, 2, -4, -20, 1, 2
	ba_waitforvisualfinish
	ba_clearmonbg ANIM_DEF_PARTNER
	ba_blendoff
	ba_goto BattleAnimScript_08286BD0
Special_BallThrowWithTrainer:
BattleAnimScript_08286C01: @ 0x08286C01
	ba_createvisualtask sub_08170AE0, 2
	ba_delay 0
	ba_createvisualtask sub_08170D10, 2
	ba_waitforvisualfinish
	ba_createvisualtask sub_08170B08, 2
	ba_end
Special_SubstituteToMon:
BattleAnimScript_08286C1A: @ 0x08286C1A
	ba_createvisualtask sub_081729D4, 2, 1
	ba_end
Special_MonToSubstitute:
BattleAnimScript_08286C24: @ 0x08286C24
	ba_createvisualtask sub_081729D4, 2, 0
	ba_end

	.space 0x2, 0 @ alignment padding at 0x08286C2E
