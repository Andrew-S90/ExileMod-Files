ALTER TABLE vehicle ADD `territory_id` int(11) unsigned DEFAULT NULL AFTER `vehicle_texture`;
ALTER TABLE vehicle ADD `nickname` varchar(64) NOT NULL DEFAULT '' AFTER `territory_id`;
ALTER TABLE vehicle ADD KEY `vehicle_ibfk_2_idx` (`territory_id`);
ALTER TABLE vehicle ADD CONSTRAINT `vehicle_ibfk_2` FOREIGN KEY (`territory_id`) REFERENCES `territory` (`id`) ON DELETE CASCADE;