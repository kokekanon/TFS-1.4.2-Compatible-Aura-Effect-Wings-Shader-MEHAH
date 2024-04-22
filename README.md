forgottenserver [![Build Status](https://github.com/otland/forgottenserver/actions/workflows/build-vcpkg.yml/badge.svg?branch=master)](https://github.com/otland/forgottenserver/actions/workflows/build-vcpkg.yml "vcpkg build status") [![Build Status](https://github.com/otland/forgottenserver/actions/workflows/docker-image.yml/badge.svg?branch=master)](https://github.com/otland/forgottenserver/actions/workflows/docker-image.yml "Docker image build status")
===============

The Forgotten Server is a free and open-source MMORPG server emulator written in C++. It is a fork of the [OpenTibia Server](https://github.com/opentibia/server) project. To connect to the server, you can use [OTClient](https://github.com/edubart/otclient).

### Getting Started

* [Compiling](https://github.com/otland/forgottenserver/wiki/Compiling), alternatively download [releases](https://github.com/otland/forgottenserver/releases)
* [Scripting Reference](https://github.com/otland/forgottenserver/wiki/Script-Interface)
* [Contributing](https://github.com/otland/forgottenserver/wiki/Contributing)

### Support

If you need help, please visit the [support forum on OTLand](https://otland.net/forums/support.16/). Our issue tracker is not a support forum, and using it as one will result in your issue being closed. If you were unable to get assistance in the support forum, you should consider [becoming a premium user on OTLand](https://otland.net/account/upgrades) which grants you access to the premium support forum and supports OTLand financially.

### Issues

We use the [issue tracker on GitHub](https://github.com/otland/forgottenserver/issues). Keep in mind that everyone who is watching the repository gets notified by e-mail when there is activity, so be thoughtful and avoid writing comments that aren't meaningful for an issue (e.g. "+1"). If you'd like for an issue to be fixed faster, you should either fix it yourself and submit a pull request, or place a bounty on the issue.

Client:
```lua
g_game.enableFeature(GameWingsAurasEffectsShader)
g_game.enableFeature(GameFormatCreatureName)
g_game.enableFeature(GameCreatureShader)
g_game.enableFeature(GameCreatureAttachedEffect) 
g_game.enableFeature(GameItemShader)
g_game.enableFeature(GameItemTooltipV8);
```
DATA BASE
```sql
ALTER TABLE `players`
ADD COLUMN `currentwing` smallint UNSIGNED NOT NULL DEFAULT '0',
ADD COLUMN `randomizewing` tinyint NOT NULL DEFAULT '0',
ADD COLUMN `currentaura` smallint UNSIGNED NOT NULL DEFAULT '0',
ADD COLUMN `randomizeaura` tinyint NOT NULL DEFAULT '0',
ADD COLUMN `currenteffect` smallint UNSIGNED NOT NULL DEFAULT '0',
ADD COLUMN `randomizeeffect` tinyint NOT NULL DEFAULT '0',
ADD COLUMN `currentshader` smallint UNSIGNED NOT NULL DEFAULT '0',
ADD COLUMN `randomizeshader` tinyint NOT NULL DEFAULT '0';
```


```sql
ALTER TABLE `players`
ADD COLUMN `currentwing` smallint UNSIGNED NOT NULL DEFAULT '0',
ADD COLUMN `randomizewing` tinyint NOT NULL DEFAULT '0',
ADD COLUMN `currentaura` smallint UNSIGNED NOT NULL DEFAULT '0',
ADD COLUMN `randomizeaura` tinyint NOT NULL DEFAULT '0',
ADD COLUMN `currenteffect` smallint UNSIGNED NOT NULL DEFAULT '0',
ADD COLUMN `randomizeeffect` tinyint NOT NULL DEFAULT '0',
ADD COLUMN `currentshader` smallint UNSIGNED NOT NULL DEFAULT '0',
ADD COLUMN `randomizeshader` tinyint NOT NULL DEFAULT '0';
```
```sql
CREATE TABLE IF NOT EXISTS `player_wings` (
  `player_id` int NOT NULL DEFAULT '0',
  `wing_id` smallint unsigned NOT NULL DEFAULT '0',
  PRIMARY KEY (`player_id`,`wing_id`),
  FOREIGN KEY (`player_id`) REFERENCES `players`(`id`) ON DELETE CASCADE
) ENGINE=InnoDB DEFAULT CHARACTER SET=utf8;

CREATE TABLE IF NOT EXISTS `player_effects` (
  `player_id` int NOT NULL DEFAULT '0',
  `effect_id` smallint unsigned NOT NULL DEFAULT '0',
  PRIMARY KEY (`player_id`,`effect_id`),
  FOREIGN KEY (`player_id`) REFERENCES `players`(`id`) ON DELETE CASCADE
) ENGINE=InnoDB DEFAULT CHARACTER SET=utf8;

CREATE TABLE IF NOT EXISTS `player_auras` (
  `player_id` int NOT NULL DEFAULT '0',
  `aura_id` smallint unsigned NOT NULL DEFAULT '0',
  PRIMARY KEY (`player_id`,`aura_id`),
  FOREIGN KEY (`player_id`) REFERENCES `players`(`id`) ON DELETE CASCADE
) ENGINE=InnoDB DEFAULT CHARACTER SET=utf8;

CREATE TABLE IF NOT EXISTS `player_shaders` (
  `player_id` int(11) NOT NULL DEFAULT 0,
  `shader_id` smallint(5) UNSIGNED NOT NULL DEFAULT 0,
  PRIMARY KEY (`player_id`, `shader_id`),
  FOREIGN KEY (`player_id`) REFERENCES `players`(`id`) ON DELETE CASCADE
) ENGINE=InnoDB DEFAULT CHARACTER SET=utf8;
```

![img](https://github.com/Nottinghster/otclient/assets/114332266/782e0fcf-b1cf-451e-b102-d7e7943bd50b)